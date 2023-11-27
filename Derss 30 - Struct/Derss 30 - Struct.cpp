#include <iostream>

int main()
{
	/*Struct Yapısı farklı türlerde birden fazla değeri
		bir arada tutmak için aşağıdaki gibi kullanılabilir*/
	
	//struct
	//{
	//	std::string BookName;
	//	int BookYear;
	//	int BookPrice;
	//} MyBookStruct;
	

	///*Struct'ın ögelerine erişmek için . kullanılması yeterlidir*/
	//MyBookStruct.BookName = "Felsefe Tasi";
	//MyBookStruct.BookPrice = 10;
	//MyBookStruct.BookYear = 1999;

 //   std::cout << MyBookStruct.BookName;


	/*Struct yapısı önceki kullanımının dışında
		tür olarak da kullanılabilir. Book türünü
		aşağıdaki gibi oluşturup istediğimiz kadar 
		book nesnesi oluşturabiliriz.*/
	
	struct Book
	{
		std::string BookName;
		int BookYear;
		int BookPrice;
	};

	
	Book book1;
	book1.BookName = "Felsefe tasi";
	book1.BookPrice = 10;
	book1.BookYear = 1999;
	

	Book book2;
	book2.BookName = "1984";
	book2.BookPrice = 10;
	book2.BookYear = 1954;

}
