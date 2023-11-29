#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp( void )
{
	std::time_t	time = std::time(NULL);
	std::tm*	timeinfo =std::localtime(&time);

	std::cout << "[" << std::setfill('0')
			<< std::setw(4) << 1900 + timeinfo->tm_year
			<< std::setw(2) << timeinfo->tm_mon + 1
			<< std::setw(2) << timeinfo->tm_mday
			<< "_"
			<< std::setw(2) << timeinfo->tm_hour
			<< std::setw(2) << timeinfo->tm_min
			<< std::setw(2) << timeinfo->tm_sec
			<< "]";
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "account:" << _nbAccounts
		<< ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits
			<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{
	_totalAmount += initial_deposit;
	_nbAccounts++;

	this->_accountIndex =_nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
			  << "amount:" << this->_amount << ';'
			  << "created" << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
			  << "amount:" << this->_amount << ';'
			  << "closed" << std::endl;
}
//TODO
void	Account::makeDeposit(int deposit)
{
	_totalAmount += deposit;
	this->_amount += deposit;
	_totalNbDeposits += 1;
	this->_nbDeposits += 1;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
			  << "p_amount:" << this->_amount - deposit << ';'
			  << "deposit:" << deposit << ';'
			  << "amount:" << this->_amount << ';'
			  << "nb_deposits:" << this->_nbDeposits << std::endl;
}
//TODO
bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (this->_amount < withdrawal)
	{
		std::cout << "index:" << this->_accountIndex << ';'
				  << "p_amount:" << this->_amount << ';'
				  << "withdrawal:refused" << std::endl;
		return false;
	}
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;

	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	std::cout << "index:" << this->_accountIndex << ';'
			  << "p_amount:" << this->_amount + withdrawal << ';'
			  << "withdrawal:" << withdrawal << ';'
			  << "amount:" << this->_amount << ';'
			  << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}
//TODO
int		Account::checkAmount( void ) const
{
	return (this->_amount);
}
//TODO
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';'
			  << "amount:" << _amount << ';'
			  << "deposits:" << _nbDeposits << ';'
			  << "withdrawals:" << _nbWithdrawals << std::endl;
}