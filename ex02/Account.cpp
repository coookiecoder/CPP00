#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts() {
  return _nbAccounts;
}

int Account::getTotalAmount() {
  return _totalAmount;
}

int Account::getNbDeposits() {
  return _totalNbDeposits;
}

int Account::getNbWithdrawals() {
  return _totalNbWithdrawals;
}

void Account::_displayTimestamp() {
  char			buff[100];
  std::time_t		time = std::time(0);
  std::tm			*timeinfo = std::localtime(&time);

  std::strftime(buff, 100, "%Y%m%d_%H%M%S", timeinfo);
  std::cout << "[" << buff << "] ";
}

Account::Account(int initial_deposit) {
  _totalAmount += initial_deposit;
  _accountIndex = _nbAccounts++;
  _amount = initial_deposit;
  _nbDeposits = 0;
  _nbWithdrawals = 0;
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account() {
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::displayAccountsInfos() {
  _displayTimestamp();
  std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::displayStatus() const {
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
  _totalAmount += deposit;
  _amount += deposit;
  _totalNbDeposits += 1;
  _nbDeposits += 1;
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
  if (withdrawal > _amount) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
    return (false);
  }
  _totalAmount -= withdrawal;
  _amount -= withdrawal;
  _totalNbWithdrawals += 1;
  _nbWithdrawals += 1;
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
  return (true);  
}