#include <iostream>

int main()
{
    int my_numbers[] = { 5 ,7,12,18,180,295 };
	// Her adımda, değerleri tek tek value'ye atar. Bu sayede, değerlerin hepsini kullanabilirim
	int total = 0;
	for (int value : my_numbers)
	{
		total += value;
	}

	std::cout << total;

}
