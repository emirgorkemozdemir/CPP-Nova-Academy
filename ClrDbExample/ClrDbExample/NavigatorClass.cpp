#include "NavigatorClass.h"
#include "Register.h"
#include "Login.h"
#include "Products.h"

void NavigatorClass::ToRegister()
{
    ClrDbExample::Register^ newtabreg = gcnew ClrDbExample::Register();
    newtabreg->Show();
}

void NavigatorClass::ToLogin()
{
    ClrDbExample::Login^ newtablog = gcnew ClrDbExample::Login();
    newtablog->Show();
}

void NavigatorClass::ToProducts()
{
    ClrDbExample::Products^ newtabproducts = gcnew ClrDbExample::Products();
    newtabproducts->Show();
}
