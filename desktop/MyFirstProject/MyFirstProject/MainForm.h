#pragma once

namespace MyFirstProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbFirstName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbLastName;
	private: System::Windows::Forms::Label^ lbWelcome;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnClear;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbLastName = (gcnew System::Windows::Forms::TextBox());
			this->lbWelcome = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// tbFirstName
			// 
			resources->ApplyResources(this->tbFirstName, L"tbFirstName");
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->TextChanged += gcnew System::EventHandler(this, &MainForm::tbFirstName_TextChanged);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// tbLastName
			// 
			resources->ApplyResources(this->tbLastName, L"tbLastName");
			this->tbLastName->Name = L"tbLastName";
			// 
			// lbWelcome
			// 
			resources->ApplyResources(this->lbWelcome, L"lbWelcome");
			this->lbWelcome->Name = L"lbWelcome";
			this->lbWelcome->Click += gcnew System::EventHandler(this, &MainForm::label3_Click);
			// 
			// tableLayoutPanel1
			// 
			resources->ApplyResources(this->tableLayoutPanel1, L"tableLayoutPanel1");
			this->tableLayoutPanel1->Controls->Add(this->btnOK, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnClear, 1, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			// 
			// btnOK
			// 
			resources->ApplyResources(this->btnOK, L"btnOK");
			this->btnOK->Name = L"btnOK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &MainForm::btnOK_Click);
			// 
			// btnClear
			// 
			resources->ApplyResources(this->btnClear, L"btnClear");
			this->btnClear->Name = L"btnClear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MainForm::btnClear_Click);
			// 
			// MainForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LawnGreen;
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->lbWelcome);
			this->Controls->Add(this->tbLastName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbFirstName);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tbFirstName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ firstName = this->tbFirstName->Text;
		String^ lastName = this->tbLastName->Text;
		this->lbWelcome->Text = "hello" + firstName + " " + lastName;
	}
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lbWelcome->Text = "";
		this->tbFirstName->Text = "";
		this->tbLastName->Text = "";
	}
};
}
