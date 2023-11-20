#include <iostream>

int main()
{
   // Kullanıcının girdiği sayının
   // Negatif mi pozitif mi sıfır mı olduğunu bulan uygulama yapınız

	int sayı;
	std::cout << "Bir sayı giriniz :";
	std::cin >> sayı;

	if (sayı > 0)
	{
		std::cout << "Girdiğiniz sayı pozitif";
	}
	else if (sayı == 0)
	{
		std::cout << "Girdiğiniz sayı sıfır";
	}
	else
	{
		std::cout << "Girdiğiniz sayı negatif";
	}
}

