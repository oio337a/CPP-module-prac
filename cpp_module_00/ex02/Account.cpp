#include <iostream>
#include <time.h>
#include "Account.hpp"

static int _nbAccounts;
static int _totalAmount;
static int _totalNbDeposits;
static int _totalNbWithdrawals;

Account::Account(int initial_deposit)
{
  _accountIndex = getNbAccounts();
  _amount = initial_deposit;
  _nbDeposits = 0;
  _nbWithdrawals = 0;
  _nbAccounts++;
  _totalAmount += initial_deposit;
  _displayTimestamp();
  std::cout << " index:" << _accountIndex << ";";
  std::cout << "amount:" << _amount << ";";
  std::cout << "created" << std::endl;
}

Account::~Account(void)
{
  _nbAccounts--;
  _totalAmount -= _amount;
  _totalNbDeposits -= _nbDeposits;
  _totalNbWithdrawals -= _nbWithdrawals;
  _displayTimestamp();
  std::cout << " index:" << _accountIndex << ";";
  std::cout << "amount:" << _amount << ";";
  std::cout << "closed" << std::endl;
}

int Account::getNbAccounts(void)
{
  return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
  return (_totalAmount);
}

int Account::getNbDeposits(void)
{
  return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
  return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
  _displayTimestamp();
  std::cout << " accounts:" << getNbAccounts() << ";";
  std::cout << "total:" << getTotalAmount() << ";";
  std::cout << "deposits:" << getNbDeposits() << ";";
  std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit)
{
  _amount += deposit;
  _nbDeposits++;
  _totalNbDeposits++;
  _totalAmount += deposit;
  _displayTimestamp();
  std::cout << " index:" << _accountIndex << ";";
  std::cout << " p_amount:" << _amount - deposit << ";";
  std::cout << "deposit:" << deposit << ";";
  std::cout << "amount:" << _amount << ";";
  std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
  bool res;

  _displayTimestamp();
  std::cout << " index:" << _accountIndex << ";";
  std::cout << "p_amount:" << _amount << ";";
  _amount -= withdrawal;
  if (checkAmount())
  {
    res = true;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << "withdrawal:" << withdrawal << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_withdrawal:" << _nbWithdrawals;
  }
  else
  {
    res = false;
    _amount += withdrawal;
    std::cout << "withdrawal:refused";
  }
  std::cout << std::endl;
  return res;
}

int Account::checkAmount(void) const
{
  return (_amount < 0);
}

void Account::displayStatus(void) const
{
  std::cout << " index:" << _accountIndex << ";";
  std::cout << "amount:" << _amount << ";";
  std::cout << "deposits:" << _nbDeposits << ";";
  std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
  time_t curr_t;
  char buff[16];

  time(&curr_t);
  strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", localtime(&curr_t));
  std::cout << "[" << buff << "]";
}
