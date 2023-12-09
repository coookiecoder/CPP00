#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
  this->firstName = "empty";
  this->lastName = "empty";
  this->nickname = "empty";
  this->phoneNumber = "empty";
  this->darkestSecret = "empty";
  std::cout << "I'm alive but empty (UwU)" << std::endl;
}

Contact::~Contact(void)
{
  std::cout << "Contact has been deleted UwU" << std::endl;
}

Contact::Contact(std::string fName, std::string lName, std::string nName, std::string pNumber, std::string dSecret)
{
  this->firstName = fName;
  this->lastName = lName;
  this->nickname = nName;
  this->phoneNumber = pNumber;
  this->darkestSecret = dSecret;
  std::cout << "Contact has been set UwU" << std::endl;
}


std::string Contact::getFirstName() {
    return this->firstName;
}

void Contact::setFirstName(std::string FirstName) {
    this->firstName = FirstName;
}

std::string Contact::getLastName() {
    return this->lastName;
}

void Contact::setLastName(std::string LastName) {
    this->lastName = LastName;
}

std::string Contact::getNickname() {
    return this->nickname;
}

void Contact::setNickname(std::string NickName) {
    this->nickname = NickName;
}

std::string Contact::getPhoneNumber() {
    return this->phoneNumber;
}

void Contact::setPhoneNumber(std::string PhoneNumber) {
    this->phoneNumber = PhoneNumber;
}

std::string Contact::getDarkestSecret() {
    return this->darkestSecret;
}

void Contact::setDarkestSecret(std::string DarkSecret) {
    this->darkestSecret = DarkSecret;
}