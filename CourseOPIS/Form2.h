#pragma once
namespace CourseOPIS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace DataVisualization::Charting;
	using namespace msclr::interop;
    using namespace std;

	vector<int> myVec;
	string sAnime;
	bool isOne[6] = {true, true, true, true, true, true};

	/// <summary>
	/// Сводка для Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			check = true;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Timer^  timer4;
	private: System::Windows::Forms::Timer^  timer5;
	private: System::Windows::Forms::Timer^  timer6;
	private: System::Windows::Forms::Button^  button6;
	private: System::ComponentModel::IContainer^  components;
	protected: 
	private:
		/// //<summary>
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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer6 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(161, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(294, 29);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Регрессионный анализ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(10, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Готовый массив";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Maroon;
			this->button2->Location = System::Drawing::Point(490, 372);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 33);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Выбрать";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 84);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(598, 64);
			this->dataGridView1->TabIndex = 5;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->checkBox6);
			this->groupBox2->Controls->Add(this->checkBox5);
			this->groupBox2->Controls->Add(this->checkBox4);
			this->groupBox2->Controls->Add(this->checkBox3);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->groupBox2->ForeColor = System::Drawing::Color::Maroon;
			this->groupBox2->Location = System::Drawing::Point(12, 165);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(598, 190);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Функция тренда";
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox6->Location = System::Drawing::Point(35, 152);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(148, 19);
			this->checkBox6->TabIndex = 0;
			this->checkBox6->Text = L"Логарифмическая";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox5->Location = System::Drawing::Point(35, 127);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(99, 19);
			this->checkBox5->TabIndex = 1;
			this->checkBox5->Text = L"Степенная";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox4->Location = System::Drawing::Point(35, 104);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(130, 19);
			this->checkBox4->TabIndex = 2;
			this->checkBox4->Text = L"Показательная";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox3->Location = System::Drawing::Point(35, 80);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(161, 19);
			this->checkBox3->TabIndex = 3;
			this->checkBox3->Text = L"Экспонентциальная";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox2->Location = System::Drawing::Point(35, 55);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(151, 19);
			this->checkBox2->TabIndex = 4;
			this->checkBox2->Text = L"Гипперболическая";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox1->Location = System::Drawing::Point(35, 31);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(91, 19);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Линейная";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->tabControl1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(0, 41);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(624, 376);
			this->panel1->TabIndex = 0;
			this->panel1->Visible = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Red;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(413, 337);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(197, 33);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Завершить работу";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form2::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::Maroon;
			this->button5->Location = System::Drawing::Point(148, 337);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(248, 33);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Анимация!!!";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form2::button5_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(624, 335);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->dataGridView2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(616, 309);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Результат";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(158, 3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(312, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Результат регрессионного анализа";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(8, 38);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 200;
			this->dataGridView2->Size = System::Drawing::Size(598, 226);
			this->dataGridView2->TabIndex = 1;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->chart1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(616, 309);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"График";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Help;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(529, 3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 15);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Пояснение!";
			this->label4->Click += gcnew System::EventHandler(this, &Form2::label4_Click);
			// 
			// chart1
			// 
			chartArea1->AxisX->Minimum = 1;
			chartArea1->InnerPlotPosition->Auto = false;
			chartArea1->InnerPlotPosition->Height = 92;
			chartArea1->InnerPlotPosition->Width = 95;
			chartArea1->InnerPlotPosition->X = 4;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend1->Name = L"Legend1";
			legend1->TitleAlignment = System::Drawing::StringAlignment::Near;
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(0, 0);
			this->chart1->Name = L"chart1";
			this->chart1->Size = System::Drawing::Size(616, 309);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			title1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			title1->ForeColor = System::Drawing::Color::Maroon;
			title1->Name = L"Title1";
			title1->Text = L"График результатов регрессии";
			this->chart1->Titles->Add(title1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(12, 337);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 33);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Maroon;
			this->button3->Location = System::Drawing::Point(13, 372);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(195, 33);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Выбрать все функции";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form2::button3_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 125;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form2::timer1_Tick);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::Maroon;
			this->button4->Location = System::Drawing::Point(214, 372);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(270, 33);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Анимация!!!";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form2::button4_Click);
			// 
			// timer2
			// 
			this->timer2->Interval = 125;
			this->timer2->Tick += gcnew System::EventHandler(this, &Form2::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Tick += gcnew System::EventHandler(this, &Form2::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Tick += gcnew System::EventHandler(this, &Form2::timer4_Tick);
			// 
			// timer5
			// 
			this->timer5->Interval = 125;
			this->timer5->Tick += gcnew System::EventHandler(this, &Form2::timer5_Tick);
			// 
			// timer6
			// 
			this->timer6->Tick += gcnew System::EventHandler(this, &Form2::timer6_Tick);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 417);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Регрессионный анализ";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Form
		private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			 readFromFile();
			 showVectorOnTheForm();
		 }

		//button Click
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			panel1->Visible = false;
			chart1->Series->Clear();
		}

		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			preparePanel1();
			viewTable();
			quantityFunc();
		}

		private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			checkBox1->Checked = check;
			checkBox2->Checked = check;
			checkBox3->Checked = check;
			checkBox4->Checked = check;
			checkBox5->Checked = check;
			checkBox6->Checked = check;
			check = !check;
		}

		private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			indexOfTimer = myVec.size()-1;
			timer2->Enabled = true;
			buttonOnOffFirst(false);
		}

		private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			if(tabControl1->SelectedIndex == 1)
			{
				animeChart();
			}
			else
			{
				animeTab();
			}
		}	

		private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			Form::Close();
		}

		//timer Tick

		private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
		{
			dataGridView1->Columns[indexOfTimer]->Visible = true;
			indexOfTimer++;
			if (indexOfTimer >= (int)myVector.size())
			{
				timer1->Enabled = false;
				buttonOnOffFirst(true);
			}
		}

		private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) 
		{
			if (indexOfTimer  < 0)
			{
				indexOfTimer = 0;
				timer2->Enabled = false;
				timer1->Enabled = true;
			}
			else
			{
				dataGridView1->Columns[indexOfTimer]->Visible = false;
				indexOfTimer --;
			}
		}

		private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) 
		{
			dataGridView2->Columns[indexOfTimer]->Visible = true;
			indexOfTimer++; 
			if (indexOfTimer >= dataGridView2->ColumnCount)
			{
				timer3->Enabled = false;
				buttonOffOn(true);
			}
		}

		private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e) 
		{
			if (indexOfTimer  < 0)
			{
				indexOfTimer = 0;
				timer4->Enabled = false;
				timer3->Enabled = true;
			}
			else
			{
				dataGridView2->Columns[indexOfTimer]->Visible = false;
				indexOfTimer --;
			}
		}

		private: System::Void timer5_Tick(System::Object^  sender, System::EventArgs^  e) 
		{
			if(indexOfTimer <= (int)myVec.size()-1)
			{
				chart1->Series[0]->Points->AddXY (indexOfTimer + 1 , myVec[indexOfTimer]);
				indexOfTimer++;
			}
			else 
			{
				timer5->Enabled = false;
				getByTurnsFunc();
			}
		}

		private: System::Void timer6_Tick(System::Object^  sender, System::EventArgs^  e) 
		{			  
			if(indexOfTimer <= (int)myVec.size()-1)
			{
				chart1->Series[kAnime]->Points->AddXY (indexOfTimer + 1 , calculateY (aAnime, bAnime, indexOfTimer, nAnime));
				indexOfTimer++;
			}
			else 
			{
				indexOfTimer = 0;
				timer6->Enabled = false; 
				getByTurnsFunc();   
			}
		}

		//label Click
		private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			String^ messageChartHelp = "Графики показательной и экспонентциальной всегда совпадают. Это математический факт!";
			MessageBox::Show(messageChartHelp, "Пояснение!", MessageBoxButtons::OK );
		}

		//Свои методы и свойства

		private:

		int numFunkReg;
		bool check;
		int indexOfTimer;
		double aAnime, bAnime;
		int nAnime, kAnime;

		void readFromFile()
		{
			ifstream file ("fileSaveData.txt");
			int temporaryValue;
			while(!file.eof())
			{
				file >> temporaryValue;
				myVec.push_back(temporaryValue);
			}
			file.close();
		}

		void showVectorOnTheForm()
		{
			for(int i = 0; i < (int) myVec.size(); i++)
			{
				dataGridView1->ColumnCount++; 
				dataGridView1->Columns[i]->Name = "Элемент ["+Convert::ToString(i+1)+ "]";
				dataGridView1->Rows[0]->Cells[i]->Value = Convert::ToString(myVec[i]);
			}	
		}

		void calculateSum(double x, double x2, double y, double xy, double & sumX, double & sumX2, double & sumY, double & sumXY)
	{
		sumX += x;
		sumX2 += x2;
		sumY += y;
		sumXY += xy;
	}

		void coefE (double a, double b,  int numberFunc, double& e)
	{
		int size = myVector.size();
		double sum = 0;
		for (int i = 0; i < (int) myVec.size(); i++)
		{
			sum += fabs( (myVec[i] - calculateY(a, b, i, numberFunc)) / myVec[i] );
		}
		e = okr( sum / size * 100, 3);
	}

		double coefRLin(double a, double b, double& r, double sumX, double sumX2, double sumY, double sumXY)
	{
		if(compareAll())
				return 0;
		double sumY2 = sumYY(), r2;
		int size = myVector.size();
		r =(size*sumXY - sumX*sumY) / (sqrt( (size*sumX2 - sumX*sumX) * ((size*sumY2 - sumY*sumY)) ));
		r2 = okr(r*r, 3);
		r = okr(r, 3);
		return r2;
	}

		double sumYY()
	{
		double sumY2 = 0;
		for (int i = 0; i < (int) myVec.size(); i++)
		{
			sumY2 += myVec[i] * myVec[i];
		}
		return sumY2;
	}

		void funcToChart1 (String^ nameSiries, double a, double b, int numberFunc, Color colorFunc)
		{
			tuneSeries(nameSiries, colorFunc);
			for (int i = 0; i < (int) myVec.size(); i++)
			{
				chart1->Series[nameSiries]->Points->AddXY (i + 1 , calculateY (a, b, i, numberFunc));
			}
		}

		void tuneSeries(String^ nameSiries,  Color colorFunc)
		{
			chart1->Series->Add(nameSiries);
			chart1->Series[nameSiries]->ChartType = SeriesChartType::Spline;
			chart1->Series[nameSiries]->BorderWidth = 2;
			chart1->Series[nameSiries]->Color =  colorFunc;
		}

		double calculateY(double a, double b, int i, int  numberFunk)
		{
			switch(numberFunk)
			{
			case 1: return a + b*(i+1); break;
			case 2: return a + b/(i+1); break;
			case 3: return exp(a + b*(i+1)); break;
			case 4: return a * pow(b, (i+1)); break;
			case 5: return a * pow((i+1), b); break;
			case 6: return a + b*log( (double) (i+1)); break;
			}
			return 0;
		}

		void coefR (double a, double b, double& r,  double& r2, int numberFunc)
		{
			if(compareAll())
			{
			r = r2 = 0;
			}
			else
			{
				double sum1 = 0, sum2 = 0, y = calculateAverageY();

				for (int i = 0; i < (int) myVec.size(); i++)
				{
					sum1 += pow( (myVec[i] - calculateY(a, b, i, numberFunc)), 2);
					sum2 += (myVec[i] - y) * (myVec[i] - y);
				}
				r = okr(sqrt (1 - sum1/sum2), 3);
				r2 = okr(r*r, 3);
			}
		}

		double calculateAverageY()
		{
			double sumY = 0;

			for (int i = 0; i < (int) myVec.size(); i++)
			{
				sumY += myVec[i];
			}
			double averageY = sumY / myVec.size();
			return averageY;
		}

		bool compareAll()
		{
			int comparator = myVector[0];
			for(int i = 0; i < (int) myVector.size(); i++)
			{
				if(comparator != myVector[i])
					return false;
			}
			return true;
		}
		
		void calculateABLin(double& a, double& b, double sumX, double sumX2, double sumY, double sumXY)
		 {
			 int size = myVector.size();
			 b = (sumX*sumY - size*sumXY)/(sumX*sumX - size * sumX2);
			 a = (sumX*sumXY - sumX2*sumY)/(sumX*sumX -size*sumX2);
			 a = okr(a, 3);
			 b = okr(b, 3);
		 }

		void calculateABGeom(double& a, double& b, double sum1X, double sum1X2, double sumY, double sumYdelX)
		 {
			 int size = myVector.size();
			 b = (size*sumYdelX - sum1X*sumY)/(size*sum1X2 - sum1X*sum1X);
			 a = (sumY/size - b/size*sum1X);
			 a = okr(a, 3);
			 b = okr(b, 3);
		 }

		void calculateABExp(double& a, double& b, double sumX, double sumX2, double sumLnY, double sumLnYX)
		 {
			 int size = myVector.size();
			 b = (size * sumLnYX  - sumX * sumLnY)/(size * sumX2 - sumX*sumX);
			 a = sumLnY/size - b/size*sumX;	 
			 a = okr(a, 3);
			 b = okr(b, 3);
		 }

		void calculateABPok(double& a, double& b, double sumX, double sumX2, double sumLnY, double sumLnYX)
		 {
			 int size = myVector.size();
			 b = exp( (size * sumLnYX  - sumX * sumLnY)/(size * sumX2 - sumX*sumX) );
			 a = exp( sumLnY/size - log(b)/size*sumX );
			 a = okr(a, 3);
			 b = okr(b, 3);
		 }

		void calculateABStep(double& a, double& b, double sumLnX, double sumLnX2, double sumLnY, double sumLnYLnX)
		 {
			 int size = myVector.size();
			 b = (size * sumLnYLnX - sumLnX * sumLnY)/(size * sumLnX2 - sumLnX*sumLnX);
			 a = exp( sumLnY/size - b/size*sumLnX );
			 a = okr(a, 3);
			 b = okr(b, 3);
		 }

		void calculateABLog(double& a, double& b, double sumLnX, double sumLnX2, double sumY, double sumYLnX)
		 {
			 int size = myVector.size();
			 b = (size*sumYLnX - sumLnX*sumY)/(size*sumLnX2 -sumLnX*sumLnX);
			 a = sumY/size - b/size*sumLnX;
			 a = okr(a, 3);
			 b = okr(b, 3);
		 }

		void funkL()
		 {
			 double a, b, sumX = 0, sumX2 = 0, sumY = 0, sumXY = 0, r, r2, e;
			 for (int i = 0; i < (int) myVec.size(); i++)
			 {
				calculateSum((i+1), (i+1)*(i+1), myVec[i], myVec[i] * (i+1), sumX, sumX2, sumY, sumXY);
			 }
			 calculateABLin(a, b, sumX, sumX2, sumY, sumXY);
			 r2 = coefRLin (a, b, r, sumX, sumX2, sumY, sumXY);
			 coefE (a, b, 1, e);
			 funcToChart1 ("Линейная",  a, b, 1, Color::Red);
			 withdrawFunc(a, b, r, r2, e, "Линейная", "Y = (", ") + (", ") * X");
		 }

		void funkG()
		 {
			 double a, b, sum1X = 0, sum1X2 = 0, sumY = 0, sumYdelX = 0, r, r2, e;
			 for (int i = 0; i < (int) myVec.size(); i++)
			 {
				calculateSum((double) 1/(i+1),(double) 1/((i+1)*(i+1)), myVec[i],(double) myVec[i]/(i+1), sum1X, sum1X2, sumY, sumYdelX);
			 }
			 calculateABGeom(a, b, sum1X, sum1X2, sumY, sumYdelX);
			 coefR (a, b, r, r2, 2);
			 coefE (a, b, 2, e);
			 funcToChart1 ("Гипперболическая",  a, b, 2, Color::Green);
			 withdrawFunc(a, b, r, r2, e,"Гипперболическая", "Y = (", ") + (", ")/X");
		 }

		void funkE()
		 {
			 double a, b, sumX = 0, sumX2 = 0, sumLnY = 0, sumLnYX = 0, r, r2, e;
			 for (int i = 0; i < (int) myVec.size(); i++)
			 {
				 calculateSum((i+1), (i+1)*(i+1), log((double)myVec[i]), log((double)myVec[i])*(i+1), sumX, sumX2, sumLnY, sumLnYX);
			 }
			 calculateABExp(a, b, sumX, sumX2, sumLnY, sumLnYX);
			 coefR (a, b, r, r2, 3);
			 coefE (a, b, 3, e);
			 funcToChart1 ("Экспонентциальная",  a, b, 3, Color::Orange);
			 withdrawFunc(a, b, r, r2, e, "Экспонентциальная", "Y = e^((", ") + (", ") * X)");
		 }

		void funkPok()
		 {
			 double a, b, sumX = 0, sumX2 = 0, sumLnY = 0, sumLnYX = 0, r, r2, e;
			 for (int i = 0; i < (int) myVec.size(); i++)
			 {
				 calculateSum((i+1), (i+1)*(i+1), log((double)myVec[i]), log((double)myVec[i])*(i+1), sumX, sumX2, sumLnY, sumLnYX);
			 }
			 calculateABPok(a, b, sumX, sumX2, sumLnY, sumLnYX);
			 coefR (a, b, r, r2, 4);
			 coefE (a, b, 4, e);
			 funcToChart1 ("Показательная",  a, b, 4, Color::Black);
			 withdrawFunc(a, b, r, r2, e, "Показательная", "Y = (", ") * (", ")^X");
		 }

		void funkS ()
		 {
			 double a, b, sumLnX = 0, sumLnX2 = 0, sumLnY = 0, sumLnYLnX = 0, r, r2, e;
			 for (int i = 0; i < (int) myVec.size(); i++)
			 {
				calculateSum(log((double)(i+1)), pow( log((double)(i+1)), 2), log((double)myVec[i]), log((double)myVec[i])*log((double)(i+1)), sumLnX, sumLnX2, sumLnY, sumLnYLnX);		 
			 }
			 calculateABStep(a, b, sumLnX, sumLnX2, sumLnY, sumLnYLnX);
			 coefR (a, b, r, r2, 5);
			 coefE (a, b, 5, e);
			 funcToChart1 ("Степенная",  a, b, 5, Color::Olive);
			 withdrawFunc(a, b, r, r2, e, "Степенная", "Y = (", ") * X^(", ")");
		 }

		void funkLog()
		 {
			 double a, b, sumLnX = 0, sumLnX2 = 0, sumY = 0, sumYLnX = 0, r, r2, e;
			 for (int i = 0; i < (int) myVec.size(); i++)
			 {
				 calculateSum(log((double)(i+1)), pow( log((double)(i+1)), 2), myVec[i],  myVec[i] * log((double)(i+1)), sumLnX, sumLnX2, sumY, sumYLnX);		 
			 }
			 calculateABLog (a, b, sumLnX, sumLnX2, sumY, sumYLnX);
			 coefR (a, b, r, r2, 6);
			 coefE (a, b, 6, e);
			 funcToChart1 ("Логарифмическая",  a, b, 6, Color::Aqua);
			  withdrawFunc(a, b, r, r2, e, "Логарифмическая", "Y = (", ") + (", ")*Ln(X)");
		 }

		double okr(double xIn, int kl)
		 {
			 int xIntC = (int)xIn, xDrobC;
			 double xOut;

			 xIn -= xIntC;
			 xDrobC = (int)(xIn * pow((double)10, kl+1));
			 if (xDrobC % 10 >= 5)
			 {
				 xDrobC += 10;
			 }
			 xDrobC /= 10;
			 xOut = xIntC + xDrobC / pow ((double)10,kl);

			 return xOut;
		 }

		void preparePanel1()
		 {
			 dataGridView2->RowCount = 0;
		     dataGridView2->ColumnCount = 0;
			 chart1->ChartAreas["ChartArea1"]->AxisX->Maximum = myVec.size();
		 }

		int maxOfmyVector()
		{
			 int maxValue = myVec[0];
			 for (int i = 0; i < (int) myVec.size(); i++)
			 {
				 if(myVec[i] > maxValue)
					 maxValue = myVec[i];
			 }
			 return maxValue;
		}

		void quantityFunc()
		 {
			 int quantity=0;
			 if(checkBox1->Checked == true)
			 {
				 quantity++; funkL();
			 }
			 if(checkBox2->Checked == true)
			 {
				 quantity++; funkG(); 
			 }
			 if(checkBox3->Checked == true)
			 {
				  quantity++;funkE();
			 }
			 if(checkBox4->Checked == true)
			 {
				  quantity++; funkPok();
			 }
			 if(checkBox5->Checked == true)
			 {
				  quantity++; funkS();
			 }
			 if(checkBox6->Checked == true)
			 {
				  quantity++; funkLog();
			 }
			 handleQuantityFunc(quantity);
		 }

		void handleQuantityFunc(int quantity)
		 {
			 if( quantity == 0 )
			 {
				 MessageBox::Show("Выберите хотябы 1 функцию!", "Предупреждение!", MessageBoxButtons::OK ); 
			 }
			 else
			 {
				funcToChart();
				panel1->Visible = true;
			 }
		 }

		void funcToChart()
		 {
			 String^ nameFirstSeries = "Исходные значения";
			 chart1->Series->Add(nameFirstSeries);
			 chart1->Series[nameFirstSeries ]->ChartType = SeriesChartType::FastPoint;
			 chart1->Series[nameFirstSeries ]->Color = Color::Blue;
			 chart1->Series[nameFirstSeries ]->MarkerSize = 8;
			 for (int i = 0; i <  (int) myVec.size(); i++)
			 {
				 chart1->Series[nameFirstSeries]->Points->AddXY (i + 1 , myVec[i]);
			 }
		 }

		void viewTable()
		 {
			  dataGridView2->ColumnCount++; 
			  dataGridView2->RowCount = 7;
			  addFristColumn();
			  dataGridView2->Columns[0]->SortMode = DataGridViewColumnSortMode::NotSortable;
			  dataGridView2->Columns[0]->Width = 145;
		 }

		void addFristColumn()
		 {
			  dataGridView2->Rows[0]->Cells[0]->Value  = "Уравнение регрессии";
			  dataGridView2->Rows[1]->Cells[0]->Value  = "Коэфициэнт R";
			  dataGridView2->Rows[2]->Cells[0]->Value  = "Коэфициэнт R^2";
			  dataGridView2->Rows[3]->Cells[0]->Value  = "Стандартная ошибка";
			  dataGridView2->Rows[4]->Cells[0]->Value  = "Кл-во элементов";
			  dataGridView2->Rows[5]->Cells[0]->Value  = "Коэфициэнт A";
			  dataGridView2->Rows[6]->Cells[0]->Value  = "Коэфициэнт B";
			  dataGridView2->Columns[0]->Name = "Параметры регрессии";
		 }

		void withdrawFunc(double a, double b, double r, double r2, double e,
						String^ funcName, String^ firstPart, String^ secondPart, String^ thirdPart)
		{
			int columnNumber = settingColumn(funcName);			 
			addEquation(columnNumber, firstPart, secondPart, thirdPart, a, b);
			dataGridView2->Rows[1]->Cells[columnNumber]->Value = Convert::ToString(r);
			dataGridView2->Rows[2]->Cells[columnNumber]->Value = Convert::ToString(r2);
			dataGridView2->Rows[3]->Cells[columnNumber]->Value = Convert::ToString(e);
			dataGridView2->Rows[4]->Cells[columnNumber]->Value = Convert::ToString(myVec.size());
			dataGridView2->Rows[5]->Cells[columnNumber]->Value = Convert::ToString(a);
			dataGridView2->Rows[6]->Cells[columnNumber]->Value = Convert::ToString(b);
		}

		void addEquation(int columnNumber, String^ firstPart, String^ secondPart, String^ thirdPart, double a, double b)
		 {
			 dataGridView2->Rows[0]->Cells[columnNumber]->Value =   firstPart;
			 dataGridView2->Rows[0]->Cells[columnNumber]->Value +=  Convert::ToString(a);
			 dataGridView2->Rows[0]->Cells[columnNumber]->Value +=  secondPart;
			 dataGridView2->Rows[0]->Cells[columnNumber]->Value +=  Convert::ToString(b);
			 dataGridView2->Rows[0]->Cells[columnNumber]->Value +=  thirdPart;
		 }

		int settingColumn(String^ funcName)
		 {

			 dataGridView2->ColumnCount++;  
			 int columnNumber = dataGridView2->ColumnCount-1;
			 dataGridView2->Columns[columnNumber]->Name = funcName;
			 dataGridView2->Columns[columnNumber]->SortMode = DataGridViewColumnSortMode::NotSortable;
			 dataGridView2->Columns[columnNumber]->Width = 140;
			 return columnNumber;
		 }

		void buttonOnOffFirst(bool state)
		 {
			 button2->Enabled = state;
			 button3->Enabled = state;
			 button4->Enabled = state;
		 }
	 
		void animeTab()
		 {
			indexOfTimer = dataGridView2->ColumnCount-1;
			timer4->Enabled = true;
			buttonOffOn(false);
		 }

		void animeChart()
		 {
			selectMaxMinSizeY();
			buttonOffOn(false);
			addFirstSeries();
			indexOfTimer = 0;
			timer5->Enabled = true;
		 }

		void selectMaxMinSizeY()
		 {
			double maxSize =  chart1->ChartAreas["ChartArea1"]->AxisY->Maximum,
			minSize =  chart1->ChartAreas["ChartArea1"]->AxisY->Minimum;
			chart1->ChartAreas["ChartArea1"]->AxisY->Maximum = maxSize;
			chart1->ChartAreas["ChartArea1"]->AxisY->Minimum = minSize;
		 }

		void addFirstSeries()
		 {
			 String^ nameSeries = "Исходные значения";
			 chart1->Series->Clear();
			 chart1->Series->Add(nameSeries);
			 chart1->Series[nameSeries]->ChartType = SeriesChartType::FastPoint;
			 chart1->Series[nameSeries]->Color = Color::Blue;
			 chart1->Series[nameSeries]->MarkerSize = 8;
		 }

		void getByTurnsFunc()
		 {
			 indexOfTimer = 0;
			 if(checkBox1->Checked == true && isOne[0])
			 {
				 animateChart(1, "Линейная", Color::Red);	return;
			 }
			 if(checkBox2->Checked == true && isOne[1])
			 {
				  animateChart(2, "Гипперболическая", Color::Green);	return;
			 }
			 if(checkBox3->Checked == true && isOne[2])
			 {
				  animateChart(3, "Экспонентциальная", Color::Orange);	return;
			 }
			 if(checkBox4->Checked == true  && isOne[3])
			 {
				  animateChart(4, "Показательная", Color::Black);	return;
			 }
			 if(checkBox5->Checked == true  && isOne[4])
			 {
				  animateChart(5, "Степенная", Color::Olive);	return;
			 }
			 if(checkBox6->Checked == true && isOne[5])
			 {
				  animateChart(6, "Логарифмическая", Color::Aqua);	return;
			 }
			 animateEnd();
		 }

		void animateEnd()
		 {
			 isOne[5] = isOne[4] = isOne[3] = isOne[2] = isOne[1] = isOne[0] = true;
			 kAnime = 0;
			 buttonOffOn(true);
		 }

		void buttonOffOn(bool state)
		 {
			 button1->Enabled = state;
			 button5->Enabled = state;
			 button6->Enabled = state;
		 }

		void animateChart(int numberFunk, String^  nameFunc, Color colorSeries)
		 {
				  kAnime++;
				  nAnime = numberFunk;
				  getAB();
			      addSer(nameFunc, colorSeries);
				  timer6->Enabled = true;
				  isOne[numberFunk-1] = false;
		 }

		void getAB()
		 {	 		 
			 aAnime = Convert::ToDouble(dataGridView2->Rows[5]->Cells[kAnime]->Value);
			 bAnime = Convert::ToDouble(dataGridView2->Rows[6]->Cells[kAnime]->Value);
		 }

		void addSer(String^ nameString, Color nameColor)
		 {
			 chart1->Series->Add(nameString);
			 chart1->Series[nameString]->ChartType = SeriesChartType::Spline;
			 chart1->Series[nameString]->BorderWidth = 2;
			 chart1->Series[nameString]->Color = nameColor;
		 }
};
}