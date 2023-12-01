#include <iostream>
/* Fonksiyonlarla beraber dizi kullanılabilir.
   Fonksiyon içine gönderilen dizinin boyutunun belirtilmesi gerekmez*/
void PrintAll(std::string stringArray[])
{
	for (int i=0;i<sizeof(stringArray);++i)
	{
		std::cout << stringArray[i] <<std::endl;
	}
}



int main()
{
	std::string BookNames[] = { "1984","Zindan Adası","Sırlar Odası"};
	PrintAll(BookNames);
	std::string Cars[] = { "Mustang","BMW" };
	PrintAll(Cars);
}
