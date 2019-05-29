unit search;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure button3_Click(sender: Object; e: EventArgs);
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure textBox2_KeyPress(sender: Object; e: KeyPressEventArgs);
    procedure dataGridView3_CellEndEdit(sender: Object; e: DataGridViewCellEventArgs);
    procedure dataGridView3_RowsRemoved(sender: Object; e: DataGridViewRowsRemovedEventArgs);
    procedure dataGridView2_RowsRemoved(sender: Object; e: DataGridViewRowsRemovedEventArgs);
    procedure dataGridView2_CellEndEdit(sender: Object; e: DataGridViewCellEventArgs);
  {$region FormDesigner}
  private
    {$resource search.Form1.resources}
    textBox2: TextBox;
    label2: &Label;
    button3: Button;
    components: System.ComponentModel.IContainer;
    errorProvider1: ErrorProvider;
    dataGridView3: DataGridView;
    button2: Button;
    dataGridView2: DataGridView;
    dataGridView1: DataGridView;
    Column1: DataGridViewTextBoxColumn;
    Column2: DataGridViewTextBoxColumn;
    Column3: DataGridViewTextBoxColumn;
    Column4: DataGridViewTextBoxColumn;
    Column5: DataGridViewTextBoxColumn;
    Column6: DataGridViewTextBoxColumn;
    Column7: DataGridViewTextBoxColumn;
    Column11: DataGridViewTextBoxColumn;
    Column12: DataGridViewTextBoxColumn;
    Column13: DataGridViewTextBoxColumn;
    Column14: DataGridViewTextBoxColumn;
    Column15: DataGridViewTextBoxColumn;
    Column16: DataGridViewTextBoxColumn;
    dataGridView4: DataGridView;
    Column38: DataGridViewTextBoxColumn;
    Column39: DataGridViewTextBoxColumn;
    Column40: DataGridViewTextBoxColumn;
    comboBox3: ComboBox;
    label4: &Label;
    Column8: DataGridViewTextBoxColumn;
    Column9: DataGridViewTextBoxColumn;
    Column10: DataGridViewTextBoxColumn;
    button1: Button;
    {$include search.Form1.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

var
  check := false;
  n_zach_s := '';

implementation

uses add_rating, unit1, parentsf;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  n_zach_s := textbox2.text;
  
  var tmp := 0;
  
  //информация о студенте
  var k := 0;
  for i: integer := 0 to a.Length - 1 do
  begin
    if n_zach_s = a[i].n_zach.nn then 
    begin
      button3.enabled := true; 
      button2.enabled := true; 
      inc(k);
      //добавлено для обновления datagrid
      dataGridView1.RowCount := k; // Фиксируем число строк
      dataGridView1.ColumnCount := 7; //и столбцов
      datagridview1[0, k - 1].value := k;
      datagridview1[1, k - 1].value := a[i].n_zach.fam;
      datagridview1[2, k - 1].value := a[i].n_zach.name;
      datagridview1[3, k - 1].value := a[i].n_zach.otc;
      datagridview1[4, k - 1].value := a[i].n_zach.date;
      datagridview1[5, k - 1].value := a[i].n_zach.nn;
      datagridview1[6, k - 1].value := a[i].n_zach.n_tel;
      break;
    end;
  end;
  
  if k = 0 then
  begin
    button3.enabled := false; 
    button2.enabled := false; 
    messagebox.show('Нет совпадений'); //у студента
  end;
  
  //отображение оценок в строку
  for var i := 0 to a.length - 1 do
  begin
    a[i].n_zach.rating.semestr := combobox3.text.tointeger;
    if a[i].n_zach.nn = n_zach_s  then
    begin
      dataGridView2.RowCount := 1; // Фиксируем число строк
      dataGridView2.ColumnCount := 42; //и столбцов
      
      for var Дисциплина := 0 to 19 do //проход по дисциплинам
      begin
        if a[i].n_zach.rating.sub[a[i].n_zach.rating.semestr, Дисциплина] = '' then break;
        dataGridView2.RowCount := Дисциплина + 1; // Фиксируем число строк
        datagridview2[0, Дисциплина].value := Дисциплина + 1;
        datagridview2[1, i + Дисциплина].value := a[i].n_zach.rating.sub[a[i].n_zach.rating.semestr, Дисциплина]; //вывести название дисциплины
        
        for var Оценка := 0 to 39 do //проход по оценкам
        begin
          
          if a[i].n_zach.rating.rat[a[i].n_zach.rating.semestr, Дисциплина, Оценка] <> 0 then 
            datagridview2[Оценка + 2, Дисциплина].value := a[i].n_zach.rating.rat[a[i].n_zach.rating.semestr, Дисциплина, Оценка]; //вывести название дисциплины
        end;
      end;
    end;
  end;
  
  //срднее арифметическое
  var sum := 0;
  k := 0;
  for var i := 0 to dataGridView2.RowCount - 1 do
  begin
    for var j := 2 to dataGridView2.ColumnCount - 1 do
    begin
      dataGridView4.RowCount := i + 1; // Фиксируем число строк
      dataGridView4.ColumnCount := 3; //и столбцов
      dataGridView4[0, i].value := i + 1;
      if dataGridView2.Rows[i].Cells[1].Value = nil then else dataGridView4[1, i].value := dataGridView2.Rows[i].Cells[1].Value.tostring;
      
      if (datagridview2[j, i].value <> nil) and (datagridview2[j, i].value.tostring.tointeger > 0) then
      begin
        inc(k);
        sum += datagridview2[j, i].value.tostring.tointeger;
      end;
    end;
    dataGridView4[2, i].value := (sum / k);
    sum := 0;
    k := 0;
  end;
  
  //информация о родителях
  k := 0;
  for var i := 0 to a.length - 1 do
  begin
    if a[i].n_zach.nn = n_zach_s then
    begin
      
      for var n := 0 to 5 do
      begin
        if a[i].n_zach.parents.fam[n] = '' then break;
        inc(k);
        dataGridView3.RowCount := k; // Фиксируем число строк
        dataGridView3.ColumnCount := 6; //и столбцов
        datagridview3[0, k - 1].value := k;
        datagridview3[1, k - 1].value := a[i].n_zach.parents.fam[n];
        datagridview3[2, k - 1].value := a[i].n_zach.parents.name[n];
        datagridview3[3, k - 1].value := a[i].n_zach.parents.otc[n];
        datagridview3[4, k - 1].value := a[i].n_zach.parents.n_tel[n];
        datagridview3[5, k - 1].value := a[i].n_zach.parents.komment[n];
      end;
    end;
  end;
end;

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
  var f1 := new parentsf.form1;
  f1.showdialog;
end;

procedure Form1.button3_Click(sender: Object; e: EventArgs);
begin
  var f := new add_rating.form1;
  f.showdialog;
end;

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
  
  //datagrid оценки
  DataGridView2.Columns[0].HeaderText := '№ п/п';
  DataGridView2.Columns[1].HeaderText := 'Дисциплина';
  DataGridView2.Columns[2].HeaderText := 'Оценка';
  
  //datagrid среднтй балл
  DataGridView4.Columns[0].HeaderText := '№ п/п';
  DataGridView4.Columns[1].HeaderText := 'Дисциплина';
  DataGridView4.Columns[2].HeaderText := 'Средний балл';
  
  //datagrid студент
  DataGridView1.Columns[0].HeaderText := '№ п/п';
  DataGridView1.Columns[1].HeaderText := 'Фамилия';
  DataGridView1.Columns[2].HeaderText := 'Имя';
  DataGridView1.Columns[3].HeaderText := 'Отчество';
  DataGridView1.Columns[4].HeaderText := 'Дата рождения';
  DataGridView1.Columns[5].HeaderText := '№ зачетки';
  DataGridView1.Columns[6].HeaderText := '№ телефона';
  
  //datagrid родители
  DataGridView3.Columns[0].HeaderText := '№ п/п';
  DataGridView3.Columns[1].HeaderText := 'Фамилия';
  DataGridView3.Columns[2].HeaderText := 'Имя';
  DataGridView3.Columns[3].HeaderText := 'Отчество';
  DataGridView3.Columns[4].HeaderText := '№ телефона';
  DataGridView3.Columns[5].HeaderText := 'Комментарий';
end;

procedure Form1.textBox2_KeyPress(sender: Object; e: KeyPressEventArgs);
begin
  if (Char.IsDigit(e.KeyChar) or (e.KeyChar = chr(8))) then
  else e.Handled := true;
end;

procedure Form1.dataGridView3_CellEndEdit(sender: Object; e: DataGridViewCellEventArgs);
begin
  for var i := 0 to dataGridView3.RowCount - 1 do
  begin
    for var j := 0 to dataGridView3.ColumnCount - 1 do
    begin
      for var n := 0 to 5 do
      begin
        if a[i].n_zach.parents.fam[n] = '' then
        begin
          a[i].n_zach.parents.fam[n] := dataGridView3.Rows[i].Cells[1].Value.tostring;;
          a[i].n_zach.parents.name[n] := dataGridView3.Rows[i].Cells[2].Value.tostring;
          a[i].n_zach.parents.otc[n] := dataGridView3.Rows[i].Cells[3].Value.tostring;
          a[i].n_zach.parents.n_tel[n] := dataGridView3.Rows[i].Cells[4].Value.tostring;
          a[i].n_zach.parents.komment[n] := dataGridView3.Rows[i].Cells[5].Value.tostring;
        end;
      end;
    end;
  end;
  
  wfile; //перезаписать в файл новый массив
end;

//удаление из формы
procedure Form1.dataGridView3_RowsRemoved(sender: Object; e: DataGridViewRowsRemovedEventArgs);
begin
  
end;

procedure Form1.dataGridView2_RowsRemoved(sender: Object; e: DataGridViewRowsRemovedEventArgs);
begin
  
end;

//изменение оценок
procedure Form1.dataGridView2_CellEndEdit(sender: Object; e: DataGridViewCellEventArgs);
begin
  
  for var Строка := 0 to dataGridView2.RowCount - 1 do
  begin
    for var Столбец := 2 to dataGridView2.ColumnCount - 1 do
    begin
      
      //отображение оценок в строку
      for var i := 0 to a.length - 1 do
      begin
        if a[i].n_zach.nn = n_zach_s  then
        begin
          
          for var Дисциплина := 0 to 19 do //проход по дисциплинам
          begin
           // var tmp:array [0..39] of string;//
            for var Оценка := 0 to 39 do //проход по оценкам
            begin
              //tmp[Оценка]:=dataGridView2.Rows[Строка].Cells[Столбец].Value.tostring;
              
              //a[i].n_zach.rating.rat[a[i].n_zach.rating.semestr, Дисциплина, Оценка] := tmp.tointeger;
            end;
            //writeln(tmp);
          end;
          
        end;
      end;
    end;
  end;
  //wfile;
  
end;

end.
