#include "Calculator.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace VladKursovaya;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	

	Calculator form;
	Application::Run(% form);
}