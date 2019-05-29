procedure InitializeComponent;
    begin
        self.label1 := new System.Windows.Forms.Label();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.label2 := new System.Windows.Forms.Label();
        self.textBox3 := new System.Windows.Forms.TextBox();
        self.label3 := new System.Windows.Forms.Label();
        self.textBox4 := new System.Windows.Forms.TextBox();
        self.label4 := new System.Windows.Forms.Label();
        self.button1 := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // label1
        // 
        self.label1.AutoSize := true;
        self.label1.Location := new System.Drawing.Point(158, 9);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(56, 13);
        self.label1.TabIndex := 0;
        self.label1.Text := 'Фамилия';
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(142, 25);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(100, 20);
        self.textBox1.TabIndex := 1;
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(142, 64);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(100, 20);
        self.textBox2.TabIndex := 3;
        // 
        // label2
        // 
        self.label2.AutoSize := true;
        self.label2.Location := new System.Drawing.Point(169, 48);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(29, 13);
        self.label2.TabIndex := 2;
        self.label2.Text := 'Имя';
        // 
        // textBox3
        // 
        self.textBox3.Location := new System.Drawing.Point(144, 103);
        self.textBox3.Name := 'textBox3';
        self.textBox3.Size := new System.Drawing.Size(100, 20);
        self.textBox3.TabIndex := 5;
        // 
        // label3
        // 
        self.label3.AutoSize := true;
        self.label3.Location := new System.Drawing.Point(160, 87);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(54, 13);
        self.label3.TabIndex := 4;
        self.label3.Text := 'Отчество';
        // 
        // textBox4
        // 
        self.textBox4.Location := new System.Drawing.Point(144, 142);
        self.textBox4.Name := 'textBox4';
        self.textBox4.Size := new System.Drawing.Size(100, 20);
        self.textBox4.TabIndex := 7;
        // 
        // label4
        // 
        self.label4.AutoSize := true;
        self.label4.Location := new System.Drawing.Point(144, 126);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(93, 13);
        self.label4.TabIndex := 6;
        self.label4.Text := 'Номер телефона';
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(144, 168);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(100, 23);
        self.button1.TabIndex := 8;
        self.button1.Text := 'Добавить';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(393, 203);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.textBox4);
        self.Controls.Add(self.label4);
        self.Controls.Add(self.textBox3);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.textBox2);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.label1);
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Добавление информации о родителях';
        self.Load += Form1_Load;
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
