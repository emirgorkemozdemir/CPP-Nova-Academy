#include <iostream>

int main()
{
   // Array yani dizi, c++ programlama dilinde kullanılan
  //  Ve birden fazla değeri tutmak için oluşturulan yapıdır
	int number_array[3] = {1,2,3};

    /*
   Index kavramı = > sayma sayıları c++
   programlama dilinde 0'dan başlar. Yani
   biz bir array'in ilk elemanını almak istediğimizde
   0. elemanı seçmemiz gerekir.
   */

	/*number_array[0] = 1;
	number_array[1] = 2;
	number_array[2] = 3;*/

	/*std::cout << number_array[0];*/

	std::string names[3] = {"Emir","Ahmet","Samet"};

	// yukarıda verilen dizinin aynısını oluşturun.
	// 2. elemanı yazdırın. sonrasında ikinci elemanı
	// değiştirip tekrar yazdırın.

	//std::cout << names[1];
	//names[1] = "Mehmet";

	//std::cout << names[1];

	// for döngüsü ile dizinin tüm elemanlarını yazdırın

	/*for (int i = 0; i < 3; ++i)
	{
		std::cout << names[i] << "\n";
	}*/

	// önce 3 tane boşluğu bir int dizi oluşturun
	// for döngüsü ile 3 sayı alıp bir diziye atayın

	int numbers[3];
	for (int i=0;i<=2;++i)
	{
		int num;
		std::cout << "Sayı giriniz:";
		std::cin >> num;
		numbers[i] = num;
	}

}

