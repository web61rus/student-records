procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        self.dataGridView1 := new System.Windows.Forms.DataGridView();
        self.Column1 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column2 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column3 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column4 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column5 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column6 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column7 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.label1 := new System.Windows.Forms.Label();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.label2 := new System.Windows.Forms.Label();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.label3 := new System.Windows.Forms.Label();
        self.textBox3 := new System.Windows.Forms.TextBox();
        self.label4 := new System.Windows.Forms.Label();
        self.textBox7 := new System.Windows.Forms.TextBox();
        self.label8 := new System.Windows.Forms.Label();
        self.textBox8 := new System.Windows.Forms.TextBox();
        self.label9 := new System.Windows.Forms.Label();
        self.button1 := new System.Windows.Forms.Button();
        self.menuStrip1 := new System.Windows.Forms.MenuStrip();
        self.toolStripMenuItem1 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem3 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem2 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem5 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem4 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem8 := new System.Windows.Forms.ToolStripMenuItem();
        self.errorProvider1 := new System.Windows.Forms.ErrorProvider(self.components);
        self.toolTip1 := new System.Windows.Forms.ToolTip(self.components);
        self.textBox4 := new System.Windows.Forms.TextBox();
        (System.ComponentModel.ISupportInitialize(self.dataGridView1)).BeginInit();
        self.menuStrip1.SuspendLayout();
        (System.ComponentModel.ISupportInitialize(self.errorProvider1)).BeginInit();
        self.SuspendLayout();
        // 
        // dataGridView1
        // 
        self.dataGridView1.AutoSizeColumnsMode := System.Windows.Forms.DataGridViewAutoSizeColumnsMode.Fill;
        self.dataGridView1.ColumnHeadersHeightSizeMode := System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
        self.dataGridView1.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[7](self.Column1, self.Column2, self.Column3, self.Column4, self.Column5, self.Column6, self.Column7));
        self.dataGridView1.Location := new System.Drawing.Point(182, 27);
        self.dataGridView1.Name := 'dataGridView1';
        self.dataGridView1.Size := new System.Drawing.Size(691, 268);
        self.dataGridView1.TabIndex := 0;
        self.dataGridView1.CellEndEdit += dataGridView1_CellEndEdit;
        self.dataGridView1.RowsAdded += dataGridView1_RowsAdded;
        self.dataGridView1.RowsRemoved += dataGridView1_RowsRemoved;
        // 
        // Column1
        // 
        self.Column1.HeaderText := 'Column1';
        self.Column1.Name := 'Column1';
        // 
        // Column2
        // 
        self.Column2.HeaderText := 'Column2';
        self.Column2.Name := 'Column2';
        // 
        // Column3
        // 
        self.Column3.HeaderText := 'Column3';
        self.Column3.Name := 'Column3';
        // 
        // Column4
        // 
        self.Column4.HeaderText := 'Column4';
        self.Column4.Name := 'Column4';
        // 
        // Column5
        // 
        self.Column5.HeaderText := 'Column5';
        self.Column5.Name := 'Column5';
        // 
        // Column6
        // 
        self.Column6.HeaderText := 'Column6';
        self.Column6.Name := 'Column6';
        // 
        // Column7
        // 
        self.Column7.HeaderText := 'Column7';
        self.Column7.Name := 'Column7';
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(12, 24);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(134, 15);
        self.label1.TabIndex := 1;
        self.label1.Text := 'Введите фамилию';
        self.label1.TextAlign := System.Drawing.ContentAlignment.TopCenter;
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(11, 42);
        self.textBox1.MaxLength := 30;
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(135, 20);
        self.textBox1.TabIndex := 1;
        self.textBox1.Text := 'а';
        self.toolTip1.SetToolTip(self.textBox1, 'Введите фамилию, например: Петров');
        self.textBox1.KeyPress += textBox1_KeyPress;
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(12, 65);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(134, 12);
        self.label2.TabIndex := 3;
        self.label2.Text := 'Введите имя';
        self.label2.TextAlign := System.Drawing.ContentAlignment.TopCenter;
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(11, 80);
        self.textBox2.MaxLength := 30;
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(135, 20);
        self.textBox2.TabIndex := 2;
        self.textBox2.Text := 'а';
        self.toolTip1.SetToolTip(self.textBox2, 'Введите имя, например: Петр');
        self.textBox2.KeyPress += textBox2_KeyPress;
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(11, 103);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(135, 13);
        self.label3.TabIndex := 5;
        self.label3.Text := 'Введите отчество';
        self.label3.TextAlign := System.Drawing.ContentAlignment.TopCenter;
        // 
        // textBox3
        // 
        self.textBox3.Location := new System.Drawing.Point(11, 119);
        self.textBox3.MaxLength := 30;
        self.textBox3.Name := 'textBox3';
        self.textBox3.Size := new System.Drawing.Size(135, 20);
        self.textBox3.TabIndex := 3;
        self.textBox3.Text := 'а';
        self.toolTip1.SetToolTip(self.textBox3, 'Введите отчество, например: Петрович');
        self.textBox3.KeyPress += textBox3_KeyPress;
        // 
        // label4
        // 
        self.label4.Location := new System.Drawing.Point(12, 142);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(134, 23);
        self.label4.TabIndex := 7;
        self.label4.Text := 'Введите дату рождения';
        self.label4.TextAlign := System.Drawing.ContentAlignment.TopCenter;
        // 
        // textBox7
        // 
        self.textBox7.Location := new System.Drawing.Point(12, 206);
        self.textBox7.MaxLength := 10;
        self.textBox7.Name := 'textBox7';
        self.textBox7.Size := new System.Drawing.Size(134, 20);
        self.textBox7.TabIndex := 5;
        self.textBox7.Text := '1';
        self.toolTip1.SetToolTip(self.textBox7, 'Введите № зачетки в формате: 0123456789');
        self.textBox7.KeyPress += textBox7_KeyPress;
        // 
        // label8
        // 
        self.label8.Location := new System.Drawing.Point(12, 191);
        self.label8.Name := 'label8';
        self.label8.Size := new System.Drawing.Size(134, 12);
        self.label8.TabIndex := 14;
        self.label8.Text := 'Введите № зачетки';
        self.label8.TextAlign := System.Drawing.ContentAlignment.TopCenter;
        // 
        // textBox8
        // 
        self.textBox8.Location := new System.Drawing.Point(12, 246);
        self.textBox8.MaxLength := 12;
        self.textBox8.Name := 'textBox8';
        self.textBox8.Size := new System.Drawing.Size(134, 20);
        self.textBox8.TabIndex := 6;
        self.textBox8.Text := '+79999999999';
        self.toolTip1.SetToolTip(self.textBox8, 'Введите номер телефона в формате: 79876543210');
        self.textBox8.KeyPress += textBox8_KeyPress;
        // 
        // label9
        // 
        self.label9.Location := new System.Drawing.Point(9, 229);
        self.label9.Name := 'label9';
        self.label9.Size := new System.Drawing.Size(136, 14);
        self.label9.TabIndex := 16;
        self.label9.Text := 'Введите № телефона';
        self.label9.TextAlign := System.Drawing.ContentAlignment.TopCenter;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(11, 272);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(136, 23);
        self.button1.TabIndex := 18;
        self.button1.Text := 'Добавить';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // menuStrip1
        // 
        self.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[3](self.toolStripMenuItem1, self.toolStripMenuItem2, self.toolStripMenuItem4));
        self.menuStrip1.Location := new System.Drawing.Point(0, 0);
        self.menuStrip1.Name := 'menuStrip1';
        self.menuStrip1.Size := new System.Drawing.Size(885, 24);
        self.menuStrip1.TabIndex := 19;
        self.menuStrip1.Text := 'menuStrip1';
        // 
        // toolStripMenuItem1
        // 
        self.toolStripMenuItem1.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[1](self.toolStripMenuItem3));
        self.toolStripMenuItem1.Name := 'toolStripMenuItem1';
        self.toolStripMenuItem1.Size := new System.Drawing.Size(48, 20);
        self.toolStripMenuItem1.Text := 'Файл';
        // 
        // toolStripMenuItem3
        // 
        self.toolStripMenuItem3.Name := 'toolStripMenuItem3';
        self.toolStripMenuItem3.Size := new System.Drawing.Size(159, 22);
        self.toolStripMenuItem3.Text := 'Поиск студента';
        self.toolStripMenuItem3.Click += toolStripMenuItem3_Click;
        // 
        // toolStripMenuItem2
        // 
        self.toolStripMenuItem2.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[1](self.toolStripMenuItem5));
        self.toolStripMenuItem2.Name := 'toolStripMenuItem2';
        self.toolStripMenuItem2.Size := new System.Drawing.Size(91, 20);
        self.toolStripMenuItem2.Text := 'Дисциплины';
        // 
        // toolStripMenuItem5
        // 
        self.toolStripMenuItem5.Name := 'toolStripMenuItem5';
        self.toolStripMenuItem5.Size := new System.Drawing.Size(205, 22);
        self.toolStripMenuItem5.Text := 'Добавление дисциплин';
        self.toolStripMenuItem5.Click += toolStripMenuItem5_Click;
        // 
        // toolStripMenuItem4
        // 
        self.toolStripMenuItem4.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[1](self.toolStripMenuItem8));
        self.toolStripMenuItem4.Name := 'toolStripMenuItem4';
        self.toolStripMenuItem4.Size := new System.Drawing.Size(65, 20);
        self.toolStripMenuItem4.Text := 'Справка';
        // 
        // toolStripMenuItem8
        // 
        self.toolStripMenuItem8.Name := 'toolStripMenuItem8';
        self.toolStripMenuItem8.Size := new System.Drawing.Size(149, 22);
        self.toolStripMenuItem8.Text := 'О программе';
        self.toolStripMenuItem8.Click += toolStripMenuItem8_Click;
        // 
        // errorProvider1
        // 
        self.errorProvider1.ContainerControl := self;
        // 
        // textBox4
        // 
        self.textBox4.Location := new System.Drawing.Point(11, 168);
        self.textBox4.MaxLength := 10;
        self.textBox4.Name := 'textBox4';
        self.textBox4.Size := new System.Drawing.Size(134, 20);
        self.textBox4.TabIndex := 4;
        self.textBox4.Text := '12.12.1999';
        self.toolTip1.SetToolTip(self.textBox4, 'Введите № зачетки в формате: 0123456789');
        self.textBox4.KeyPress += textBox4_KeyPress;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(885, 307);
        self.Controls.Add(self.textBox4);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.textBox8);
        self.Controls.Add(self.label9);
        self.Controls.Add(self.textBox7);
        self.Controls.Add(self.label8);
        self.Controls.Add(self.label4);
        self.Controls.Add(self.textBox3);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.textBox2);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.dataGridView1);
        self.Controls.Add(self.menuStrip1);
        self.MainMenuStrip := self.menuStrip1;
        self.MaximizeBox := false;
        self.MaximumSize := new System.Drawing.Size(901, 628);
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Студенты [Beta]';
        self.Load += Form1_Load;
        self.KeyPress += Form1_KeyPress;
        (System.ComponentModel.ISupportInitialize(self.dataGridView1)).EndInit();
        self.menuStrip1.ResumeLayout(false);
        self.menuStrip1.PerformLayout();
        (System.ComponentModel.ISupportInitialize(self.errorProvider1)).EndInit();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
