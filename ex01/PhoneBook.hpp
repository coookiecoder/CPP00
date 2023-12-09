#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include "Contact.hpp"

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
    void  ft_exit(void);
};

#endif