#include <iostream>


class Book {
/* Access modifier => erişim bildirgeci demektir.
bu class'ın dışarıdan erişime açık olup olmadığını public ve private ile belirleyebiliriz.
Public dersek erişime açık , private dersek erişime kapalı olacaktır.*/
public:
    // Attribute
    std::string BookName;
    int BookYear;
    std::string BookAuthor;
    std::string BookCategory;
    double BookPrice;
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

    void GetDiscount(int discount_rate) 
    {
        double result = BookPrice - BookPrice * discount_rate / 100;
        std::cout << result;
    }


    void GetPrice()
    {
        std::cout << BookPrice;
    }


    /*Kitabın fiyatından yüzden 10 indirim
    yapan metodu yazınız */ 
};



class Customer {
public:
    std::string CustomerFirstName;
    std::string CustomerLastName;
    std::string CustomerPhone;
    std::string CustomerMail;
    std::string CustomerStreet;
    std::string CustomerCity;
    int CustomerDebt;

    void CheckDebt()
    {
        if (CustomerDebt>0)
        {
            std::cout << CustomerDebt << " TL miktarında borcunuz bulunmaktadır";
        }
    }
    // Müşteri borcu 0 liradan fazlaysa hata mesajı yazdıran uygulama

};



int main()
{
   
    //// Object;
    //Book book1;
    //book1.BookName = "1984";
    //book1.BookAuthor = "George Orwell";
    //book1.BookCategory = "Felsefe";
    //book1.BookPrice = 50;
    //book1.BookYear = 1954;
    //book1.GetCategory();

    //Book book2;
    //book2.BookName = "Hayvan Çiftliği";
    //book2.BookAuthor = "George Orwell";
    //book2.BookCategory = "Felsefe";
    //book2.BookPrice = 60;
    //book2.BookYear = 1970;
    //book2.GetCategory();

    //bool IsUserShoppingFirstTime = true;
    //int discount_rate;
    //std::cout << "İndirim miktarı giriniz";
    //std::cin >> discount_rate;
    //if (IsUserShoppingFirstTime==true)
    //{
    //    book1.GetDiscount(discount_rate);
    //}
    //else
    //{
    //    book1.GetPrice();
    //}
   
    
    Customer customer1;
    customer1.CustomerFirstName = "Emir";
    customer1.CustomerLastName = "Özdemir";
    customer1.CustomerMail = "emirgorkemozdemir@gmail.com";
    customer1.CustomerDebt = 500;
    customer1.CustomerPhone = "00000000000";
    customer1.CustomerStreet = "2395";
    customer1.CustomerCity = "Mersin";
    customer1.CheckDebt();
    
 
}