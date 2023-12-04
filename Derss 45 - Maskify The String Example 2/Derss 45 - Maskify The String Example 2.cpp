#include <iostream>

std::string MaskifyString(std::string tempString)
{
    std::string copyString="";
    for (int i = 0; i < tempString.length(); i++)
    {
        if (i==0)
        {
            copyString += tempString[0];
        }
        else
        {
            copyString += "*";
        }
    }

    return copyString;
}

int main()
{
    std::string name;
    std::cout << "İsim giriniz:";
    std::cin>>name;

    std::string surname;
    std::cout << "Soyisim giriniz:";
    std::cin >> surname;

    std::string maskifiedName = MaskifyString(name);
    std::string maskifiedSurname = MaskifyString(surname);
    std::cout << maskifiedName+" "+ maskifiedSurname;
}
