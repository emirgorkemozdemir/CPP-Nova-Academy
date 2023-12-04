#include <iostream>
#include <stdexcept>

int main()
{
	// Try içerisine çalışmasını istediğimiz kodu yazıyoruz
	try
	{
		int age =15;
		if (age>=18)
		{
			std::cout<<"Ehliyet alabilirsiniz";
		}
		else
		{
			throw(age); // throw arasına yazdığımız değeri catch kısmına gönderir
		}
	}
	catch (int age) // catch ile throwdan gelen değeri yakalıyoruz
	{
		std::cout << "Yaş 18'den küçük";
	}
   
}
