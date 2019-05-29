procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.label1 := new System.Windows.Forms.Label();
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        self.label2 := new System.Windows.Forms.Label();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        self.SuspendLayout();
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(12, 265);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(250, 71);
        self.label1.TabIndex := 0;
        self.label1.Text := 'Программа написана в среде разроаботки PascalABC.NET'#13#10'Команда разработчиков: '#13#10'Колесниченко Александр'#13#10'Козырева Алла';
        self.label1.TextAlign := System.Drawing.ContentAlignment.TopCenter;
        // 
        // pictureBox1
        // 
        self.pictureBox1.Image := (System.Drawing.Image(resources.GetObject('pictureBox1.Image')));
        self.pictureBox1.InitialImage := (System.Drawing.Image(resources.GetObject('pictureBox1.InitialImage')));
        self.pictureBox1.Location := new System.Drawing.Point(12, 12);
        self.pictureBox1.Name := 'pictureBox1';
        self.pictureBox1.Size := new System.Drawing.Size(250, 250);
        self.pictureBox1.SizeMode := System.Windows.Forms.PictureBoxSizeMode.AutoSize;
        self.pictureBox1.TabIndex := 1;
        self.pictureBox1.TabStop := false;
        // 
        // label2
        // 
        self.label2.AutoSize := true;
        self.label2.Location := new System.Drawing.Point(186, 336);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(76, 13);
        self.label2.TabIndex := 2;
        self.label2.Text := '><((((*>  2019г';
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(273, 358);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.pictureBox1);
        self.Controls.Add(self.label1);
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'О программе';
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
