#include <iostream>

/*
Polymorpishm özelliği çok çeşitlilik demektir.
Bu örnekte kullandığımız language class'ı ana class'tır.
Language içerisinde sayhello metodu boş durumda bulunur.
Ancak sayhello metodunu, language class'ından türeyen herhangi
bir class içerisinde değişikliğe uğratabiliriz. Bunun örneğini
açtığımız Turkish class'ında ele alalım. Turkish, language class'ından
türemiştir. Ancak türediği class'ın bir özelliği olan
say hello özelliği turkish içinde değişikliğe uğradı. Bu yüzden
turkish'ten oluşturulan bir nesnenin sayhello özelliği çağırıldığında
boş dönmek yerine Merhaba yazdıracaktır.
*/
class Language {
public:
    void SayHello()
    {
        
    }
};

class Turkish : public Language
{
public:
    void SayHello()
    {
        std::cout << "Merhaba" << std::endl;
    }
};

class English : public Language
{
public:
    void SayHello()
    {
        std::cout << "Hello" << std::endl;
    }
};

class Spanish : public Language
{
public:
    void SayHello()
    {
        std::cout << "Hola" << std::endl;
    }
};

class German : public Language
{
public:
    // override
    void SayHello()
    {
        std::cout << "Halo" << std::endl;
    }
};

int main()
{
    Turkish tr;
    tr.SayHello();

    German deu;
    deu.SayHello();

}
