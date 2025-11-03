#pragma once

namespace Dzwieki {

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
	private: System::Windows::Forms::PictureBox^ leftArrow;
	private: System::Windows::Forms::PictureBox^ rightArrow;
	protected:

	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ downloadBtn;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->leftArrow = (gcnew System::Windows::Forms::PictureBox());
			this->rightArrow = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->downloadBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leftArrow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rightArrow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// leftArrow
			// 
			this->leftArrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"leftArrow.Image")));
			this->leftArrow->Location = System::Drawing::Point(12, 76);
			this->leftArrow->Name = L"leftArrow";
			this->leftArrow->Size = System::Drawing::Size(90, 70);
			this->leftArrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->leftArrow->TabIndex = 0;
			this->leftArrow->TabStop = false;
			this->leftArrow->Click += gcnew System::EventHandler(this, &MyForm::leftArrow_Click);
			// 
			// rightArrow
			// 
			this->rightArrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rightArrow.Image")));
			this->rightArrow->Location = System::Drawing::Point(791, 76);
			this->rightArrow->Name = L"rightArrow";
			this->rightArrow->Size = System::Drawing::Size(90, 70);
			this->rightArrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->rightArrow->TabIndex = 1;
			this->rightArrow->TabStop = false;
			this->rightArrow->Click += gcnew System::EventHandler(this, &MyForm::rightArrow_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(165, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(151, 144);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(347, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 38);
			this->label1->TabIndex = 3;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(350, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(97)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->label3->Location = System::Drawing::Point(352, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(97)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->label4->Location = System::Drawing::Point(469, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(97)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->label5->Location = System::Drawing::Point(162, 183);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"label5";
			// 
			// downloadBtn
			// 
			this->downloadBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(97)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->downloadBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->downloadBtn->ForeColor = System::Drawing::Color::Black;
			this->downloadBtn->Location = System::Drawing::Point(264, 177);
			this->downloadBtn->Name = L"downloadBtn";
			this->downloadBtn->Size = System::Drawing::Size(92, 28);
			this->downloadBtn->TabIndex = 8;
			this->downloadBtn->Text = L"Pobierz";
			this->downloadBtn->UseVisualStyleBackColor = false;
			this->downloadBtn->Click += gcnew System::EventHandler(this, &MyForm::downloadBtn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->ClientSize = System::Drawing::Size(893, 261);
			this->Controls->Add(this->downloadBtn);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->rightArrow);
			this->Controls->Add(this->leftArrow);
			this->ForeColor = System::Drawing::Color::Black;
			this->Name = L"MyForm";
			this->Text = L"„MojeDŸwiêki, Wykona³: 000000000000";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leftArrow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rightArrow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion

	ref class Album {
	public:
		String^ artist;
		String^ title;
		int tracks;
		int year;
		long long downloads;

		Album(String^ artist, String^ title, int tracks, int year, long long downloads) {
			this->artist = artist;
			this->title = title;
			this->tracks = tracks;
			this->year = year;
			this->downloads = downloads;
		}
	};

	System::Collections::Generic::List<Album^>^ albums;
	int currentIndex = 0;

	void LoadAlbums() {
		albums = gcnew System::Collections::Generic::List<Album^>();

		try {
			System::IO::StreamReader^ plik = gcnew System::IO::StreamReader("Dane.txt");

			while (!plik->EndOfStream) {
				String^ artist = plik->ReadLine();
				if (String::IsNullOrWhiteSpace(artist)) continue; // pomiñ puste linie
				String^ title = plik->ReadLine();
				int tracks = Convert::ToInt32(plik->ReadLine());
				int year = Convert::ToInt32(plik->ReadLine());
				long long downloads = Convert::ToInt64(plik->ReadLine());

				Album^ album = gcnew Album(artist,title, tracks, year, downloads);

				// pomiñ pust¹ liniê po ka¿dym albumie (jeœli jest)
				if (!plik->EndOfStream) plik->ReadLine();

				albums->Add(album);
			}

			plik->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("B³¹d podczas wczytywania pliku: " + ex->Message);
		}
	}

	void showAlbum() {
		label1->Text = albums[currentIndex]->artist;
		label2->Text = albums[currentIndex]->title;
		label3->Text = albums[currentIndex]->tracks.ToString();
		label4->Text = albums[currentIndex]->year.ToString();
		label5->Text = albums[currentIndex]->downloads.ToString();
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadAlbums();
		showAlbum();
	}
	private: System::Void leftArrow_Click(System::Object^ sender, System::EventArgs^ e) {
		currentIndex--;

		if (currentIndex < 0) currentIndex = albums->Count - 1;
		showAlbum();
	}
	private: System::Void rightArrow_Click(System::Object^ sender, System::EventArgs^ e) {
		currentIndex++;

		if (currentIndex == albums->Count) currentIndex = 0;
		showAlbum();
	}
	private: System::Void downloadBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		albums[currentIndex]->downloads++;
		label5->Text = albums[currentIndex]->downloads.ToString();
	}
};
}
