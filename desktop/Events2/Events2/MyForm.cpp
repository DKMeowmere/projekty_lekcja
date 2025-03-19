#include "MyForm.h"
//String^ namei = "ocena" + System::Convert::ToString(i) + "NUD";//dla i==4
//Control^ temp = Controls->Find(nazwaKontrolki, true)[0];

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Events2::MyForm form;
	Application::Run(% form);
}