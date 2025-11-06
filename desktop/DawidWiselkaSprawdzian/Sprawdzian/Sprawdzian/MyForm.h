#pragma once

namespace Sprawdzian {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ stanGryLabel;
	protected:

	protected:

	private: System::Windows::Forms::Label^ liczbaGierLabel;
	private: System::Windows::Forms::Button^ losujBtn;
	private: System::Windows::Forms::Button^ resetBtn;



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->stanGryLabel = (gcnew System::Windows::Forms::Label());
			this->liczbaGierLabel = (gcnew System::Windows::Forms::Label());
			this->losujBtn = (gcnew System::Windows::Forms::Button());
			this->resetBtn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// stanGryLabel
			// 
			this->stanGryLabel->AutoSize = true;
			this->stanGryLabel->Location = System::Drawing::Point(12, 9);
			this->stanGryLabel->Name = L"stanGryLabel";
			this->stanGryLabel->Size = System::Drawing::Size(82, 13);
			this->stanGryLabel->TabIndex = 0;
			this->stanGryLabel->Text = L"Zdoby³eœ: 0 ptk";
			// 
			// liczbaGierLabel
			// 
			this->liczbaGierLabel->AutoSize = true;
			this->liczbaGierLabel->Location = System::Drawing::Point(149, 9);
			this->liczbaGierLabel->Name = L"liczbaGierLabel";
			this->liczbaGierLabel->Size = System::Drawing::Size(70, 13);
			this->liczbaGierLabel->TabIndex = 1;
			this->liczbaGierLabel->Text = L"Liczba gier: 0";
			// 
			// losujBtn
			// 
			this->losujBtn->Location = System::Drawing::Point(44, 251);
			this->losujBtn->Name = L"losujBtn";
			this->losujBtn->Size = System::Drawing::Size(75, 23);
			this->losujBtn->TabIndex = 2;
			this->losujBtn->Text = L"Losuj";
			this->losujBtn->UseVisualStyleBackColor = true;
			this->losujBtn->Click += gcnew System::EventHandler(this, &MyForm::losujBtn_Click);
			// 
			// resetBtn
			// 
			this->resetBtn->Location = System::Drawing::Point(192, 251);
			this->resetBtn->Name = L"resetBtn";
			this->resetBtn->Size = System::Drawing::Size(75, 23);
			this->resetBtn->TabIndex = 3;
			this->resetBtn->Text = L"Reset";
			this->resetBtn->UseVisualStyleBackColor = true;
			this->resetBtn->Click += gcnew System::EventHandler(this, &MyForm::resetBtn_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(44, 117);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(60, 60);
			this->panel1->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(122, 117);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(60, 60);
			this->panel2->TabIndex = 5;
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(212, 117);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(60, 60);
			this->panel3->TabIndex = 6;
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(352, 65);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(180, 180);
			this->panel4->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(349, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Kolor bazowy";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 295);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(377, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Aby zdobyæ punkt wszystkie trzy kolory musz¹ zgadzaæ siê z kolorem bazowym";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(603, 329);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->resetBtn);
			this->Controls->Add(this->losujBtn);
			this->Controls->Add(this->liczbaGierLabel);
			this->Controls->Add(this->stanGryLabel);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int liczbaPunktow = 0;
		int liczbaGier = 0;
		int kolorBazowy;
		System::Random^ los = gcnew System::Random();


	void podmienPanel(int indexPanelu, int indexKoloru) {
		array<System::Drawing::Color>^ kolory = { System::Drawing::Color::Red, System::Drawing::Color::Green, System::Drawing::Color::Blue };

			if (indexPanelu == 1) {
				this->panel1->BackColor = kolory[indexKoloru - 1];
			}
			else if (indexPanelu == 2) {
				this->panel2->BackColor = kolory[indexKoloru - 1];
			} 
			else if (indexPanelu == 3) {
				this->panel3->BackColor = kolory[indexKoloru - 1];
			}
			else if (indexPanelu == 4) {
				this->panel4->BackColor = kolory[indexKoloru - 1];
			}

		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		kolorBazowy = los->Next(1, 4);
		podmienPanel(4, kolorBazowy);
	}
	private: System::Void resetBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		kolorBazowy = los->Next(1, 4);
		podmienPanel(4, kolorBazowy);
	}
	private: System::Void losujBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		liczbaGier++;
		liczbaGierLabel->Text = "Liczba gier: " + liczbaGier.ToString();

		int liczba1 = los->Next(1, 4);
		podmienPanel(1, liczba1);

		int liczba2 = los->Next(1, 4);
		podmienPanel(2, liczba2);

		int liczba3 = los->Next(1, 4);
		podmienPanel(3, liczba3);

		if (liczba1 == kolorBazowy && liczba2 == kolorBazowy && liczba3 == kolorBazowy) {
			liczbaPunktow++;
			stanGryLabel->Text = "Zdoby³eœ: " + liczbaPunktow.ToString(); + "ptk";
		}
	}
	};
}
