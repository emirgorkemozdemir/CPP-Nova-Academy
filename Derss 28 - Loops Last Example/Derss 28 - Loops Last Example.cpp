#define UNICODE
#include <iostream>
#include <locale.h>
#include <Windows.h>
#include <clocale>

int main()
{
	setlocale(LC_ALL, "Turkish");
    // Kullanıcıdan 10 veri alan ve ortalamasını 
    // bulan uygulamayı yapınız

	std::cout << "TÜRKÇE";
	int total = 0;
	int num;
	for (int i=1;i<=10;++i)
	{
		std::cout << "Bir sayı giriniz : " << "\n";
		std::cin >> num;
		total += num;
	}
	int result = total / 10;
	std::cout << result;
}
