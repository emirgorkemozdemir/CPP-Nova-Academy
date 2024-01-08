#include "Products.h"

using namespace System;
using namespace System::Windows::Forms;

void productsmain(array<String^>^ args)
{
	Application::EnableVisualStyles(); // G?rsel ?geleri aktifle?tiri

	Application::SetCompatibleTextRenderingDefault(false);

	ClrDbExample::Products product_form;
	Application::Run(% product_form);
}