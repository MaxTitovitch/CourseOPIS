#pragma once
namespace CourseOPIS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
    using namespace std;

	vector<int> myVector;
	vector<int> myRand;
	bool isOpenForm2 = false;

	/// <summary>
	/// Сводка для Form1
	/// </summary>

	public ref class Form1 : public System::Windows::Forms::Form
	{	
	
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::ComponentModel::IContainer^  components;
	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::Color::Maroon;
			this->groupBox1->Location = System::Drawing::Point(11, 59);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(387, 172);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Как получить детерминированную часть\?";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton3->ForeColor = System::Drawing::Color::Black;
			this->radioButton3->Location = System::Drawing::Point(6, 120);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(190, 17);
			this->radioButton3->TabIndex = 0;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Найти файл на компьютере";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->radioButton2->ForeColor = System::Drawing::Color::Black;
			this->radioButton2->Location = System::Drawing::Point(6, 75);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(171, 19);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"Указать путь к файлу";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->radioButton1->ForeColor = System::Drawing::Color::Black;
			this->radioButton1->Location = System::Drawing::Point(6, 30);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(267, 19);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->Text = L"Загрузить из файла автоматически";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(8, 267);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Путь:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(62, 267);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(336, 20);
			this->textBox1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(278, 301);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 33);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Выбрать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(83, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(256, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Генерация массива";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->chart1);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->ForeColor = System::Drawing::Color::Maroon;
			this->panel1->Location = System::Drawing::Point(0, 41);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(411, 301);
			this->panel1->TabIndex = 0;
			this->panel1->Visible = false;
			// 
			// chart1
			// 
			chartArea1->AxisX->Interval = 1;
			chartArea1->AxisX->MajorGrid->Enabled = false;
			chartArea1->AxisX->Minimum = 0;
			chartArea1->AxisY->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::False;
			chartArea1->AxisY2->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::False;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(8, 215);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 7;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series1->Color = System::Drawing::Color::Blue;
			series1->CustomProperties = L"IsXAxisQuantitative=True";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(388, 34);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton7);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->groupBox2->ForeColor = System::Drawing::Color::Maroon;
			this->groupBox2->Location = System::Drawing::Point(11, 95);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(385, 82);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Закон распределения";
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->ForeColor = System::Drawing::Color::Black;
			this->radioButton7->Location = System::Drawing::Point(204, 51);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(102, 19);
			this->radioButton7->TabIndex = 0;
			this->radioButton7->Text = L"Хи-квадрат";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton7_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->ForeColor = System::Drawing::Color::Black;
			this->radioButton6->Location = System::Drawing::Point(204, 26);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(116, 19);
			this->radioButton6->TabIndex = 1;
			this->radioButton6->Text = L"Равномерное";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->ForeColor = System::Drawing::Color::Black;
			this->radioButton5->Location = System::Drawing::Point(9, 51);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(136, 19);
			this->radioButton5->TabIndex = 2;
			this->radioButton5->Text = L"Геометрический";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton5_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->ForeColor = System::Drawing::Color::Black;
			this->radioButton4->Location = System::Drawing::Point(9, 26);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(154, 19);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->Text = L"Экспоненциальный";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton4_CheckedChanged);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::Maroon;
			this->button4->Location = System::Drawing::Point(99, 255);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(160, 33);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Анимация!!!";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox2->Location = System::Drawing::Point(337, 183);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(55, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"0,5";
			this->textBox2->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textBox2_KeyUp);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Maroon;
			this->label4->Location = System::Drawing::Point(17, 186);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Диапазон";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Maroon;
			this->button3->Location = System::Drawing::Point(8, 255);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(73, 33);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Назад";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Maroon;
			this->button2->Location = System::Drawing::Point(276, 255);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 33);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Выбрать";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(11, 5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(343, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Детерминированная составляющая массива";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 25);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(384, 64);
			this->dataGridView1->TabIndex = 8;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"Текстовые (*.txt ) | *.txt; ";
			// 
			// timer1
			// 
			this->timer1->Interval = 125;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 125;
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 600;
			this->timer3->Tick += gcnew System::EventHandler(this, &Form1::timer3_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(411, 341);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Генерация массива";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Form
		private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
		{
			radioButton1->Checked = true;
			radioButton4->Checked = true;
		}

		//button Click
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			bool isFileOpen = true;
			openFile(isFileOpen);
			if (isFileOpen)
			{
				showVectorOnTheForm();
				panel1->Visible = true;
			}
		}

		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			if(identifyCoefficient())
			{
				timerIndex = 0;
				buttonOfOnn(false);
				selectDistribution();
				label3->Text = "Идёт добавление случайно части... ";
				timer3->Enabled = true;
			}			
		}

		private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			dataGridView1->ColumnCount = 0;
			myVector.clear();
			panel1->Visible = false;
		}

		private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			buttonOfOnn(false);
			timerIndex = myVector.size()-1;
			timer2->Enabled = true;
		}

		//timer Tick
		private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
		{
			if (timerIndex  >= (int)myVector.size())
			{
				buttonOfOnn(true);
				timer1->Enabled = false;
			}
			else
			{
				dataGridView1->Columns[timerIndex]->Visible = true;
				timerIndex ++;
			}
		}

		private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) 
		{
			if (timerIndex   < 0)
			{
				timerIndex = 0;
				timer2->Enabled = false;
				timer1->Enabled = true;
			}
			else
			{
				dataGridView1->Columns[timerIndex ]->Visible = false;
				timerIndex--;
			}
		}

		private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) 
		{
			if(timerIndex <= (int)myRand.size()-1)
			{
				chart1->Series[0]->Points->AddXY(myRand[timerIndex], 0);
				chart1->Series[0]->Points[timerIndex]->MarkerSize = discoverPointSize(myRand[timerIndex], timerIndex);
				dataGridView1->Rows[0]->Cells[timerIndex]->Value = Convert::ToString(myVector[timerIndex]);
				timerIndex++;
			}
			else 
			{
				exitFromForm ();
			}
		}

		//radioButton CheckedChanged
		private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		{
			textBox1->Text = "C:\\CourseOPIS\\CourseOPIS\\fileData.txt";
			textBox1->Enabled = false;
		}

		private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		{
			textBox1->Text = "C:\\CourseOPIS\\CourseOPIS\\fileData.txt";
			textBox1->Enabled = true;
		}

		private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		{
			textBox1->Text = "C:\\CourseOPIS\\CourseOPIS\\fileData.txt";
			textBox1->Enabled = false;
		}

		private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		{
			label4->Text = "Коэффициент (Диапазон: [0,3; 0,9])";
			textBox2->Text = "0,5";
		}

		private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		{
			label4->Text = "Коэффициент (Диапазон: [0,3; 0,9])";
			textBox2->Text = "0,5";
		}

		private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		{
			label4->Text = "Коэффициент (Диапазон: [1; 20])";
			textBox2->Text = "5";
		}

		private: System::Void radioButton7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		{
			label4->Text = "Коэффициент (Диапазон: [1; 20])";
			textBox2->Text = "5";
		}

		//textBox KeyUp
		private: System::Void textBox2_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		{
			if( (e->KeyCode < Keys::D0 ||  e->KeyCode > Keys::D9) && (e->KeyCode !=  Keys::Back && e->KeyCode !=  Keys::Delete &&  e->KeyCode !=  Keys::Oemcomma) )
			{
				textBox2->Text = "";	
			}
		}

		//Свои методы и свойства

		private: 

		int timerIndex;

		void showVectorOnTheForm()
		{
			for(int i = 0; i < (int) myVector.size(); i++)
			{
				dataGridView1->ColumnCount++; 
				dataGridView1->Columns[i]->Name = "Элемент ["+Convert::ToString(i+1)+ "]";
				dataGridView1->Rows[0]->Cells[i]->Value = Convert::ToString(myVector[i]);
			}
		}

		void openFile(bool& isFileOpen)
		{
			ifstream file ( identifyFileName() );

			if (file.is_open())
			{
				readFromFile(file, isFileOpen);
				file.close();
				isSizeNotOne(isFileOpen);
			}
			else
			{
				isFileOpen = false;
				MessageBox::Show("Не удалось найти файл! Попробуйте ещё раз!", "Ошибка!", MessageBoxButtons::OK );
			}
		}

		void readFromFile(ifstream& file, bool& isFileOpen)
		{
			int temporaryValue;
			String^  temporarySystemString;
			string temporaryString;

			while(!file.eof())
			{
				getline(file, temporaryString, ' ');
				temporarySystemString = marshal_as <String^, string>(temporaryString);
				if ( convertStringToNumber (temporarySystemString , temporaryValue) )	
				{
					isFileOpen = false;
					break;
				}
				myVector.push_back(temporaryValue);
			}
		}

		void isSizeNotOne(bool & isFileOpen)
		{
			if (myVector.size() == 1)
			{
				isFileOpen = false;
				canselReading();
			}
		}

		string identifyFileName()
		{	
			if (radioButton3->Checked == true)
			{
				workOpenFileDialog();
				return marshal_as <string, String^>(openFileDialog1->FileName);
			}
			else 
			{
				return marshal_as <string, String^>(textBox1->Text);
			}
		}

		void workOpenFileDialog()
		{
			openFileDialog1->FileName = "";
			openFileDialog1->ShowDialog();
		}

		bool convertStringToNumber(String^ timeString, int & timeOfFile)
		{
			if(Int32::TryParse(timeString, timeOfFile) && timeOfFile > 0)
			{
				return false;
			}
			else
			{
				canselReading();
				return true;
			}
			
		}

		void canselReading()
		{
			myVector.clear();
			MessageBox::Show("В файле некорректная информация!", "Ошибка!", MessageBoxButtons::OK );
		}

		void selectDistribution()
		{
			double l = Convert::ToDouble(textBox2->Text);
			switch (identifyNomberRadioBox())
			{
				case 1: addExpPart(l);  break;
				case 2: addGeomPart(l); break;
				case 3: addUnifPart(l); break;
				case 4: addChiPart(l); break;
			}	
		}
		
		int identifyNomberRadioBox()
		{
			if (radioButton4->Checked == true)	return 1;
			if (radioButton5->Checked == true)	return 2;
			if (radioButton6->Checked == true)	return 3;
			if (radioButton7->Checked == true)	return 4;
			return 0;
		}

		void writeToFile()
		{
			ofstream file ("fileSaveData.txt");
			for(int i = 0; i < (int) myVector.size(); i++)
			{
				file << " " << myVector[i];
			}
			file.close();
		}

		bool identifyCoefficient()
		{
			if(radioButton4->Checked == true || radioButton5->Checked == true)
			{
				return checkSizeCoefficient(0.3, 0.9, 0.5);
			}
			else
			{
				return checkSizeCoefficient(1, 20, 5);
			}
		}

		bool checkSizeCoefficient(double minCoefficient, double maxCoefficient,double newCoefficient)
		{
			Double number;
			if( !(Double::TryParse(textBox2->Text, number)) )
			{
				fixCoefficient(newCoefficient);
				return false;
			}
			if (Convert::ToDouble(textBox2->Text) < minCoefficient || Convert::ToDouble(textBox2->Text) > maxCoefficient)
			{
				fixCoefficient(newCoefficient);
				return false;
			}
			return true;
		}

		void fixCoefficient(double newCoefficient)
		{
			textBox2->Text = Convert::ToString(newCoefficient);
			MessageBox::Show("Коэфициэнт введён некорректно!", "Предупреждение!", MessageBoxButtons::OK );
		}

		void buttonOfOnn(bool onOrOff)
		{
			button2->Enabled = onOrOff;
			button3->Enabled = onOrOff;
			button4->Enabled = onOrOff;
		}

		void addExpPart(double l)
		{
			std::mt19937 gen((int)time(NULL));
			std::exponential_distribution<> distr(l);
			for(int i = 0; i < (int)myVector.size(); i++)
			{
				addRandPart((int)distr(gen), i);
			}
		}

		void addGeomPart(double l)
		{
			std::mt19937 gen((int)time(NULL));
			std::geometric_distribution<> distr(l);
			for(int i = 0; i < (int)myVector.size(); i++)
			{
				addRandPart((int)distr(gen), i);
			}
		}

		void addUnifPart(double l)
		{
			std::mt19937 gen((int)time(NULL));
			std::uniform_int_distribution<> distr(0, (int)l);
			for(int i = 0; i < (int)myVector.size(); i++)
			{
				addRandPart((int)distr(gen), i);
			}
		}	

		void addChiPart(double l)
		{
			std::mt19937 gen((int)time(NULL));
			std::chi_squared_distribution<> distr(l);
			for(int i = 0; i < (int)myVector.size(); i++)
			{
				addRandPart(rounding(distr(gen)), i);
			}
		}

		void addRandPart(int randPart, int index)
		{
			myRand.push_back(randPart);
			myVector[index] += myRand[index];
		}

		int rounding(double xIn)
		{
			int xIntC = (int)xIn, xDrobC;
			xIn -= xIntC;
			xDrobC = (int)(xIn * 10);
			if (xDrobC  >= 5)
			{
				xIntC++;
			}
			return xIntC;
		}

		int discoverPointSize(int value, int index)
		{
			int quantity  = 1;
			for(int i = 0; i < index; i++)
			{
				if (value == myRand[i])
				{
					quantity ++;
				}
			}
			return 5*quantity;
		}

		void exitFromForm()
		{
			timer3->Enabled = false;
			writeToFile();
			isOpenForm2 = true;
			Form::Close();
		}	 
};
}

