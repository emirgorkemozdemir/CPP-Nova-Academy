#include <iostream>

//"Taş, kağıt, makas" oyununu simüle eden bir fonksiyon oluşturun.Fonksiyon her iki oyuncunun(taş, kağıt veya makas) girdilerini alır; ilk parametre birinci oyuncudan, ikinci parametre ikinci oyuncudan gelir.İşlev sonucu şu şekilde döndürür :
//
//"Oyuncu 1 kazanır"
//"Oyuncu 2 kazanır"
//"BAĞ" (her iki giriş de aynıysa)
//Bilinmiyorsa taş, kağıt, makas kuralları :
//
//Her iki oyuncunun da aynı anda "taş", "kağıt" veya "makas" demesi gerekir.
//Taş makası yener, kağıt taşı yener, makas kağıdı yener.

void RPS(std::string P1, std::string P2)
{
	if (P1[0]==P2[0])
	{
		std::cout << "TIE" << std::endl;
	}
	else
	{
		// Taş oynama ihtimalim
		if (P1[0] == 'R')
		{
			if (P2[0] == 'S')
			{
				std::cout << "P1 Won" << std::endl;
			}
			else if (P2[0] == 'P')
			{
				std::cout << "P2 Won" << std::endl;
			}
		}

		// Makas Oynama İhtimalim
		if (P1[0] == 'S')
		{
			if (P2[0] == 'R')
			{
				std::cout << "P2 Won" << std::endl;
			}

			else if (P2[0] == 'P')
			{
				std::cout << "P1 Won" << std::endl;
			}
		}


		// Kağıt Oynama İhtimalim
		if (P1[0] == 'P')
		{
			if (P2[0] == 'R')
			{
				std::cout << "P1 Won" << std::endl;
			}
			else if (P2[0] == 'S')
			{
				std::cout << "P2 Won" << std::endl;
			}
		}
	}
	
}

int main()
{
	// Büyük küçük duyarlılığını kaldırın :))))))
	RPS("Scissors", "rock");
}
