unit parentsf;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  pr = record
    fam, name, otc, n_tel,n_zach: string[30];
    komment: string[255];
  end;
  Form1 = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure Form1_Load(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    label1: &Label;
    textBox1: TextBox;
    textBox2: TextBox;
    label2: &Label;
    textBox3: TextBox;
    label3: &Label;
    textBox4: TextBox;
    label4: &Label;
    button1: Button;
    {$include parentsf.Form1.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

uses search, unit1;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  for var i:=0 to a.length-1 do
  begin
    if a[i].n_zach.nn=n_zach_s then
    begin
      
      for var n:=0 to 5 do
      begin
        if a[i].n_zach.parents.fam[n]='' then
        begin
          a[i].n_zach.parents.fam[n] := textbox1.text;
          a[i].n_zach.parents.name[n] := textbox2.text;
          a[i].n_zach.parents.otc[n] := textbox3.text;
          a[i].n_zach.parents.n_tel[n] := textbox4.text;
          a[i].n_zach.parents.komment[n] := '';
          break;
        end;
      end;
    break;
    end;
  end;
  wfile;
  
  textbox1.text := ''; textbox2.text := ''; textbox3.text := '';
  textbox4.text := '';
  messagebox.show('Успешно добавлено');
end;

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin

end;

end.
