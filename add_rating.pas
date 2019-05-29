unit add_rating;

interface

uses System, System.Drawing, System.Windows.Forms, rating_rec;

type
  Form1 = class(Form)
    procedure comboBox1_SelectedIndexChanged(sender: Object; e: EventArgs);
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure textBox1_TextChanged(sender: Object; e: EventArgs);
    procedure textBox1_KeyPress(sender: Object; e: KeyPressEventArgs);
  {$region FormDesigner}
  private 
    {$resource add_rating.Form1.resources}
    label1: &Label;
    label2: &Label;
    textBox1: TextBox;
    label3: &Label;
    button1: Button;
    errorProvider1: ErrorProvider;
    components: System.ComponentModel.IContainer;
    comboBox2: ComboBox;
    comboBox3: ComboBox;
    label4: &Label;
    comboBox1: ComboBox;
    {$include add_rating.Form1.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

uses search, subject, unit1;

procedure Form1.comboBox1_SelectedIndexChanged(sender: Object; e: EventArgs);
begin
end;

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
var
  f: textfile;
begin
  var s: string;
  textbox1.text := search.n_zach_s;
  assignfile(f, 'subject.txt');
  if FileExists('subject.txt') then
  begin
    reset(f);
    while not eof(f) do
    begin
      readln(f, s);
      combobox1.items.add(s);
    end;
    closefile(f);
  end;
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  errorProvider1.Clear;
  var p, c1, c2: boolean;
  c1 := true; c2 := true;
  
  if combobox1.text <> '' then c1 := false;
  if combobox2.text <> '' then c2 := false;
  
  if c1 = true then errorprovider1.seterror(combobox1, 'Выберите значение');
  if c2 = true then errorprovider1.seterror(combobox2, 'Выберите значение');
  
  if ((c1 = false) and (c2 = false)) then
  begin
    errorProvider1.Clear;
    c1 := true;
    c2 := true;
    var d := 0;
    for var i := 0 to a.length - 1 do
    begin
      if a[i].n_zach.nn = search.n_zach_s then
      begin
        a[i].n_zach.rating.semestr := combobox3.text.tointeger;
        
        for var Дисциплина := 0 to 19 do
        begin
          
          if a[i].n_zach.rating.sub[a[i].n_zach.rating.semestr, Дисциплина] = combobox1.text then
          begin
            for var Оценка := 0 to 39 do
            begin
              if a[i].n_zach.rating.rat[a[i].n_zach.rating.semestr, Дисциплина, Оценка] = 0 then
              begin
                a[i].n_zach.rating.rat[a[i].n_zach.rating.semestr, Дисциплина, Оценка] := combobox2.text.tointeger;
                break;
              end;
            end;
            break;
          end else
          
          if a[i].n_zach.rating.sub[a[i].n_zach.rating.semestr, Дисциплина] = '' then
          begin
            a[i].n_zach.rating.sub[a[i].n_zach.rating.semestr, Дисциплина] := combobox1.text;
            for var Оценка := 0 to 39 do
            begin
              if a[i].n_zach.rating.rat[a[i].n_zach.rating.semestr, Дисциплина, Оценка] = 0 then
              begin
                a[i].n_zach.rating.rat[a[i].n_zach.rating.semestr, Дисциплина, Оценка] := combobox2.text.tointeger;
                break;
              end;
            end;
            break;
          end;
          
        end;
      end;
    end;
    wfile;
    messagebox.show('Оценка успешно добавлена', '');
  end;
end;

procedure Form1.textBox1_TextChanged(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.textBox1_KeyPress(sender: Object; e: KeyPressEventArgs);
begin
  if (Char.IsDigit(e.KeyChar) or (e.KeyChar = chr(8))) then
  else e.Handled := true;
end;

end.
