#pragma once
#include <iostream>
#include <thread>
#include <chrono>
#using <System.dll>
#include <cliext/vector>
#include <msclr\marshal_cppstd.h>
namespace Events2 {

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
		Button^ myButton;
		Timer^ hoverTimer;
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
	private: System::Windows::Forms::TextBox^ number1;
	private: System::Windows::Forms::TextBox^ number2;
	private: System::Windows::Forms::Button^ dodaj;

	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ razy;
	private: System::Windows::Forms::Button^ dziel;
	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// MyForm
			// 
			this->ClientSize = System::Drawing::Size(348, 306);
			this->Name = L"MyForm";
			//this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		/*private: System::Void dodaj_Click(System::Object^ sender, System::EventArgs^ e) {
			int output = System::Convert::ToInt16(number1->Text) + System::Convert::ToInt16(number2->Text);

			String^ firstNumber = this->number1->Text;
			String^ secondNumber = this->number2->Text;

			result->Text = firstNumber + " + " + secondNumber + " = " + System::Convert::ToString(output);
		}*/
		/*private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
			int output = System::Convert::ToInt16(number1->Text) - System::Convert::ToInt16(number2->Text);

			String^ firstNumber = this->number1->Text;
			String^ secondNumber = this->number2->Text;

			result->Text = firstNumber + " - " + secondNumber + " = " + System::Convert::ToString(output);
		}*/
	private: System::Void razy_Click(System::Object^ sender, System::EventArgs^ e) {
		int output = System::Convert::ToInt16(number1->Text) * System::Convert::ToInt16(number2->Text);

		String^ firstNumber = this->number1->Text;
		String^ secondNumber = this->number2->Text;

		result->Text = firstNumber + " x " + secondNumber + " = " + System::Convert::ToString(output);
	}
	private: System::Void dziel_Click(System::Object^ sender, System::EventArgs^ e) {
		int output = System::Convert::ToInt16(number1->Text) / System::Convert::ToInt16(number2->Text);

		String^ firstNumber = this->number1->Text;
		String^ secondNumber = this->number2->Text;

		result->Text = firstNumber + " / " + secondNumber + " = " + System::Convert::ToString(output);
	}

	private: System::Void result_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->result->Text = "";

	}

		   /*private: System::Void dodaj_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			   int output = System::Convert::ToInt16(number1->Text) + System::Convert::ToInt16(number2->Text);

			   String^ firstNumber = this->number1->Text;
			   String^ secondNumber = this->number2->Text;

			   result->Text = firstNumber + " + " + secondNumber + " = " + System::Convert::ToString(output);
		   }*/
	private: System::Void minus_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		int output = System::Convert::ToInt16(number1->Text) - System::Convert::ToInt16(number2->Text);

		String^ firstNumber = this->number1->Text;
		String^ secondNumber = this->number2->Text;

		result->Text = firstNumber + " - " + secondNumber + " = " + System::Convert::ToString(output);

	}
	private: System::Void number1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		int czyLiczba = 0;
		for (size_t i = 0; i < 10; i++)
		{
			if (e->KeyChar == i + 48)
			{
				czyLiczba++;
			}
		}
		if (czyLiczba == 0) {
			number1->Text = "";
			label2->Text = "Podaj liczbe";
		}
	}
	private: System::Void number2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		int czyLiczba = 0;
		for (size_t i = 0; i < 10; i++)
		{
			if (e->KeyChar == i + 48)
			{
				czyLiczba++;
			}
		}
		if (czyLiczba == 0) {
			number2->Text = "";
			label2->Text = "Podaj liczbe";
		}

	}
	private: System::Void razy_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		if (e->X.ToString() == "30" && e->Y.ToString() == "30")
		{
			int output = System::Convert::ToInt16(number1->Text) * System::Convert::ToInt16(number2->Text);

			String^ firstNumber = this->number1->Text;
			String^ secondNumber = this->number2->Text;

			result->Text = firstNumber + " x " + secondNumber + " = " + System::Convert::ToString(output);
		}
	}
		   void dodaj_MouseEnter(Object^ sender, EventArgs^ e)
		   {
			   this->hoverTimer->Start();
		   }

		   void OnButtonMouseLeave(Object^ sender, EventArgs^ e)
		   {
			   this->hoverTimer->Stop();
			   this->hoverTimer->Tag = nullptr;
		   }

		   void OnHoverTimerTick(Object^ sender, EventArgs^ e)
		   {
			   int output = System::Convert::ToInt16(number1->Text) + System::Convert::ToInt16(number2->Text);

			   String^ firstNumber = this->number1->Text;
			   String^ secondNumber = this->number2->Text;

			   String^ result = firstNumber + " + " + secondNumber + " = " + System::Convert::ToString(output);
			   //this->hoverTimer->Stop();
			   MessageBox::Show(result);
		   }

};
}