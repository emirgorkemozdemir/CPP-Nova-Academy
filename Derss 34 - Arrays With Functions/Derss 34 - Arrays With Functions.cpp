#include <iostream>
/* Fonksiyonlarla beraber dizi kullanılabilir.
   Fonksiyon içine gönderilen dizinin boyutunun belirtilmesi gerekmez*/
void PrintAll(std::string BookNames[])
{
	std::cout << BookNames[0];
}

int main()
{
	std::string BookNames[] = { "1984","Zindan Adası","Sırlar Odası"};
	PrintAll(BookNames);
}
