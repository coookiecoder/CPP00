#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(void)
{
  this->oldest = 0;
  std::cout << "welcome to UwU phone book" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
  std::cout << "ultra sad UwU" << std::endl;
}

void PhoneBook::ft_add(void) {
  std::string FirstName;
  std::string LastName;
  std::string NickName;
  std::string PhoneNumber;
  std::string DarkSecret;
  
  std::cout << "First Name UwU : ";
  std::getline(std::cin, FirstName);
  std::cout << "Last Name UwU : ";
  std::getline(std::cin, LastName);
  std::cout << "Nick Name UwU : ";
  std::getline(std::cin, NickName);
  std::cout << "Phone Number UwU : ";
  std::getline(std::cin, PhoneNumber);
  std::cout << "Dark secret UwU (i promise i won't leak it) : ";
  std::getline(std::cin, DarkSecret);
  
  Contact buffer(FirstName, LastName, NickName, PhoneNumber, DarkSecret);
  ListContact[this->oldest++] = buffer;
  if (this->oldest == 8)
    this->oldest = 0;
}

std::string PhoneBook::truncated(const std::string str) {
  if (str.size() > 10)
    return str.substr(0, 9) + ".";
  return (str);
}

void PhoneBook::ft_search(void)
{
  std::cout << "#----------#----------#----------#----------#" << std::endl;
  std::cout << "|" << std::right << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << "|" << std::endl;
  std::cout << "#----------#----------#----------#----------#" << std::endl;

  for (int i = 0; i < 8; i++) {
    std::cout << "|" << std::right << std::setw(10) << i << "|" << std::setw(10) << truncated(ListContact[i].getFirstName()) << "|" << std::setw(10) << truncated(ListContact[i].getLastName()) << "|" << std::setw(10) << truncated(ListContact[i].getNickname()) << "|" << std::endl;
    std::cout << "#----------#----------#----------#----------#" << std::endl;
  }
  int index = 0;
  
  std::cout << "who do you want info on ? (0 -> 7, default : 0) UwU : ";
  std::cin >> index;
  if (index > 7 || index < 0)
    std::cout << "nope UwU" << std::endl;
  else
  {
    std::cout << "First Name : " << this->ListContact[index].getFirstName() << std::endl;
    std::cout << "Last Name : " << this->ListContact[index].getLastName() << std::endl;
    std::cout << "Nick Name : " << this->ListContact[index].getNickname() << std::endl;
    std::cout << "Phone Number : " << this->ListContact[index].getPhoneNumber() << std::endl;
  }
  std::cin.clear();
}