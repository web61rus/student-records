procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.textBox3 := new System.Windows.Forms.TextBox();
        self.textBox4 := new System.Windows.Forms.TextBox();
        self.textBox5 := new System.Windows.Forms.TextBox();
        self.textBox6 := new System.Windows.Forms.TextBox();
        self.textBox7 := new System.Windows.Forms.TextBox();
        self.textBox8 := new System.Windows.Forms.TextBox();
        self.textBox9 := new System.Windows.Forms.TextBox();
        self.textBox10 := new System.Windows.Forms.TextBox();
        self.textBox11 := new System.Windows.Forms.TextBox();
        self.button1 := new System.Windows.Forms.Button();
        self.dataGridView1 := new System.Windows.Forms.DataGridView();
        self.Column1 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column2 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column3 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column4 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column5 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.button2 := new System.Windows.Forms.Button();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.textBox12 := new System.Windows.Forms.TextBox();
        self.textBox13 := new System.Windows.Forms.TextBox();
        self.button3 := new System.Windows.Forms.Button();
        (System.ComponentModel.ISupportInitialize(self.dataGridView1)).BeginInit();
        self.SuspendLayout();
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(12, 246);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(150, 20);
        self.textBox2.TabIndex := 6;
        // 
        // textBox3
        // 
        self.textBox3.Location := new System.Drawing.Point(12, 12);
        self.textBox3.Name := 'textBox3';
        self.textBox3.ReadOnly := true;
        self.textBox3.Size := new System.Drawing.Size(150, 20);
        self.textBox3.TabIndex := 9;
        self.textBox3.Text := 'Введите фамилию студента';
        // 
        // textBox4
        // 
        self.textBox4.Location := new System.Drawing.Point(12, 38);
        self.textBox4.Name := 'textBox4';
        self.textBox4.Size := new System.Drawing.Size(150, 20);
        self.textBox4.TabIndex := 0;
        // 
        // textBox5
        // 
        self.textBox5.Location := new System.Drawing.Point(12, 64);
        self.textBox5.Name := 'textBox5';
        self.textBox5.ReadOnly := true;
        self.textBox5.Size := new System.Drawing.Size(150, 20);
        self.textBox5.TabIndex := 9;
        self.textBox5.Text := 'Введите имя студента';
        // 
        // textBox6
        // 
        self.textBox6.Location := new System.Drawing.Point(12, 90);
        self.textBox6.Name := 'textBox6';
        self.textBox6.Size := new System.Drawing.Size(150, 20);
        self.textBox6.TabIndex := 1;
        // 
        // textBox7
        // 
        self.textBox7.Location := new System.Drawing.Point(12, 116);
        self.textBox7.Name := 'textBox7';
        self.textBox7.ReadOnly := true;
        self.textBox7.Size := new System.Drawing.Size(150, 20);
        self.textBox7.TabIndex := 9;
        self.textBox7.Text := 'Введите отчество студента';
        // 
        // textBox8
        // 
        self.textBox8.Location := new System.Drawing.Point(12, 142);
        self.textBox8.Name := 'textBox8';
        self.textBox8.Size := new System.Drawing.Size(150, 20);
        self.textBox8.TabIndex := 2;
        // 
        // textBox9
        // 
        self.textBox9.Location := new System.Drawing.Point(12, 168);
        self.textBox9.Name := 'textBox9';
        self.textBox9.ReadOnly := true;
        self.textBox9.Size := new System.Drawing.Size(150, 20);
        self.textBox9.TabIndex := 9;
        self.textBox9.Text := 'Введите дату рождения студента';
        // 
        // textBox10
        // 
        self.textBox10.Location := new System.Drawing.Point(12, 194);
        self.textBox10.Name := 'textBox10';
        self.textBox10.Size := new System.Drawing.Size(20, 20);
        self.textBox10.TabIndex := 3;
        self.textBox10.Text := '01';
        // 
        // textBox11
        // 
        self.textBox11.Location := new System.Drawing.Point(12, 220);
        self.textBox11.Name := 'textBox11';
        self.textBox11.ReadOnly := true;
        self.textBox11.Size := new System.Drawing.Size(150, 20);
        self.textBox11.TabIndex := 9;
        self.textBox11.Text := 'Введите группу студента';
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(12, 272);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(150, 23);
        self.button1.TabIndex := 7;
        self.button1.Text := 'Добавить в базу';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // dataGridView1
        // 
        self.dataGridView1.AllowUserToAddRows := false;
        self.dataGridView1.AllowUserToDeleteRows := false;
        self.dataGridView1.ColumnHeadersHeightSizeMode := System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
        self.dataGridView1.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[5](self.Column1, self.Column2, self.Column3, self.Column4, self.Column5));
        self.dataGridView1.Location := new System.Drawing.Point(168, 12);
        self.dataGridView1.Name := 'dataGridView1';
        self.dataGridView1.Size := new System.Drawing.Size(558, 371);
        self.dataGridView1.TabIndex := 12;
        // 
        // Column1
        // 
        self.Column1.HeaderText := 'Дата рождения';
        self.Column1.Name := 'Column1';
        // 
        // Column2
        // 
        self.Column2.HeaderText := 'Фамилия';
        self.Column2.Name := 'Column2';
        // 
        // Column3
        // 
        self.Column3.HeaderText := 'Имя';
        self.Column3.Name := 'Column3';
        // 
        // Column4
        // 
        self.Column4.HeaderText := 'Отчество';
        self.Column4.Name := 'Column4';
        // 
        // Column5
        // 
        self.Column5.HeaderText := 'Группа';
        self.Column5.Name := 'Column5';
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(12, 301);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(150, 23);
        self.button2.TabIndex := 8;
        self.button2.Text := 'Изменить';
        self.button2.UseVisualStyleBackColor := true;
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(51, 194);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(20, 20);
        self.textBox1.TabIndex := 4;
        self.textBox1.Text := '01';
        // 
        // textBox12
        // 
        self.textBox12.Location := new System.Drawing.Point(92, 194);
        self.textBox12.Name := 'textBox12';
        self.textBox12.Size := new System.Drawing.Size(34, 20);
        self.textBox12.TabIndex := 5;
        self.textBox12.Text := '2000';
        // 
        // textBox13
        // 
        self.textBox13.Location := new System.Drawing.Point(12, 334);
        self.textBox13.Name := 'textBox13';
        self.textBox13.Size := new System.Drawing.Size(153, 20);
        self.textBox13.TabIndex := 17;
        // 
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(12, 360);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(153, 23);
        self.button3.TabIndex := 16;
        self.button3.Text := 'Удалить';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(738, 396);
        self.Controls.Add(self.textBox13);
        self.Controls.Add(self.button3);
        self.Controls.Add(self.textBox12);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.dataGridView1);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.textBox11);
        self.Controls.Add(self.textBox10);
        self.Controls.Add(self.textBox9);
        self.Controls.Add(self.textBox8);
        self.Controls.Add(self.textBox7);
        self.Controls.Add(self.textBox6);
        self.Controls.Add(self.textBox5);
        self.Controls.Add(self.textBox4);
        self.Controls.Add(self.textBox3);
        self.Controls.Add(self.textBox2);
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Добавление студента';
        self.Load += Form1_Load;
        (System.ComponentModel.ISupportInitialize(self.dataGridView1)).EndInit();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
