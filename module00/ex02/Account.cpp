#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account (void) {

	_displayTimestamp();
	return;
}

Account::Account (int initial_deposit) {

	this->_accountIndex = Account::getNbAccounts();
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
				<< ";amount:" << initial_deposit
				<< ";created" << std::endl;
	return;
}

Account::~Account (void) {

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";closed" << std::endl;
	return;
}

int Account::getNbAccounts (void) {

	return _nbAccounts;
}

int Account::getTotalAmount (void) {

	return _totalAmount;
}

int Account::getNbDeposits (void) {

	return _totalNbDeposits;
}

int Account::getNbWithdrawals (void) {

	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos (void) {

	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts()
				<< ";total:" << Account::getTotalAmount()
				<<  ";deposits:" << Account::getNbDeposits()
				<<  ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
	return;
}

void Account::makeDeposit (int deposit) {

	int previous = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
				<< ";p_amount:" << previous
				<< ";deposit:" << deposit
				<< ";amount:" << this->_amount
				<< ";nb_deposits:" << this->_nbDeposits << std::endl;
	return;
}

bool Account::makeWithdrawal (int withdrawal) {

	if (this->_amount - withdrawal > 0)
	{
		int previous = this->_amount;
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex
					<< ";p_amount:" << previous
					<< ";withdrawal:" << withdrawal
					<< ";amount:" << this->_amount
					<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	else
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex
					<< ";p_amount:" << this->_amount
					<< ";withdrawal:" << "refused" << std::endl;
		return (false);
	}
	return (true);
}

int Account::checkAmount (void) const {

	std::cout << this->_amount << std::endl;
	return (0);
}

void Account::displayStatus (void) const {

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";deposits:" << this->_nbDeposits
				<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return;
}

void Account::_displayTimestamp (void) {

	time_t	now;

	time(&now);
	tm *ltm = localtime(&now);
	std::cout << "[";
	std::cout << ltm->tm_year + 1900;
	std::cout << ltm->tm_mon;
	std::cout << ltm->tm_mday;
	std::cout << "_";
	std::cout << ltm->tm_hour;
	std::cout << ltm->tm_min;
	std::cout << ltm->tm_sec;
	std::cout << "] ";
	return;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
