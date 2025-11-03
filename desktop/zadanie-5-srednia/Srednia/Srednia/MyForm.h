#pragma once

namespace Srednia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::Label^ label5;
		System::Windows::Forms::Label^ label6;
		System::Windows::Forms::Label^ label7;
		System::Windows::Forms::Label^ label8;
		System::Windows::Forms::Label^ label9;
		System::Windows::Forms::Label^ label10;

		System::Windows::Forms::NumericUpDown^ numericUpDown1;
		System::Windows::Forms::NumericUpDown^ numericUpDown2;
		System::Windows::Forms::NumericUpDown^ numericUpDown3;
		System::Windows::Forms::NumericUpDown^ numericUpDown4;
		System::Windows::Forms::NumericUpDown^ numericUpDown5;
		System::Windows::Forms::NumericUpDown^ numericUpDown6;
		System::Windows::Forms::NumericUpDown^ numericUpDown7;
		System::Windows::Forms::NumericUpDown^ numericUpDown8;

		System::Windows::Forms::Label^ result;
		System::Windows::Forms::Label^ minLabel;
		System::Windows::Forms::Label^ maxLabel;
		System::Windows::Forms::Button^ submitBtn;

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());

			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());

			this->result = (gcnew System::Windows::Forms::Label());
			this->minLabel = (gcnew System::Windows::Forms::Label());
			this->maxLabel = (gcnew System::Windows::Forms::Label());
			this->submitBtn = (gcnew System::Windows::Forms::Button());

			this->SuspendLayout();

			// label1
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(122, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 13);
			this->label1->Text = L"Wpisz œredni¹ dla ka¿dego ucznia";

			// label2
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(175, 39);
			this->label2->Text = L"Uczeñ 1";

			// etykiety ocen
			array<Label^>^ labels = { label3, label4, label5, label6, label7, label8, label9, label10 };
			array<String^>^ texts = { L"Ocena 1", L"Ocena 5", L"Ocena 2", L"Ocena 6", L"Ocena 3", L"Ocena 7", L"Ocena 4", L"Ocena 8" };
			array<Point>^ positions = {
				Point(52,65), Point(213,68), Point(52,91), Point(213,91),
				Point(52,117), Point(213,118), Point(52,142), Point(213,142)
			};
			for (int i = 0; i < 8; i++) {
				labels[i]->AutoSize = true;
				labels[i]->Location = positions[i];
				labels[i]->Text = texts[i];
			}

			// NumericUpDown konfiguracja wspólna
			array<NumericUpDown^>^ nums = {
				numericUpDown1, numericUpDown2, numericUpDown3, numericUpDown4,
				numericUpDown5, numericUpDown6, numericUpDown7, numericUpDown8
			};
			array<Point>^ numPos = {
				Point(106,61), Point(106,88), Point(106,115), Point(106,142),
				Point(267,65), Point(267,91), Point(267,118), Point(267,141)
			};
			for (int i = 0; i < 8; i++) {
				nums[i]->Location = numPos[i];
				nums[i]->Size = System::Drawing::Size(100, 20);
				nums[i]->Minimum = System::Decimal(1);
				nums[i]->Maximum = System::Decimal(6);
				nums[i]->DecimalPlaces = 1;
				nums[i]->Increment = System::Decimal(0.5);
			}

			// result
			this->result->AutoSize = true;
			this->result->Location = System::Drawing::Point(52, 206);
			this->result->Text = L"Wyliczone œrednie:";

			// minLabel
			this->minLabel->AutoSize = true;
			this->minLabel->Location = System::Drawing::Point(216, 206);
			this->minLabel->Text = L"Minimalna œrednia:";

			// maxLabel
			this->maxLabel->AutoSize = true;
			this->maxLabel->Location = System::Drawing::Point(216, 231);
			this->maxLabel->Text = L"Maksymalna œrednia:";

			// submitBtn
			this->submitBtn->Location = System::Drawing::Point(219, 180);
			this->submitBtn->Size = System::Drawing::Size(75, 23);
			this->submitBtn->Text = L"ZatwierdŸ";
			this->submitBtn->Click += gcnew System::EventHandler(this, &MyForm::submitBtn_Click);

			// MyForm
			this->ClientSize = System::Drawing::Size(466, 468);
			this->Controls->Add(this->submitBtn);
			this->Controls->Add(this->maxLabel);
			this->Controls->Add(this->minLabel);
			this->Controls->Add(this->result);
			for (int i = 0; i < 8; i++) this->Controls->Add(nums[i]);
			for (int i = 0; i < 8; i++) this->Controls->Add(labels[i]);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Program licz¹cy œredni¹";

			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	private:
		int studentsCount = 0;
		double max = 0;
		double min = 6;

	private: System::Void submitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		studentsCount++;
		if (studentsCount == 11) { 
			MessageBox::Show("Osiagnieto maksymalna liczbe uczniow");
			return; 
		}
		label2->Text = "Uczeñ " + studentsCount.ToString();

		array<NumericUpDown^>^ nums = {
			numericUpDown1, numericUpDown2, numericUpDown3, numericUpDown4,
			numericUpDown5, numericUpDown6, numericUpDown7, numericUpDown8
		};

		double sum = 0;
		for each (NumericUpDown ^ n in nums) {
			sum += (double)n->Value;
		}
		double avg = sum / nums->Length;

		if (avg > max) max = avg;
		if (avg < min) min = avg;

		//f2 - float dwa miejsca po przecinku
		this->result->Text += "\n" + "Œrednia ucznia "+studentsCount+": " + avg.ToString("F2");
		this->minLabel->Text = "Minimalna œrednia: " + min.ToString("F2");
		this->maxLabel->Text = "Maksymalna œrednia: " + max.ToString("F2");
	}
	};
}
