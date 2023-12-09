#include <iostream>


/*
Bir dizeyi kabul eden, bunun geçerli bir e-posta adresi 
olup olmadığını kontrol eden ve değerlendirmeye 
bağlı olarak doğru veya yanlış değerini döndüren 
bir işlev oluşturun.

Dize bir @ karakteri içermelidir.

Dize bir içermelidir. karakter.

@'nin önünde en az bir karakter bulunmalıdır.
Örneğin. "e@edabit.com" geçerlidir, "@edabit.com" geçersizdir.
. ve @ uygun yerlerde olmalıdır.

Örneğin. "hello.email@com" geçersiz, "john.smith@email.com" ise geçerlidir.
Dize bu testleri geçerse geçerli bir e-posta adresi olarak kabul edilir.

*/

bool CheckMail(std::string text) 
{
	int counter = 0;
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i]=='@' && !isblank(text[i-1]) && !isblank(text[i + 1]))
		{
			counter++;
		}

		if (text[i] =='c' && text[i+1]=='o' && text[i+2]=='m' && text[i-1]=='.')
		{
			counter++;
		}
	}

	if (counter!=2)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	std::cout << CheckMail("emirgorkemozdemir@gmail.com");
}
