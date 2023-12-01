#include <iostream>

/*
Inheritance yani kalıtım (miras) ile bir class'taki özelliklerli
diğerlerine dağıtabilirsiniz. Ancak aralarında bir anlam/mantık
ilişkisi bulunmalıdır. Aşağıdaki örneğimizde olduğu gibi
çalışan (employee) ve müşteri (customer) ögelerinin ortak özellikleri
muhtemelen isim, soyisim ve telefon numarası olacaktır. Bu sebepten
bu değerleri ortak bir class olan Person içerisinde tuttuk.
Employee ve Customer class'larını bu Person class'ı üzerinden
türettik. Bu sayede person içerisinde bulunan ortak özellikleri
her iki class'a da dağıttık.
*/
class Person {
public:
    std::string FirstName;
    std::string LastName;
    std::string Phone;
};

class Employee : public Person {
public:

};

class Customer :public Person {
public:
    int Debt;
};


int main()
{
    Customer cust1;
    
    Employee emp1;
  
}
