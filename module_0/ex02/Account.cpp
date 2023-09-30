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
//TODO
void	Account::_displayTimestamp( void )
{
	std::time_t	time = std::time(NULL);
	std::tm* timeinfo =std::localtime(&time);


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
//TODO
void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "account:" << _nbAccounts <<";"
		<< "amount:" << _totalAmount << "deposits:" << _totalNbDeposits
			<< "withdrawals:" << _totalNbWithdrawals << std::endl;
}
//TODO
Account::Account( int initial_deposit )
{
	(void)initial_deposit;
}
//TODO
Account::~Account( void )
{

}
//TODO
void	Account::makeDeposit(int deposit)
{
	(void)deposit;
}
//TODO
bool	Account::makeWithdrawal( int withdrawal )
{
	(void) withdrawal;
	return (true);
}
//TODO
int		Account::checkAmount( void ) const
{
	int	i;
	i = 0;
	return (i);
}
//TODO
void	Account::displayStatus( void ) const
{
}