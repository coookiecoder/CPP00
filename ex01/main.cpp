#include "PhoneBook.hpp"
#include <string>
#include <iostream>

int main(void)
{
  bool run;
  std::string Input;
  PhoneBook UwUBook;
  
  run = true;
  while (run)
  {
    std::getline(std::cin, Input);
    if (Input == "EXIT\0")
      run = false;
    if (Input == "ADD\0")
      UwUBook.ft_add();
    if (Input == "SEARCH\0")
      UwUBook.ft_search();
  }
}