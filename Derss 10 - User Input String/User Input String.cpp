#include <iostream>
#include <string>

int main()
{
	std::string nameSurname;
	std::cout << "Tam isminizi giriniz \n";
	// getline ile uzun yazıları kullanıcıdan input alabiliyoruz
	std::getline(std::cin, nameSurname);
	std::cout << nameSurname;
}
