#include <iostream>
#include <string>

/*
Kullanıcı tarafından girilen string türünde veriyi, maskeleyen bir 
algoritma oluşturun.
Örneğin girilen veri => Emir Özdemir ancak siz ekrana =>
E### Ö######


*/
int main()
{
    std::string name;
    std::cout << "İsim soyisim giriniz:";
    std::getline(std::cin, name);
    "E### Ö#####";

    std::string copy_name = "";

    for (int i = 0; i < name.length()-1; i++)
    {
        if (i==0)
        {
            copy_name += name[i];
        }
        else if (isblank(name[i]))
        {
            copy_name += " ";
            copy_name += name[i + 1];
        }
        else
        {
            copy_name += "#";
        }
    }

    std::cout << copy_name;
}

