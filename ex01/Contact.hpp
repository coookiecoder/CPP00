#include <string>

class Contact {
  private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
  public:
    Contact(void);
    ~Contact(void);
    Contact(std::string fName, std::string lName, std::string nName, std::string pNumber, std::string dSecret);
    
    std::string getFirstName();
    void setFirstName(const std::string FirstName);

    std::string getLastName();
    void setLastName(const std::string LastName);

    std::string getNickname();
    void setNickname(const std::string Nickname);

    std::string getPhoneNumber();
    void setPhoneNumber(const std::string PhoneNumber);

    std::string getDarkestSecret();
    void setDarkestSecret(const std::string DarkestSecret);
};