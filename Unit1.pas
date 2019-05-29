unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms, search, subject, add_rating, rating, ref;

type
  stud = record
    n_zach: record
      fam, name, otc: string[30];
      date: string[10];
      nn, n_tel: string[12];
      rating: record
        semestr: 0..12;
        sub: array [0..12, 0..19] of string[30];
        rat: array [0..12, 0..19, 0..39] of integer;
      end;
      parents: record
        fam, name, otc, n_tel, komment: array [0..5] of string[30];
      end;
    end;
  end;
  
  Form1 = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure toolStripMenuItem3_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem5_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem6_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem7_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem8_Click(sender: Object; e: EventArgs);
    procedure textBox6_KeyPress(sender: Object; e: KeyPressEventArgs);
    procedure textBox1_KeyPress(sender: Object; e: KeyPressEventArgs);
    procedure textBox2_KeyPress(sender: Object; e: KeyPressEventArgs);
    procedure textBox3_KeyPress(sender: Object; e: KeyPressEventArgs);
    procedure textBox7_KeyPress(sender: Object; e: KeyPressEventArgs);
    procedure textBox8_KeyPress(sender: Object; e: KeyPressEventArgs);
    procedure textBox9_KeyPress(sender: Object; e: KeyPressEventArgs);
    procedure dataGridView1_CellEndEdit(sender: Object; e: DataGridViewCellEventArgs);
    procedure textBox4_KeyPress(sender: Object; e: KeyPressEventArgs);
    procedure dataGridView1_RowsRemoved(sender: Object; e: DataGridViewRowsRemovedEventArgs);
    procedure dataGridView1_RowsAdded(sender: Object; e: DataGridViewRowsAddedEventArgs);
    procedure Form1_KeyPress(sender: Object; e: KeyPressEventArgs);
  {$region FormDesigner}
  private
    {$resource Unit1.Form1.resources}
    dataGridView1: DataGridView;
    label1: &Label;
    textBox1: TextBox;
    label2: &Label;
    textBox2: TextBox;
    label3: &Label;
    textBox3: TextBox;
    label4: &Label;
    textBox7: TextBox;
    label8: &Label;
    textBox8: TextBox;
    label9: &Label;
    menuStrip1: MenuStrip;
    toolStripMenuItem1: ToolStripMenuItem;
    toolStripMenuItem3: ToolStripMenuItem;
    toolStripMenuItem2: ToolStripMenuItem;
    toolStripMenuItem5: ToolStripMenuItem;
    errorProvider1: ErrorProvider;
    components: System.ComponentModel.IContainer;
    toolTip1: ToolTip;
    toolStripMenuItem4: ToolStripMenuItem;
    toolStripMenuItem8: ToolStripMenuItem;
    Column1: DataGridViewTextBoxColumn;
    Column2: DataGridViewTextBoxColumn;
    Column3: DataGridViewTextBoxColumn;
    Column4: DataGridViewTextBoxColumn;
    Column5: DataGridViewTextBoxColumn;
    Column6: DataGridViewTextBoxColumn;
    Column7: DataGridViewTextBoxColumn;
    textBox4: TextBox;
    button1: Button;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

var
  f: file of stud;
  a: array of stud;

procedure wfile; forward;
implementation

procedure rfile;
begin
  var i := 0;
  assign(f, 'st.dat');
  if FileExists('st.dat') then
  begin
    reset(f);
    while not eof(f) do
    begin
      SetLength(a, i + 1);
      read(f, a[i]);
      inc(i);
    end;
    close(f);
  end else
  begin
    Rewrite(f);
    close(f);
  end;
end;

procedure wfile;
begin
  assign(f, 'st.dat');
  rewrite(f);
  for i: integer := 0 to a.Length - 1 do
  begin
    write(f, a[i]);
  end;
  close(f);
end;

//добавление в datagrid и запись в файл
procedure Form1.button1_Click(sender: Object; e: EventArgs);
var
  g: integer;
begin
  errorprovider1.clear;
  
  var t1: boolean := true;  var t2: boolean := true;  var t3: boolean := true;
  var t7: boolean := true;  var t8 := true;
  var c1: boolean := true;  var c2: boolean := true;  var t4 := true;
  
  //проверка введенной даты рождения
  var t := textbox4.text;
  for var i := 1 to t.length do
  begin
    var c := t[1] + t[2];
    var cc := t[4] + t[5];
    var ccc := t[7] + t[8] + t[9] + t[10];
    if (t[3] = '.') and (t[6] = '.') and (t.length = 10) and (c.tointeger < 32) 
    and (cc.tointeger < 13) and (ccc.tointeger > 1900) then
      t4 := false else t4 := true;
  end;
  
  //проверка введонного номера телефона
  t := textbox8.text;
  var g1 := 0;
  for var i := 1 to t.length do
  begin
    if t[i] = '+' then inc(g1);
    if ((t[1] = '+') and (t[2] = '7') and (t.length = 12) and (g1 = 1)) then t8 := false else t8 := true;
    //messagebox.show(g1.tostring);
  end;
  
  if textbox1.text <> '' then t1 := false; if textbox2.text <> '' then t2 := false;
  if textbox3.text <> '' then t3 := false; if textbox7.text <> '' then t7 := false; 
  //if textbox8.text <> '' then t8 := false;
  
  if t1 = true then errorprovider1.seterror(textbox1, 'Некорректный ввод');
  if t2 = true then errorprovider1.seterror(textbox2, 'Некорректный ввод');
  if t3 = true then errorprovider1.seterror(textbox3, 'Некорректный ввод');
  if t4 = true then errorprovider1.seterror(textbox4, 'Введите дату в формате: 01.01.2001');
  if t7 = true then errorprovider1.seterror(textbox7, 'Некорректный ввод, введите до 10 цифр');
  if t8 = true then errorprovider1.seterror(textbox8, 'Некорректный ввод, введите в формате +71234567891');
  
  if ((t8 = false) and (t7 = false) and (t3 = false) 
  and (t2 = false) and (t1 = false) and (t4 = false)) then
  begin
    errorprovider1.clear;
    setlength(a, a.Length + 1);
    a[a.Length - 1].n_zach.n_tel := textbox8.text;
    a[a.Length - 1].n_zach.date := textbox4.text;
    a[a.Length - 1].n_zach.otc := textbox3.text;
    a[a.Length - 1].n_zach.nn := textbox7.text;
    a[a.Length - 1].n_zach.name := textbox2.text;
    a[a.Length - 1].n_zach.fam := textbox1.text;
    wfile;
    
    //добавлено для обновления datagrid
    for i: integer := 0 to a.length - 1 do
    begin
      dataGridView1.RowCount := a.Length; // Фиксируем число строк
      dataGridView1.ColumnCount := 7; //и столбцов
      datagridview1[0, i].value := i + 1;
      datagridview1[1, i].value := a[i].n_zach.fam;
      datagridview1[2, i].value := a[i].n_zach.name;
      datagridview1[3, i].value := a[i].n_zach.otc;
      datagridview1[4, i].value := a[i].n_zach.date;
      datagridview1[5, i].value := a[i].n_zach.nn;
      datagridview1[6, i].value := a[i].n_zach.n_tel;
    end;
    
    textbox1.text := ''; textbox2.text := ''; textbox3.text := '';
    textbox7.text := ''; textbox8.text := ''; textbox4.text := '';
    
  end;
end;

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
  setlength(a, 1);
  rfile;
  //write(a[0].n_zach.rating.rat);
  //Наименования столбцов
  DataGridView1.Columns[0].HeaderText := '№ п/п';
  DataGridView1.Columns[1].HeaderText := 'Фамилия';
  DataGridView1.Columns[2].HeaderText := 'Имя';
  DataGridView1.Columns[3].HeaderText := 'Отчество';
  DataGridView1.Columns[4].HeaderText := 'Дата рождения';
  DataGridView1.Columns[5].HeaderText := '№ зачетки';
  DataGridView1.Columns[6].HeaderText := '№ телефона';
  
  for i: integer := 0 to a.length - 1 do
  begin
    dataGridView1.RowCount := a.Length; // Фиксируем число строк
    dataGridView1.ColumnCount := 7; //и столбцов
    datagridview1[0, i].value := i + 1;
    datagridview1[1, i].value := a[i].n_zach.fam;
    datagridview1[2, i].value := a[i].n_zach.name;
    datagridview1[3, i].value := a[i].n_zach.otc;
    datagridview1[4, i].value := a[i].n_zach.date;
    datagridview1[5, i].value := a[i].n_zach.nn;
    datagridview1[6, i].value := a[i].n_zach.n_tel;
  end;
end;

procedure Form1.toolStripMenuItem3_Click(sender: Object; e: EventArgs);
begin
  var f := new search.form1;
  f.showdialog;
end;

procedure Form1.toolStripMenuItem5_Click(sender: Object; e: EventArgs);
begin
  var f := new subject.Form1;
  f.showdialog;
end;

procedure Form1.toolStripMenuItem6_Click(sender: Object; e: EventArgs);
begin
  textbox1.text := search.n_zach_s;
  assignfile(f, 'subject.txt');
  if FileExists('subject.txt') then
  begin
    var f := new add_rating.Form1;
    f.showdialog;
  end else
  begin
    messagebox.show('Вначале необходимо добавить дисциплины');
  end;
end;

procedure Form1.toolStripMenuItem7_Click(sender: Object; e: EventArgs);
begin
  var f := new rating.Form1;
  f.showdialog;
end;

procedure Form1.toolStripMenuItem8_Click(sender: Object; e: EventArgs);
begin
  var d := new ref.form1;
  d.showdialog;
end;

procedure Form1.textBox6_KeyPress(sender: Object; e: KeyPressEventArgs);
begin
  if (Char.IsDigit(e.KeyChar) or (e.KeyChar = chr(8))) then
  else e.Handled := true;
end;

procedure Form1.textBox1_KeyPress(sender: Object; e: KeyPressEventArgs);
begin
  if (((e.keychar >= chr(1040)) and (e.keychar <= chr(1071))) or ((e.keychar >= chr(1072)) and (e.keychar <= chr(1103))) or (e.KeyChar = chr(8))) then
  else e.Handled := true;
  //textbox2.text:=e.keychar+' '+ord(e.keychar);
end;

procedure Form1.textBox2_KeyPress(sender: Object; e: KeyPressEventArgs);
begin
  if (((e.keychar >= chr(1040)) and (e.keychar <= chr(1071))) or ((e.keychar >= chr(1072)) and (e.keychar <= chr(1103))) or (e.KeyChar = chr(8))) then
  else e.Handled := true;
end;

procedure Form1.textBox3_KeyPress(sender: Object; e: KeyPressEventArgs);
begin
  if (((e.keychar >= chr(1040)) and (e.keychar <= chr(1071))) or ((e.keychar >= chr(1072)) and (e.keychar <= chr(1103))) or (e.KeyChar = chr(8))) then
  else e.Handled := true;
end;

procedure Form1.textBox7_KeyPress(sender: Object; e: KeyPressEventArgs);
begin
  if (Char.IsDigit(e.KeyChar) or (e.KeyChar = chr(8))) then
  else e.Handled := true;
end;

procedure Form1.textBox8_KeyPress(sender: Object; e: KeyPressEventArgs);
begin
  if (Char.IsDigit(e.KeyChar) or (e.KeyChar = chr(8)) or (e.keychar = '+')) then
  else e.Handled := true;
end;

procedure Form1.textBox9_KeyPress(sender: Object; e: KeyPressEventArgs);
begin
  if (Char.IsDigit(e.KeyChar) or (e.KeyChar = chr(8))) then
  else e.Handled := true;
end;

procedure Form1.dataGridView1_CellEndEdit(sender: Object; e: DataGridViewCellEventArgs);
begin
  
  for var i := 0 to dataGridView1.RowCount - 1 do
  begin
    for var j := 0 to dataGridView1.ColumnCount - 1 do
    begin
      a[i].n_zach.fam := dataGridView1.Rows[i].Cells[1].Value.tostring;;
      a[i].n_zach.name := dataGridView1.Rows[i].Cells[2].Value.tostring;
      a[i].n_zach.otc := dataGridView1.Rows[i].Cells[3].Value.tostring;
      a[i].n_zach.date := dataGridView1.Rows[i].Cells[4].Value.tostring;
      a[i].n_zach.nn := dataGridView1.Rows[i].Cells[5].Value.tostring;
      a[i].n_zach.n_tel := dataGridView1.Rows[i].Cells[6].Value.tostring;
    end;
  end;
  
  wfile; //перезаписать в файл новый массив
end;

procedure Form1.textBox4_KeyPress(sender: Object; e: KeyPressEventArgs);
begin
  if (Char.IsDigit(e.KeyChar) or (e.KeyChar = chr(8)) or (e.keychar = '.')) then
  else e.Handled := true;
end;

procedure Form1.dataGridView1_RowsRemoved(sender: Object; e: DataGridViewRowsRemovedEventArgs);
begin
  SetLength(a, a.Length - 1);
  
  for var i := 0 to dataGridView1.RowCount - 1 do
  begin
    for var j := 0 to dataGridView1.ColumnCount - 1 do
    begin
      a[i].n_zach.fam := dataGridView1.Rows[i].Cells[1].Value.tostring;;
      a[i].n_zach.name := dataGridView1.Rows[i].Cells[2].Value.tostring;
      a[i].n_zach.otc := dataGridView1.Rows[i].Cells[3].Value.tostring;
      a[i].n_zach.date := dataGridView1.Rows[i].Cells[4].Value.tostring;
      a[i].n_zach.nn := dataGridView1.Rows[i].Cells[5].Value.tostring;
      a[i].n_zach.n_tel := dataGridView1.Rows[i].Cells[6].Value.tostring;
    end;
  end;
  
  wfile; //перезаписать в файл новый массив
end;

procedure Form1.dataGridView1_RowsAdded(sender: Object; e: DataGridViewRowsAddedEventArgs);
begin
  //writeln(a.Length);
  //SetLength(a, a.Length + 1);
  //writeln(' ',a.Length);
  //rfile;
  //SetLength(a, a.Length + 5);
  
  {for var i := 0 to dataGridView1.RowCount - 1 do
  begin
  for var j := 0 to dataGridView1.ColumnCount - 1 do
  begin
  a[i].fam := dataGridView1.Rows[i].Cells[1].Value.tostring;;
  a[i].name := dataGridView1.Rows[i].Cells[2].Value.tostring;
  a[i].otc := dataGridView1.Rows[i].Cells[3].Value.tostring;
  a[i].date := dataGridView1.Rows[i].Cells[4].Value.tostring;
  a[i].n_zach := dataGridView1.Rows[i].Cells[5].Value.tostring;
  a[i].n_tel := dataGridView1.Rows[i].Cells[6].Value.tostring;
  end;
  end;
  
  // wfile; //перезаписать в файл новый массив}
end;

procedure Form1.Form1_KeyPress(sender: Object; e: KeyPressEventArgs);
begin
end;

end.