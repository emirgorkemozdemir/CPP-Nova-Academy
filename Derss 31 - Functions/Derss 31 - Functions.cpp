#include <iostream>

//Fonksiyon (function) sürekli olarak kullanacağımız
//kodları bir kere yazıp, tek yerden çağırmak için
//kullanılır.

// Void demek fonksiyonun sonucunda bir veri dönmüyor demektir
// Dönüş türü void olmayabilir. Önceki derslerde gördüğümüz veri türlerinin tamamını burada kullanabilirsiniz
void Func1() 
 {
    std::cout << "Hello World";
}

// Parametreler geçici isimlerdir. Gelen değerler bunlara atanır işleme girer.
int Sum(int num1, int num2)
{
	return num1 + num2;
}

// Method Overloading => fonksiyonun farklı verisyonunun oluşturulması olayıdır
double Sum(double num1,double num2)
{
	return num1 + num2;
}

float Sum(float num1, float num2)
{
	return num1 + num2;
}


int main()
{
	int sayi1, sayi2;
	std::cout << "Bir sayı giriniz" <<"\n";
	std::cin >> sayi1;

	std::cout << "Bir sayı giriniz" <<"\n";
	std::cin >> sayi2;

	int result = Sum(sayi1, sayi2);
	std::cout << result;
}



