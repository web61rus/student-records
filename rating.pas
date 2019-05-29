Unit rating;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure Form1_Load(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource rating.Form1.resources}
    label1: &Label;
    {$include rating.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

uses search;

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
end;

end.
