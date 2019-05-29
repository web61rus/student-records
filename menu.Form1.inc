procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.groupBox1 := new System.Windows.Forms.GroupBox();
        self.radioButton2 := new System.Windows.Forms.RadioButton();
        self.radioButton1 := new System.Windows.Forms.RadioButton();
        self.button1 := new System.Windows.Forms.Button();
        self.groupBox1.SuspendLayout();
        self.SuspendLayout();
        // 
        // groupBox1
        // 
        self.groupBox1.Controls.Add(self.radioButton2);
        self.groupBox1.Controls.Add(self.radioButton1);
        self.groupBox1.Location := new System.Drawing.Point(12, 12);
        self.groupBox1.Name := 'groupBox1';
        self.groupBox1.Size := new System.Drawing.Size(147, 82);
        self.groupBox1.TabIndex := 0;
        self.groupBox1.TabStop := false;
        // 
        // radioButton2
        // 
        self.radioButton2.Location := new System.Drawing.Point(6, 49);
        self.radioButton2.Name := 'radioButton2';
        self.radioButton2.Size := new System.Drawing.Size(134, 24);
        self.radioButton2.TabIndex := 1;
        self.radioButton2.TabStop := true;
        self.radioButton2.Text := 'Добавить студентов';
        self.radioButton2.UseVisualStyleBackColor := true;
        // 
        // radioButton1
        // 
        self.radioButton1.Location := new System.Drawing.Point(6, 19);
        self.radioButton1.Name := 'radioButton1';
        self.radioButton1.Size := new System.Drawing.Size(117, 24);
        self.radioButton1.TabIndex := 0;
        self.radioButton1.TabStop := true;
        self.radioButton1.Text := 'Добавить оценки';
        self.radioButton1.UseVisualStyleBackColor := true;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(18, 100);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(141, 23);
        self.button1.TabIndex := 1;
        self.button1.Text := 'Открыть';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(166, 131);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.groupBox1);
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.groupBox1.ResumeLayout(false);
        self.ResumeLayout(false);
    end;
