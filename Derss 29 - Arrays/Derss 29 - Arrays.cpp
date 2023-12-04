#include <iostream>
#include <cctype>

std::string MakeStringUpper(std::string word)
{
	std::string temp_word = "";
	for (int i = 0; i < word.length(); ++i)
	{
	 temp_word += toupper(word[i]);
	}

	return temp_word;
}

int main()
{
	
   // Array yani dizi, c++ programlama dilinde kullanılan
  //  Ve birden fazla değeri tutmak için oluşturulan yapıdır
	//int number_array[] = {1,2,3};
	/*int number_array[3];*/

    /*
   Index kavramı = > sayma sayıları c++
   programlama dilinde 0'dan başlar. Yani
   biz bir array'in ilk elemanını almak istediğimizde
   0. elemanı seçmemiz gerekir.
   */

	//number_array[0] = 1;
	//number_array[1] = 2;
	//number_array[2] = 3;


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

	/*int numbers[3];
	for (int i=0;i<=2;++i)
	{
		int num;
		std::cout << "Sayı giriniz:";
		std::cin >> num;
		numbers[i] = num;
	}*/


	// Int türünde gelen dizinin en büyük elemanını ekrana yazdırın
	/*int numbers[] = {25,10,32,88,78,64,125,5425,11};
	int max = numbers[0];
	for (int i = 1; i < sizeof(numbers); ++i) 
	{
		if (numbers[i]>max)
		{
			max = numbers[i];
		}
	}

	std::cout << max;*/

	// döngü ile dizi içerisine 5 tane string değer girin
	// sonrasında bir döngü daha açıp içerisinde 
	// kullanıcın girdiği yazıdan kaç tane var onu buldurun

	std::string CNames[5]; // 0 1 2 3 4
	for (int i = 0; i < 5; i++)
	{
		std::cout << "İsim giriniz : " << std::endl;
		std::cin >> CNames[i];
	}

	int counter = 0;
	std::string search_parameter;
	std::cout << "Aradığınız ürünü giriniz : " << std::endl;
	std::cin >> search_parameter;

	for (int k = 0;k<5;k++) // 0 1 2 3 4
	{
		// Find ile birinci metnin içerisinde ikinciyi arayabilirsiniz. Bulamazsa != işareti ile yazılan kısım çalışacak. Bu kısım da ifin içerisinin çalışmasını önleyecek
		if (MakeStringUpper(CNames[k]).find(MakeStringUpper(search_parameter)) != std::string::npos)
		{
			counter++;
		}
	}

	std::cout << "Aradığınız ürünün adeti : " << counter;

	// Elimizdeki kelimenin tüm harflerini büyüten algoritmayı oluşturalım
	
	
}

