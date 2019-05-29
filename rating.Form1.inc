procedure InitializeComponent;
    begin
        self.label1 := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(12, 9);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(100, 23);
        self.label1.TabIndex := 0;
        self.label1.Text := 'label1';
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(409, 261);
        self.Controls.Add(self.label1);
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Просмотр оценок текущего студента';
        self.Load += Form1_Load;
        self.ResumeLayout(false);
    end;
