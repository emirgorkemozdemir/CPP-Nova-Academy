#include "MyForm.h"
#include "Login.h"


using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FormsCPPDBÖrnek::MyForm form1;
	Application::Run(% form1);
}