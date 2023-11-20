#include <iostream>

int main()
{

	int time;
	std::cout << "Saati giriniz :";
	std::cin >> time;
	/* 
	if (time < 18)
	{
		std::cout << "Good day";
	}
	else
	{
		std::cout << "Good evening";
	}
	*/

	std::string my_message = (time < 18) ? "Good day" : "Good evening";
	std::cout << my_message;

}

