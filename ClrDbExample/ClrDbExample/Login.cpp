#include "Login.h"


using namespace System;
using namespace System::Windows::Forms;

void loginmain(array<String^>^ args)
{
	Application::EnableVisualStyles(); // G?rsel ?geleri aktifle?tiri

	Application::SetCompatibleTextRenderingDefault(false);

	ClrDbExample::Login login_form;
	Application::Run(% login_form);
}