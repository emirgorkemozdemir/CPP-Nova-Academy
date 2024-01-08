#include "Register.h"


using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles(); // G?rsel ?geleri aktifle?tiri

	Application::SetCompatibleTextRenderingDefault(false);

	ClrDbExample::Register register_form;
	Application::Run(% register_form);
}