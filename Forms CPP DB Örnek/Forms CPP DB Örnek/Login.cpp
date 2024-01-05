#include "Login.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
void loginmain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FormsCPPDBÖrnek::Login loginform;
	Application::Run(% loginform);
}