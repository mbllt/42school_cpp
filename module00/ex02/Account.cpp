#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account (void) {

	return;
}

Account::Account (int initial_deposit) {

	(void)initial_deposit;
	return;
}

Account::~Account (void) {

	return;
}

static int getNbAccounts (void) {

	return this->_nbAccounts;
}

static int getTotalAmount (void) {

	return this->_totalAmount;
}

static int getNbDeposits (void) {

	return this->_nbDeposits;
}

static int getNbWithdrawals (void) {

	return this->_nbWithdrawals;
}

static void displayAccountsInfos (void) {

	_displayTimestamp;
	return;
}

void makeDeposit (int desposit) {

	(void)desposit;
	return;
}

bool makeWithdrawal (int withdrawal) {

	(void)withdrawal;
	return;
}

//
int checkAmount (void) const {

	return;
}

void displayStatus (void) const {

	return;
}

static void _displayTimestamp (void) {

	time_t	back_1900 = time(1900);

	tm *ltm = localtime(&back_1900);
	std::cout << "[";
	std::cout << ltm->tm_year;
	std::cout << ltm->tm_mon;
	std::cout << ltm->tm_mday;
	std::cout << "_";
	std::cout << ltm->tm_hour;
	std::cout << ltm->tm_min;
	std::cout << ltm->tm_sec;
	std::cout << "]"<<std::endl;
	return;
}
