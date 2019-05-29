Unit ref;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
  {$region FormDesigner}
  private
    {$resource ref.Form1.resources}
    label1: &Label;
    pictureBox1: PictureBox;
    label2: &Label;
    {$include ref.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

end.
