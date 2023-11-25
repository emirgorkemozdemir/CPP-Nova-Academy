#include <iostream>


//Parametrelerin boş gelme durumunda onlara otomatik bir değer atanabilir. Bu değer default yani varsayılan değer olarak adlandırılır.
void Print(std::string Name = "Anonym")
{
    std::cout << "Hello " << Name;
}

int main()
{
    /*std::string NameFromUser;
    std::cout << "İsminizi giriniz :";
    std::cin >> NameFromUser;*/

    Print();
}
