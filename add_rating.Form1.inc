procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        self.label1 := new System.Windows.Forms.Label();
        self.comboBox1 := new System.Windows.Forms.ComboBox();
        self.label2 := new System.Windows.Forms.Label();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.label3 := new System.Windows.Forms.Label();
        self.button1 := new System.Windows.Forms.Button();
        self.errorProvider1 := new System.Windows.Forms.ErrorProvider(self.components);
        self.comboBox2 := new System.Windows.Forms.ComboBox();
        self.comboBox3 := new System.Windows.Forms.ComboBox();
        self.label4 := new System.Windows.Forms.Label();
        (System.ComponentModel.ISupportInitialize(self.errorProvider1)).BeginInit();
        self.SuspendLayout();
        // 
        // label1
        // 
        self.label1.AutoSize := true;
        self.label1.Location := new System.Drawing.Point(142, 86);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(119, 13);
        self.label1.TabIndex := 0;
        self.label1.Text := 'Выберите дисциплину';
        // 
        // comboBox1
        // 
        self.comboBox1.DropDownStyle := System.Windows.Forms.ComboBoxStyle.DropDownList;
        self.comboBox1.FormattingEnabled := true;
        self.comboBox1.Location := new System.Drawing.Point(123, 102);
        self.comboBox1.Name := 'comboBox1';
        self.comboBox1.Size := new System.Drawing.Size(154, 21);
        self.comboBox1.TabIndex := 1;
        self.comboBox1.SelectedIndexChanged += comboBox1_SelectedIndexChanged;
        // 
        // label2
        // 
        self.label2.AutoSize := true;
        self.label2.Location := new System.Drawing.Point(142, 6);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(109, 13);
        self.label2.TabIndex := 2;
        self.label2.Text := '№ зачетки студента';
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(123, 23);
        self.textBox1.Name := 'textBox1';
        self.textBox1.ReadOnly := true;
        self.textBox1.Size := new System.Drawing.Size(154, 20);
        self.textBox1.TabIndex := 0;
        self.textBox1.TextChanged += textBox1_TextChanged;
        self.textBox1.KeyPress += textBox1_KeyPress;
        // 
        // label3
        // 
        self.label3.AutoSize := true;
        self.label3.Location := new System.Drawing.Point(155, 126);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(95, 13);
        self.label3.TabIndex := 4;
        self.label3.Text := 'Выберите оценку';
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(123, 168);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(154, 23);
        self.button1.TabIndex := 3;
        self.button1.Text := 'Добавить';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // errorProvider1
        // 
        self.errorProvider1.ContainerControl := self;
        // 
        // comboBox2
        // 
        self.comboBox2.DropDownStyle := System.Windows.Forms.ComboBoxStyle.DropDownList;
        self.comboBox2.FormattingEnabled := true;
        self.comboBox2.Items.AddRange(new System.Object[5]('5', '4', '3', '2', '1'));
        self.comboBox2.Location := new System.Drawing.Point(177, 141);
        self.comboBox2.Name := 'comboBox2';
        self.comboBox2.Size := new System.Drawing.Size(45, 21);
        self.comboBox2.TabIndex := 2;
        // 
        // comboBox3
        // 
        self.comboBox3.DropDownStyle := System.Windows.Forms.ComboBoxStyle.DropDownList;
        self.comboBox3.FormattingEnabled := true;
        self.comboBox3.Items.AddRange(new System.Object[12]('1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12'));
        self.comboBox3.Location := new System.Drawing.Point(123, 62);
        self.comboBox3.Name := 'comboBox3';
        self.comboBox3.Size := new System.Drawing.Size(154, 21);
        self.comboBox3.TabIndex := 6;
        // 
        // label4
        // 
        self.label4.AutoSize := true;
        self.label4.Location := new System.Drawing.Point(142, 46);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(103, 13);
        self.label4.TabIndex := 5;
        self.label4.Text := 'Выберите семестр';
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(395, 203);
        self.Controls.Add(self.comboBox3);
        self.Controls.Add(self.label4);
        self.Controls.Add(self.comboBox2);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.comboBox1);
        self.Controls.Add(self.label1);
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Добавление оценок';
        self.Load += Form1_Load;
        (System.ComponentModel.ISupportInitialize(self.errorProvider1)).EndInit();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
