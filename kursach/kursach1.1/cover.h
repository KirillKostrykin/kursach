#pragma once


namespace kursach11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для cover
	/// </summary>
	public ref class cover : public System::Windows::Forms::Form
	{
	public:
		cover(void)
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
		~cover()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::Button^  button1;
	public: System::Windows::Forms::Button^  button2;
	public: System::Windows::Forms::Button^  button3;
	public: System::Windows::Forms::Button^  button4;
	public: System::Windows::Forms::Button^  button5;
	public: System::Windows::Forms::Button^  button6;
	public: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::ToolTip^  toolTip2;
	private: System::Windows::Forms::ToolTip^  toolTip3;
	private: System::Windows::Forms::ToolTip^  toolTip4;
	private: System::Windows::Forms::ToolTip^  toolTip5;
	private: System::Windows::Forms::ToolTip^  toolTip6;
	private: System::Windows::Forms::ToolTip^  toolTip7;

	private: System::ComponentModel::IContainer^  components;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(cover::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip3 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip4 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip5 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip6 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip7 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(308, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(354, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ну что, какое покрытие возьмем\?";
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(41, 320);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 59);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Плитка";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &cover::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(275, 320);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(151, 59);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Бетон";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &cover::button2_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(536, 320);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(151, 59);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Линолеум";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &cover::button3_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(787, 320);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(151, 59);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Ламинат";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &cover::button4_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(141, 432);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(151, 59);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Паркет";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &cover::button5_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(664, 432);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(151, 59);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Солома";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &cover::button6_Click);
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(411, 432);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(151, 59);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Кирпич";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &cover::button7_Click);
			// 
			// cover
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1025, 606);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"cover";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Покрытие";
			this->Load += gcnew System::EventHandler(this, &cover::cover_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		float price;
	private: System::Void cover_Load(System::Object^  sender, System::EventArgs^  e) {
				 toolTip1->SetToolTip(button1, "Плитка.\n Цена за 1м^2 покрытия - 131.400 белорусских рублей.");//подсказка для плитки
				 toolTip1->IsBalloon = true;


				 toolTip2->SetToolTip(button2, "Бетон.\n Цена за 1м^2 покрытия - 60.000 белорусских рублей.");//подсказка для бетона
				 toolTip2->IsBalloon = true;


				 toolTip3->SetToolTip(button3, "Линолеум.\n Цена за 1м^2 покрытия - 138.600 белорусских рублей.");//подсказка для линолеума 
				 toolTip3->IsBalloon = true;

				 toolTip4->SetToolTip(button4, "Ламинат.\n Цена за 1м^2 покрытия - 104.900 белорусских рублей.");//подсказка для ламината
				 toolTip4->IsBalloon = true;

				 toolTip5->SetToolTip(button5, "Паркет.\n Цена за 1м^2 покрытия - 100.000 белорусских рублей.");//подсказка для паркета
				 toolTip5->IsBalloon = true;

				 toolTip6->SetToolTip(button6, "Солома.\n Цена за 1м^2 покрытия - 5.000 белорусских рублей.");//подсказка для соломы
				 toolTip6->IsBalloon = true;

				 toolTip7->SetToolTip(button7, "Кирпич.\n Цена за 1м^2 покрытия - 110.000 белорусских рублей.");//подсказка для кирпича
				 toolTip7->IsBalloon = true;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {//плитка
				 price = 131400;
				
				 MessageBox::Show("Вы выбрали плитку.\nЦена за 1 м^2 - 131.400 белорусских рублей.");
				 auto f = System::IO::File::CreateText("D:\\price.txt");
				 f->WriteLine(price);
				 f->Close();

	}

    private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {//бетон
				 price = 60000;
			
				 MessageBox::Show("Вы выбрали бетон.\nЦена за 1 м^2 - 60.000 белорусских рублей.");
				 auto f = System::IO::File::CreateText("D:\\price.txt");
				 f->WriteLine(price);
				 f->Close();
    }
    private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {//линолеум
				 price = 138600;
				
				 MessageBox::Show("Вы выбрали линолеум.\nЦена за 1 м^2 - 138.600 белорусских рублей.");
				 auto f = System::IO::File::CreateText("D:\\price.txt");
				 f->WriteLine(price);
				 f->Close();
    } 
    private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {//ламинат
				 price = 104900;
				
				 MessageBox::Show("Вы выбрали kfvbyfn.\nЦена за 1 м^2 - 104.900 белорусских рублей.");
				 auto f = System::IO::File::CreateText("D:\\price.txt");
				 f->WriteLine(price);
				 f->Close();
    }
    private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {//паркет
				 price = 100000;
				
				 MessageBox::Show("Вы выбрали паркет.\nЦена за 1 м^2 - 100.000 белорусских рублей.");
				 auto f = System::IO::File::CreateText("D:\\price.txt");
				 f->WriteLine(price);
				 f->Close();
    }
    private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {//кирпич
				 price = 110000;
				 
				 MessageBox::Show("Вы выбрали кирпич.\nЦена за 1 м^2 - 110.000 белорусских рублей.");
				 auto f = System::IO::File::CreateText("D:\\price.txt");
				 f->WriteLine(price);
				 f->Close();
    }
    private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {//солома
				 price = 5000;
				 
				 MessageBox::Show("Вы выбрали солому.\nЦена за 1 м^2 - 5.000 белорусских рублей.");
				 auto f = System::IO::File::CreateText("D:\\price.txt");
				 f->WriteLine(price);
				 f->Close();
    }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

}
};
}
