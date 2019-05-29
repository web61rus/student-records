procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.textBox3 := new System.Windows.Forms.TextBox();
        self.textBox4 := new System.Windows.Forms.TextBox();
        self.button1 := new System.Windows.Forms.Button();
        self.textBox5 := new System.Windows.Forms.TextBox();
        self.textBox6 := new System.Windows.Forms.TextBox();
        self.button2 := new System.Windows.Forms.Button();
        self.dataGridView1 := new System.Windows.Forms.DataGridView();
        self.Column1 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column2 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column3 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column4 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column5 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column6 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.button3 := new System.Windows.Forms.Button();
        self.textBox7 := new System.Windows.Forms.TextBox();
        (System.ComponentModel.ISupportInitialize(self.dataGridView1)).BeginInit();
        self.SuspendLayout();
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(12, 12);
        self.textBox1.Name := 'textBox1';
        self.textBox1.ReadOnly := true;
        self.textBox1.Size := new System.Drawing.Size(153, 20);
        self.textBox1.TabIndex := 0;
        self.textBox1.Text := 'Введите фамилию студента';
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(12, 38);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(153, 20);
        self.textBox2.TabIndex := 1;
        // 
        // textBox3
        // 
        self.textBox3.Location := new System.Drawing.Point(12, 64);
        self.textBox3.Name := 'textBox3';
        self.textBox3.ReadOnly := true;
        self.textBox3.Size := new System.Drawing.Size(153, 20);
        self.textBox3.TabIndex := 2;
        self.textBox3.Text := 'Введите группу студента';
        // 
        // textBox4
        // 
        self.textBox4.Location := new System.Drawing.Point(12, 90);
        self.textBox4.Name := 'textBox4';
        self.textBox4.Size := new System.Drawing.Size(153, 20);
        self.textBox4.TabIndex := 3;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(12, 116);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(153, 23);
        self.button1.TabIndex := 4;
        self.button1.Text := 'Найти';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // textBox5
        // 
        self.textBox5.Location := new System.Drawing.Point(12, 145);
        self.textBox5.Name := 'textBox5';
        self.textBox5.ReadOnly := true;
        self.textBox5.Size := new System.Drawing.Size(153, 20);
        self.textBox5.TabIndex := 5;
        self.textBox5.Text := 'Введите оценку студента';
        // 
        // textBox6
        // 
        self.textBox6.Location := new System.Drawing.Point(12, 171);
        self.textBox6.Name := 'textBox6';
        self.textBox6.Size := new System.Drawing.Size(153, 20);
        self.textBox6.TabIndex := 6;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(12, 197);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(153, 23);
        self.button2.TabIndex := 7;
        self.button2.Text := 'Добавить';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // dataGridView1
        // 
        self.dataGridView1.AllowUserToAddRows := false;
        self.dataGridView1.AllowUserToDeleteRows := false;
        self.dataGridView1.ColumnHeadersHeightSizeMode := System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
        self.dataGridView1.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[6](self.Column1, self.Column2, self.Column3, self.Column4, self.Column5, self.Column6));
        self.dataGridView1.Location := new System.Drawing.Point(180, 12);
        self.dataGridView1.Name := 'dataGridView1';
        self.dataGridView1.Size := new System.Drawing.Size(678, 312);
        self.dataGridView1.TabIndex := 13;
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
        // Column6
        // 
        self.Column6.HeaderText := 'Оценка';
        self.Column6.Name := 'Column6';
        // 
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(12, 252);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(153, 23);
        self.button3.TabIndex := 14;
        self.button3.Text := 'Удалить';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // textBox7
        // 
        self.textBox7.Location := new System.Drawing.Point(12, 226);
        self.textBox7.Name := 'textBox7';
        self.textBox7.Size := new System.Drawing.Size(153, 20);
        self.textBox7.TabIndex := 15;
        self.textBox7.TextChanged += textBox7_TextChanged;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(883, 332);
        self.Controls.Add(self.textBox7);
        self.Controls.Add(self.button3);
        self.Controls.Add(self.dataGridView1);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.textBox6);
        self.Controls.Add(self.textBox5);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.textBox4);
        self.Controls.Add(self.textBox3);
        self.Controls.Add(self.textBox2);
        self.Controls.Add(self.textBox1);
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Добавление оценок';
        self.Load += Form1_Load;
        (System.ComponentModel.ISupportInitialize(self.dataGridView1)).EndInit();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
