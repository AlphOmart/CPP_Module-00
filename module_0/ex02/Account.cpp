#include "Account.hpp"

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
void	Account::displayAccountsInfos(void)
{

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