unit subject;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure dataGridView1_CellEndEdit(sender: Object; e: DataGridViewCellEventArgs);
    procedure dataGridView1_RowsRemoved(sender: Object; e: DataGridViewRowsRemovedEventArgs);
  {$region FormDesigner}
  private
    {$resource subject.Form1.resources}
    label1: &Label;
    textBox1: TextBox;
    button1: Button;
    components: System.ComponentModel.IContainer;
    errorProvider1: ErrorProvider;
    dataGridView1: DataGridView;
    Column1: DataGridViewTextBoxColumn;
    Column2: DataGridViewTextBoxColumn;
    {$include subject.Form1.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

var
  ff: textfile;
  s: string;

var
  m: array of string;

procedure readsubject;
begin
  assignfile(ff, 'subject.txt');
  if FileExists('subject.txt') then
  begin
    reset(ff);
    while not eof(ff) do
    begin
      var i: integer;
      setlength(m, i + 1);
      Readln(ff, m[i]);
      inc(i);
    end;
    closefile(ff);
  end
  else
  begin
    Rewrite(ff);
    closefile(ff);
  end;
end;

//Добавление
procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  errorProvider1.Clear;
  if textbox1.Text = '' then errorProvider1.SetError(textbox1, 'Нельзя вводить пустую строку') else
  begin
    s := textbox1.text;
    assignfile(ff, 'subject.txt');
    append(ff);
    writeln(ff, s);
    closefile(ff);
    textbox1.text := '';
    readsubject;
  end;
  
  for var i:=0 to m.length-1 do
  begin
    dataGridView1.RowCount := m.Length; // Фиксируем число строк
    dataGridView1.ColumnCount := 2; //и столбцов
    datagridview1[0, i].value := i+1;
    datagridview1[1, i].value := m[i];
  end;
  
end;

//загрузка формы
procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
  DataGridView1.Columns[0].HeaderText := '№ п/п';
  DataGridView1.Columns[1].HeaderText := 'Дисциплина';
  
  setlength(m, 1);
  readsubject;
  
  for var i:=0 to m.Length-1 do
  begin
    dataGridView1.RowCount := m.Length; // Фиксируем число строк
    dataGridView1.ColumnCount := 2; //и столбцов
    datagridview1[0, i].value := i+1;
    datagridview1[1, i].value := m[i];
  end;
end;

procedure Form1.dataGridView1_CellEndEdit(sender: Object; e: DataGridViewCellEventArgs);
begin

  //wfile; //перезаписать в файл новый массив
end;

procedure Form1.dataGridView1_RowsRemoved(sender: Object; e: DataGridViewRowsRemovedEventArgs);
begin
  setlength(m,m.Length-1);
  
  for var i := 0 to dataGridView1.RowCount - 1 do
  begin
    for var j := 0 to dataGridView1.ColumnCount - 1 do
    begin
      m[i] := dataGridView1.Rows[i].Cells[1].Value.tostring;
    end;
  end;
    
  assignfile(ff, 'subject.txt');
  rewrite(ff);
  
  for var i:=0 to m.Length-1 do
  begin
    writeln(ff,m[i]);
  end;
  
  closefile(ff);
end;

end.
