#pragma once
#include<string>

#include"..\TQueue.h"
#include <msclr\marshal_cppstd.h>


TQueue<int> queue_process;

namespace VisualQueue {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для WindowQueue
	/// </summary>
	public ref class WindowQueue : public System::Windows::Forms::Form
	{
	public:
		WindowQueue(void)
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
		~WindowQueue()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::ComponentModel::IContainer^ components;
	private: System::Int32 count;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Int32 turn;

	protected:
		
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(47, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(167, 28);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"100";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(43, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(298, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Максимальный размер очереди";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(43, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(283, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Изначальный размер очереди";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(43, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Время одного такта";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(43, 236);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(322, 24);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Верояность добавления элемента";
			this->label5->Click += gcnew System::EventHandler(this, &WindowQueue::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(43, 310);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(308, 24);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Вероятность удаления элемента";
			this->label6->Click += gcnew System::EventHandler(this, &WindowQueue::label6_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(47, 125);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(167, 28);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"50";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &WindowQueue::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(47, 193);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(167, 28);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"200";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(47, 263);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(167, 28);
			this->textBox5->TabIndex = 10;
			this->textBox5->Text = L"0.7";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(47, 348);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(167, 28);
			this->textBox6->TabIndex = 11;
			this->textBox6->Text = L"0.5";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(396, 43);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(225, 37);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Начать симмуляцию";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &WindowQueue::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(641, 43);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(255, 37);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Закончить симмуляцию";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &WindowQueue::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(483, 141);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(298, 24);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Текущее количество элементов";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(545, 178);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(179, 28);
			this->textBox8->TabIndex = 16;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &WindowQueue::textBox8_TextChanged);
			// 
			// timer1
			// 
			this->timer1->Interval = 120;
			this->timer1->Tick += gcnew System::EventHandler(this, &WindowQueue::timer1_Tick);
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(470, 428);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(351, 52);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Ошибка! Недостаточно данных. Пожалуйста заполните все поля!";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label8->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(470, 223);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 25);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Добавлено";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(675, 223);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(91, 25);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Удалено";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(447, 263);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(156, 30);
			this->textBox4->TabIndex = 20;
			this->textBox4->Text = L"0";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(654, 263);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(153, 30);
			this->textBox7->TabIndex = 21;
			this->textBox7->Text = L"0";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(565, 98);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(142, 34);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Пауза";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &WindowQueue::button3_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(560, 310);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(139, 25);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Число тактов";
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(540, 341);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(183, 30);
			this->textBox9->TabIndex = 24;
			this->textBox9->Text = L"0";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// WindowQueue
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 603);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"WindowQueue";
			this->Text = L"WindowQueue";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	System::Boolean check(System::String^ S) {
		std::string s = msclr::interop::marshal_as<std::string>(S);
		for (auto x : s) {
			if (x <= '9' && x >= '0')
				return 1;
		}
		return 0;
	}

	System::Void Draw() {
		int len = 130;

		Pen^ pen = gcnew Pen(SystemColors::Control);
		pen->Width = len;

		Int32 sz= Convert::ToInt32(textBox1->Text);
		Int32 d1 = turn*360/sz;
		Int32 d2 = (count)*360/sz;


		Graphics^ graph = this->CreateGraphics();
		graph->DrawRectangle(pen,400,340,len,len);
		pen->Color = Color::Blue;
		pen->Width = len/10;

		Graphics^ grap = this->CreateGraphics();
		grap->DrawArc(pen, 400, 340, len, len, d1, d2);

	}
	System::Void Push() {
		std::string s = msclr::interop::marshal_as<std::string>(textBox5->Text);
		Random^ rmd = gcnew Random();

		if (rmd->NextDouble() > std::stod(s))
			return;
		try {
			queue_process.push(rand());
			count++;
			textBox4->Text = Convert::ToString(Convert::ToInt32(textBox4->Text)+1);
		}
		catch (...) {
		}
		textBox8->Text = Convert::ToString(count);
	}
	System::Void Pop() {
		std::string s = msclr::interop::marshal_as<std::string>(textBox6->Text);
		Random^ rmd = gcnew Random();

		if (rmd->NextDouble() > std::stod(s))
			return;
		try {
			queue_process.pop();
			count--;
			turn++;
			textBox7->Text = Convert::ToString(Convert::ToInt32(textBox7->Text)+1);
		}
		catch (...) {
		}
		textBox8->Text = Convert::ToString(count);
	}


	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//текущее колво
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//начальное колво
		textBox8->Text = textBox2->Text;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//кнопка включения

		if (!check(textBox1->Text) || !check(textBox2->Text) || !check(textBox3->Text)||
				!check(textBox5->Text) || !check(textBox6->Text)) {
			label8->Visible = true;
			return;
		}

		textBox8->Text = textBox2->Text;
		textBox4->Text = "0";
		textBox7->Text = "0";
		textBox9->Text = "0";
		textBox1->ReadOnly = true;
		textBox2->ReadOnly = true;
		textBox3->ReadOnly = true;
		textBox5->ReadOnly = true;
		textBox6->ReadOnly = true;
		label8->Visible = false;
		
		this->button2->Enabled = true;
		this->button3->Enabled = true;
		this->timer1->Interval = Convert::ToInt32(this->textBox3->Text);
		this->timer1->Enabled = true;
		queue_process = TQueue<int>(Convert::ToInt32(this->textBox1->Text));
		count = Convert::ToInt32(this->textBox2->Text);
		turn = 0;
		for (int i = 0; i < count; i++) {
			queue_process.push(rand());
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//кнопка вЫключения
		textBox1->ReadOnly = false;
		textBox2->ReadOnly = false;
		textBox3->ReadOnly = false;
		textBox5->ReadOnly = false;
		textBox6->ReadOnly = false;

		this->timer1->Enabled = false;
		textBox8->Text = textBox2->Text;
		textBox4->Text = "0";
		textBox7->Text = "0";
		textBox9->Text = "0";
		count = 0; turn = 0;
		Draw();
		this->button2->Enabled = false;
		this->button3->Enabled = false;
	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		// тик таймера
		Push();
		Pop();
		textBox9->Text = Convert::ToString(Convert::ToInt32(textBox9->Text) + 1);
		Draw();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->timer1->Enabled = !this->timer1->Enabled;
	}

};

}
