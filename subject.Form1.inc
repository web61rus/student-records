procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        self.label1 := new System.Windows.Forms.Label();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.button1 := new System.Windows.Forms.Button();
        self.errorProvider1 := new System.Windows.Forms.ErrorProvider(self.components);
        self.dataGridView1 := new System.Windows.Forms.DataGridView();
        self.Column1 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Column2 := new System.Windows.Forms.DataGridViewTextBoxColumn();
        (System.ComponentModel.ISupportInitialize(self.errorProvider1)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.dataGridView1)).BeginInit();
        self.SuspendLayout();
        // 
        // label1
        // 
        self.label1.AutoSize := true;
        self.label1.Location := new System.Drawing.Point(88, 9);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(165, 13);
        self.label1.TabIndex := 0;
        self.label1.Text := 'Введите название дисциплины';
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(12, 25);
        self.textBox1.MaxLength := 30;
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(308, 20);
        self.textBox1.TabIndex := 1;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(12, 51);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(308, 23);
        self.button1.TabIndex := 2;
        self.button1.Text := 'Добавить';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // errorProvider1
        // 
        self.errorProvider1.ContainerControl := self;
        // 
        // dataGridView1
        // 
        self.dataGridView1.AllowUserToAddRows := false;
        self.dataGridView1.ColumnHeadersHeightSizeMode := System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
        self.dataGridView1.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[2](self.Column1, self.Column2));
        self.dataGridView1.Location := new System.Drawing.Point(42, 80);
        self.dataGridView1.Name := 'dataGridView1';
        self.dataGridView1.Size := new System.Drawing.Size(248, 295);
        self.dataGridView1.TabIndex := 5;
        self.dataGridView1.CellEndEdit += dataGridView1_CellEndEdit;
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
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(332, 387);
        self.Controls.Add(self.dataGridView1);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.label1);
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Редактирование дисциплин';
        self.Load += Form1_Load;
        (System.ComponentModel.ISupportInitialize(self.errorProvider1)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.dataGridView1)).EndInit();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
