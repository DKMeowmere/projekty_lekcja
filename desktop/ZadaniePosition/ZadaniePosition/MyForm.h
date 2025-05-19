#pragma once

namespace ZadaniePosition {

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
	private: System::Windows::Forms::Button^ button1;





	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(30, 120);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button1->Size = System::Drawing::Size(80, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"TAK";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Czy chcesz podwyzke\?";
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		if (e->X - button1->Location.X > -20 && e->X - button1->Location.X < 90 && e->Y - button1->Location.Y > -20 && e->Y - button1->Location.Y < 40) {
			if (e->X - button1->Location.X > -20 && e->X - button1->Location.X < 0) {
				button1->Location = System::Drawing::Point(button1->Location.X + 2, button1->Location.Y);

				if (button1->Location.X > 220) {
					button1->Location = System::Drawing::Point(30, button1->Location.Y);
				}
			}
			if (e->X - button1->Location.X > 80 && e->X - button1->Location.X < 90) {
				button1->Location = System::Drawing::Point(button1->Location.X - 2, button1->Location.Y);

				if (button1->Location.X < 0) {
					button1->Location = System::Drawing::Point(190, button1->Location.Y);
				}
			}
			if (e->Y - button1->Location.Y > -20 && e->Y - button1->Location.Y < 0) {
				button1->Location = System::Drawing::Point(button1->Location.X, button1->Location.Y + 2);

				if (button1->Location.Y > 260) {
					button1->Location = System::Drawing::Point(button1->Location.X, 30);
				}
			}
			if (e->Y - button1->Location.Y > 30 && e->Y - button1->Location.Y < 40) {
				button1->Location = System::Drawing::Point(button1->Location.X, button1->Location.Y - 2);

				if (button1->Location.Y < 0) {
					button1->Location = System::Drawing::Point(button1->Location.X, 200);
				}
			}
		}
	}
};
}
