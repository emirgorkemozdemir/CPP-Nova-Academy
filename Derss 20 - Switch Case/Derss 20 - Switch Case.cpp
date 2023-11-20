#include <iostream>

int main()
{
	// Switch case bir anahtar değere göre
	// durumları değerlendirmek için kullanılır
    int num;
    std::cout << "Sayiyi giriniz :";
    std::cin >> num;

	switch (num)
	{
	case 1:
		std::cout << "Pazartesi";
		break;
	case 2:
		std::cout << "Salı";
		break;
	case 3:
		std::cout << "Çarşamba";
		break;
	default:
		std::cout << "Gecersiz sayi girdiniz";
		break;
	}
}
