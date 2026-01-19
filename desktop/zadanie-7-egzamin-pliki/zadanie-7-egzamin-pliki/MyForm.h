#pragma once

namespace zadanie7egzaminpliki {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label1->ForeColor = System::Drawing::Color::AntiqueWhite;
			this->label1->Location = System::Drawing::Point(44, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(228, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Podaj Warto�� klucza:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label2->ForeColor = System::Drawing::Color::AntiqueWhite;
			this->label2->Location = System::Drawing::Point(448, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(202, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Tekst zaszyfrowany";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(49, 83);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label3->ForeColor = System::Drawing::Color::AntiqueWhite;
			this->label3->Location = System::Drawing::Point(49, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 26);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Podaj tekst";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightBlue;
			this->button1->Location = System::Drawing::Point(322, 166);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Szyfruj";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Location = System::Drawing::Point(453, 83);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(280, 213);
			this->panel1->TabIndex = 6;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::CadetBlue;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox3->ForeColor = System::Drawing::Color::AliceBlue;
			this->textBox3->Location = System::Drawing::Point(18, 18);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(243, 180);
			this->textBox3->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(54, 215);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(247, 186);
			this->textBox2->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightBlue;
			this->button2->Location = System::Drawing::Point(513, 324);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Zapisz do pliku";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->ClientSize = System::Drawing::Size(785, 447);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Szyfrowanie: Autor: 0000000";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Panel^ p = safe_cast<Panel^>(sender);
		Graphics^ g = e->Graphics;

		int radius = 20; // promie� rog�w
		int thickness = 2; // grubo�� linii

		Pen^ pen = gcnew Pen(Color::AntiqueWhite, thickness);

		// prostok�t z zaokr�glonymi rogami
		System::Drawing::Rectangle rect = System::Drawing::Rectangle(0, 0, p->Width - 1, p->Height - 1);
		System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();

		path->AddArc(rect.X, rect.Y, radius, radius, 180, 90); // g�rny-lewy
		path->AddArc(rect.Right - radius, rect.Y, radius, radius, 270, 90); // g�rny-prawy
		path->AddArc(rect.Right - radius, rect.Bottom - radius, radius, radius, 0, 90); // dolny-prawy
		path->AddArc(rect.X, rect.Bottom - radius, radius, radius, 90, 90); // dolny-lewy
		path->CloseFigure();

		g->DrawPath(pen, path);
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ tekst = this->textBox2->Text;

    int klucz = 0;
    if (!Int32::TryParse(this->textBox1->Text, klucz))
   {
    klucz = 0;
   } else {
    klucz = Int32::Parse(this->textBox1->Text);
   }

		String^ alfabet = "abcdefghijklmnopqrstuvwxyz";
		int n = alfabet->Length;
		String^ szyfrowanyTekst = "";

		klucz = klucz % n;

		for (int i = 0; i < tekst->Length; i++)
		{
			wchar_t c = tekst[i];

			if (!Char::IsLetter(c)) // wszystko co nie jest liter� pozostaje bez zmian
			{
				szyfrowanyTekst += c;
				continue;
			}

			int index = (c - 'a' + klucz + n) % n;
			szyfrowanyTekst += alfabet[index];
		}

		this->textBox3->Text = szyfrowanyTekst;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ szyfrowanyTekst = this->textBox3->Text;

		if (String::IsNullOrEmpty(szyfrowanyTekst)) {
			MessageBox::Show("Nie ma nic do zapisania!", "B��d", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Wyb�r pliku przez u�ytkownika
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "Pliki tekstowe (*.txt)|*.txt|Wszystkie pliki (*.*)|*.*";
		saveFileDialog1->Title = "Zapisz zaszyfrowany tekst do pliku";
		saveFileDialog1->FileName = "zaszyfrowany_tekst.txt";

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			try {
				// Zapis do pliku
				System::IO::File::WriteAllText(saveFileDialog1->FileName, szyfrowanyTekst);
				MessageBox::Show("Zapisano poprawnie!", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ ex) {
				MessageBox::Show("B��d podczas zapisu: " + ex->Message, "B��d", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
};
}
