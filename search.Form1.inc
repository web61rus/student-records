procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.label2 := new System.Windows.Forms.Label();
        self.button1 := new System.Windows.Forms.Button();
        self.button3 := new System.Windows.Forms.Button();
        self.errorProvider1 := new System.Windows.Forms.ErrorProvider(self.components);
        self.dataGridView1 := new System.Windows.Forms.DataGridView();
        self.Column1 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column2 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column3 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column4 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column5 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column6 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column7 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.dataGridView2 := new System.Windows.Forms.DataGridView();
        self.Column8 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column9 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column10 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.button2 := new System.Windows.Forms.Button();
        self.dataGridView3 := new System.Windows.Forms.DataGridView();
        self.Column11 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column12 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column13 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column14 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column15 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column16 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.dataGridView4 := new System.Windows.Forms.DataGridView();
        self.Column38 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column39 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column40 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.comboBox3 := new System.Windows.Forms.ComboBox();
        self.label4 := new System.Windows.Forms.Label();
        (System.ComponentModel.ISupportInitialize(self.errorProvider1)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.dataGridView1)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.dataGridView2)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.dataGridView3)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.dataGridView4)).BeginInit();
        self.SuspendLayout();
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(12, 25);
        self.textBox2.MaxLength := 10;
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(148, 20);
        self.textBox2.TabIndex := 1;
        self.textBox2.KeyPress += textBox2_KeyPress;
        // 
        // label2
        // 
        self.label2.AutoSize := true;
        self.label2.Location := new System.Drawing.Point(12, 9);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(154, 13);
        self.label2.TabIndex := 2;
        self.label2.Text := 'Введите № зачетки студента';
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(12, 91);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(148, 23);
        self.button1.TabIndex := 2;
        self.button1.Text := 'Поиск';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button3
        // 
        self.button3.Enabled := false;
        self.button3.Location := new System.Drawing.Point(12, 120);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(148, 39);
        self.button3.TabIndex := 4;
        self.button3.Text := 'Добавить оценки студенту';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // errorProvider1
        // 
        self.errorProvider1.ContainerControl := self;
        // 
        // dataGridView1
        // 
        self.dataGridView1.AllowUserToAddRows := false;
        self.dataGridView1.AllowUserToDeleteRows := false;
        self.dataGridView1.ColumnHeadersHeightSizeMode := System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
        self.dataGridView1.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[7](self.Column1, self.Column2, self.Column3, self.Column4, self.Column5, self.Column6, self.Column7));
        self.dataGridView1.Location := new System.Drawing.Point(172, 9);
        self.dataGridView1.Name := 'dataGridView1';
        self.dataGridView1.ReadOnly := true;
        self.dataGridView1.Size := new System.Drawing.Size(750, 98);
        self.dataGridView1.TabIndex := 7;
        // 
        // Column1
        // 
        self.Column1.HeaderText := 'Column1';
        self.Column1.Name := 'Column1';
        self.Column1.ReadOnly := true;
        // 
        // Column2
        // 
        self.Column2.HeaderText := 'Column2';
        self.Column2.Name := 'Column2';
        self.Column2.ReadOnly := true;
        // 
        // Column3
        // 
        self.Column3.HeaderText := 'Column3';
        self.Column3.Name := 'Column3';
        self.Column3.ReadOnly := true;
        // 
        // Column4
        // 
        self.Column4.HeaderText := 'Column4';
        self.Column4.Name := 'Column4';
        self.Column4.ReadOnly := true;
        // 
        // Column5
        // 
        self.Column5.HeaderText := 'Column5';
        self.Column5.Name := 'Column5';
        self.Column5.ReadOnly := true;
        // 
        // Column6
        // 
        self.Column6.HeaderText := 'Column6';
        self.Column6.Name := 'Column6';
        self.Column6.ReadOnly := true;
        // 
        // Column7
        // 
        self.Column7.HeaderText := 'Column7';
        self.Column7.Name := 'Column7';
        self.Column7.ReadOnly := true;
        // 
        // dataGridView2
        // 
        self.dataGridView2.AllowUserToAddRows := false;
        self.dataGridView2.ColumnHeadersHeightSizeMode := System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
        self.dataGridView2.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[3](self.Column8, self.Column9, self.Column10));
        self.dataGridView2.Location := new System.Drawing.Point(172, 232);
        self.dataGridView2.Name := 'dataGridView2';
        self.dataGridView2.Size := new System.Drawing.Size(750, 217);
        self.dataGridView2.TabIndex := 8;
        self.dataGridView2.CellEndEdit += dataGridView2_CellEndEdit;
        self.dataGridView2.RowsRemoved += dataGridView2_RowsRemoved;
        // 
        // Column8
        // 
        self.Column8.AutoSizeMode := System.Windows.Forms.DataGridViewAutoSizeColumnMode.ColumnHeader;
        self.Column8.HeaderText := 'Column8';
        self.Column8.Name := 'Column8';
        self.Column8.Width := 73;
        // 
        // Column9
        // 
        self.Column9.AutoSizeMode := System.Windows.Forms.DataGridViewAutoSizeColumnMode.ColumnHeader;
        self.Column9.HeaderText := 'Column9';
        self.Column9.Name := 'Column9';
        self.Column9.Width := 73;
        // 
        // Column10
        // 
        self.Column10.AutoSizeMode := System.Windows.Forms.DataGridViewAutoSizeColumnMode.DisplayedCells;
        self.Column10.HeaderText := 'Column10';
        self.Column10.Name := 'Column10';
        self.Column10.Width := 79;
        // 
        // button2
        // 
        self.button2.Enabled := false;
        self.button2.Location := new System.Drawing.Point(12, 165);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(148, 39);
        self.button2.TabIndex := 9;
        self.button2.Text := 'Добавить информацию о родителях';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // dataGridView3
        // 
        self.dataGridView3.AllowUserToAddRows := false;
        self.dataGridView3.ColumnHeadersHeightSizeMode := System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
        self.dataGridView3.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[6](self.Column11, self.Column12, self.Column13, self.Column14, self.Column15, self.Column16));
        self.dataGridView3.Location := new System.Drawing.Point(172, 113);
        self.dataGridView3.Name := 'dataGridView3';
        self.dataGridView3.Size := new System.Drawing.Size(750, 113);
        self.dataGridView3.TabIndex := 10;
        self.dataGridView3.CellEndEdit += dataGridView3_CellEndEdit;
        self.dataGridView3.RowsRemoved += dataGridView3_RowsRemoved;
        // 
        // Column11
        // 
        self.Column11.HeaderText := 'Column11';
        self.Column11.Name := 'Column11';
        // 
        // Column12
        // 
        self.Column12.HeaderText := 'Column12';
        self.Column12.Name := 'Column12';
        // 
        // Column13
        // 
        self.Column13.HeaderText := 'Column13';
        self.Column13.Name := 'Column13';
        // 
        // Column14
        // 
        self.Column14.HeaderText := 'Column14';
        self.Column14.Name := 'Column14';
        // 
        // Column15
        // 
        self.Column15.HeaderText := 'Column15';
        self.Column15.Name := 'Column15';
        // 
        // Column16
        // 
        self.Column16.HeaderText := 'Column16';
        self.Column16.Name := 'Column16';
        self.Column16.Width := 200;
        // 
        // dataGridView4
        // 
        self.dataGridView4.AllowUserToAddRows := false;
        self.dataGridView4.AllowUserToDeleteRows := false;
        self.dataGridView4.ColumnHeadersHeightSizeMode := System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
        self.dataGridView4.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[3](self.Column38, self.Column39, self.Column40));
        self.dataGridView4.Location := new System.Drawing.Point(172, 455);
        self.dataGridView4.Name := 'dataGridView4';
        self.dataGridView4.ReadOnly := true;
        self.dataGridView4.Size := new System.Drawing.Size(363, 150);
        self.dataGridView4.TabIndex := 11;
        // 
        // Column38
        // 
        self.Column38.HeaderText := 'Column38';
        self.Column38.Name := 'Column38';
        self.Column38.ReadOnly := true;
        // 
        // Column39
        // 
        self.Column39.HeaderText := 'Column39';
        self.Column39.Name := 'Column39';
        self.Column39.ReadOnly := true;
        // 
        // Column40
        // 
        self.Column40.HeaderText := 'Column40';
        self.Column40.Name := 'Column40';
        self.Column40.ReadOnly := true;
        // 
        // comboBox3
        // 
        self.comboBox3.DropDownStyle := System.Windows.Forms.ComboBoxStyle.DropDownList;
        self.comboBox3.FormattingEnabled := true;
        self.comboBox3.Items.AddRange(new System.Object[12]('1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12'));
        self.comboBox3.Location := new System.Drawing.Point(12, 64);
        self.comboBox3.Name := 'comboBox3';
        self.comboBox3.Size := new System.Drawing.Size(148, 21);
        self.comboBox3.TabIndex := 14;
        // 
        // label4
        // 
        self.label4.AutoSize := true;
        self.label4.Location := new System.Drawing.Point(36, 48);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(103, 13);
        self.label4.TabIndex := 13;
        self.label4.Text := 'Выберите семестр';
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(944, 622);
        self.Controls.Add(self.comboBox3);
        self.Controls.Add(self.label4);
        self.Controls.Add(self.dataGridView4);
        self.Controls.Add(self.dataGridView3);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.dataGridView2);
        self.Controls.Add(self.dataGridView1);
        self.Controls.Add(self.button3);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.textBox2);
        self.Controls.Add(self.label2);
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Поиск студента';
        self.Load += Form1_Load;
        (System.ComponentModel.ISupportInitialize(self.errorProvider1)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.dataGridView1)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.dataGridView2)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.dataGridView3)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.dataGridView4)).EndInit();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
