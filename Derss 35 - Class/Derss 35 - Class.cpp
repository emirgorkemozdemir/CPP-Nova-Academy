#include <iostream>

class Book {
/*Access modifier => erişim bildirgeci demektir.
bu class'ın dışarıdan erişime açık olup olmadığını public ve private ile belirleyebiliriz.
Public dersek erişime açık , private dersek erişime kapalı olacaktır.*/
public:
    std::string BookName;
    int BookYear;
    std::string BookAuthor;
    std::string BookCategory;
    int BookPrice;
    int BookCount; 
    
    /* Kategoriyi her kitap için
     döndüren bir fonksiyon yazdık.
     Bu sayede sürekli olarak kategoriyi
     alacak kodu yazmaktan kurtulduk;
    */
    void GetCategory()
    {
        std::cout<< BookCategory<<std::endl;
    }

    void GetDiscount() 
    {
        double result = BookPrice - BookPrice * 10 / 100;
        std::cout << result;
    }


    void GetPrice()
    {
        std::cout << BookPrice;
    }


    /*Kitabın fiyatından yüzden 10 indirim
    yapan metodu yazınız */ 
};

class Person
{
public:
    std::string FirstName;
    std::string LastName;
};

class Employee: public Person
{

};

class Customer : public Person {
public:
    int Debt;
};

int main()
{
    // Object
    Book book1;
    book1.BookName = "1984";
    book1.BookAuthor = "George Orwell";
    book1.BookCategory = "Felsefe";
    book1.BookPrice = 50;
    book1.BookYear = 1954;
    book1.GetCategory();

    bool IsUserShoppingFirstTime = true;
    if (IsUserShoppingFirstTime==true)
    {
        book1.GetDiscount();
    }
    else
    {
        book1.GetPrice();
    }
   
    Employee my_emp;
    my_emp.FirstName = "Emir";
    my_emp.LastName = "Özdemir";

   
    Customer my_customer;
    my_customer.FirstName = "Mehmet";
    my_customer.LastName = "Yılmaz";
    my_customer.Debt = 110;
}