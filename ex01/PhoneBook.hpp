#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>

class PhoneBook {
  private:
    Contact ListContact[8];
    int oldest;
    std::string truncated(const std::string str);
  public:
    PhoneBook(void);
    ~PhoneBook(void);
    void  ft_add(void);
    void  ft_search(void);
};

#endif