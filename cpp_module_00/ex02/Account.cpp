#include "Account.hpp"

static int	_nbAccounts;
static int	_totalAmount;
static int	_totalNbDeposits;
static int	_totalNbWithdrawals;

Account::Account(int initial_deposit)
{
	this->_accountIndex = getNbAccounts();
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	
	_nbAccounts++;
	_totalAmount += initial_deposit;
}

Account::~Account(void)
{
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
	
}

void Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
	return false;
}

int Account::checkAmount(void) const
{
	return 0;
}

void Account::displayStatus(void) const
{
}

void Account::_displayTimestamp(void)
{
}
