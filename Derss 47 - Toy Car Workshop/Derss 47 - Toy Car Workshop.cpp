#include <iostream>


//Bir oyuncak araba atölyesinde çalışıyorsunuz 
//ve göreviniz bir dizi parçadan oyuncak arabalar yapmak.
//Her oyuncak arabanın içine yerleştirilecek 
//4 tekerleğe, 1 araba gövdesine ve 2 insan figürüne 
//ihtiyacı vardır.Mevcut toplam tekerlek, araba gövdesi 
//ve figür sayısı göz önüne alındığında, 
//kaç tane eksiksiz oyuncak araba yapabilirsiniz ?
int Cars(int Wheels,int Body,int Figure)
{
	int car_counter = 0;
	while (Body>0 && Wheels>=4 && Figure>=2)
	{
		car_counter++;
		Body -= 1;
		Wheels -= 4;
		Figure -= 2;
	}
	return car_counter;
}


int main()
{
	int car = Cars(80, 15, 100);
	std::cout << car;
}
