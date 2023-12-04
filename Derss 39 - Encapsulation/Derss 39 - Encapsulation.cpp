#include <iostream>

class User {
private:
    std::string UserPassword="emir123";
public:
    std::string UserName;

    std::string GetPassword()
    {
        return UserPassword;
    }

    void SetPassword(std::string newPassword)
    {
        UserPassword = newPassword;
    }
    
};
int main()
{
    User user1;
    std::string pass = user1.GetPassword();
    std::cout << pass<<std::endl;

    user1.SetPassword("emir1234");
    std::string pass2 = user1.GetPassword();
    std::cout << pass2;
}
