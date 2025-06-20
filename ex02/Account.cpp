/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 23:32:33 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/20 10:27:01 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <sstream>
#include <ctime>
#include <cstdio>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	std::ostringstream ind;
	std::ostringstream deposit;
	ind << _nbAccounts;
	deposit << initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << ind.str() << ";" << "amount:" << deposit.str() << ";" << "created" << std::endl;
	_nbAccounts++;
}

Account::~Account()
{
	std::ostringstream ind;
	std::ostringstream deposit;
	ind << _accountIndex;
	deposit << _amount;
	_displayTimestamp();
	std::cout << "index:" << ind.str() << ";" << "amount:" << deposit.str() << ";" << "closed" << std::endl;
}

void	Account::_displayTimestamp()
{
	time_t now = time(0);
	struct tm *t = localtime(&now);
	char date[9];
	char	tm[7];
	strftime(date, sizeof(date), "%Y%m%d", t);
	strftime(tm, sizeof(tm), "%H%M%S", t);
	std::cout << "[";
	std::cout << date;
	std::cout << "_";
	std::cout << tm;
	std::cout << "]";
}

void	Account::makeDeposit (int deposit)
{
	std::ostringstream ind;
	std::ostringstream dep;
	std::ostringstream nbDep;
	std::ostringstream nw_amount;
	std::ostringstream amount;
	_nbDeposits++;
	ind << _accountIndex;
	dep << deposit;
	nbDep << _nbDeposits;
	amount << _amount;
	nw_amount << _amount + deposit;
	_displayTimestamp();
	std::cout << "index:" << ind.str() << ";"; 
	std::cout << "p_amount:" << amount.str() << ";";
	std::cout << "deposit:" << dep.str() << ";";
	std::cout << "amount:" << nw_amount.str() << ";";
	std::cout << "nb_deposits:" << nbDep.str() << std::endl;
	_amount += deposit;
	_totalAmount += _amount;
	_totalNbDeposits++;
	_nbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	std::ostringstream ind;
	ind << _accountIndex;
	std::ostringstream amount;
	amount << _amount;
	_displayTimestamp();
	if (_amount >= withdrawal)
	{
		std::cout << "index:" << ind.str() << ";";
		std::cout << "p_amoutn:" << amount.str() << ";";
		std::ostringstream wt;
		wt << withdrawal;
		std::cout << "withdrawal:" << wt.str() << ";";
		std::ostringstream nw_amount;
		nw_amount << _amount - withdrawal;
		std::cout << "amount:" << nw_amount.str() << ";";
		std::ostringstream withdrawals;
		withdrawals << _nbWithdrawals;
		std::cout << "nb_withdrawals:" << withdrawals.str() << std::endl;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		_amount -=withdrawal;
		_nbWithdrawals++;
		return (true);
	}
	else
	{
		std::cout << "index:" << ind.str() << ";";
		std::cout << "p_amount:" << amount.str() << ";";
		std::cout << "withdrawal:refused" << std::endl;
	}
	return (false);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void Account::displayStatus(void) const
{
	std::ostringstream ind;
	std::ostringstream nbDep;
	std::ostringstream amount;
	std::ostringstream withdrawals;

	ind << _accountIndex;
	amount << _amount;
	nbDep << _nbDeposits;
	withdrawals << _nbWithdrawals;
	_displayTimestamp();
	std::cout << "index:" << ind.str() << ";";
	std::cout << "amount:" << amount.str() << ";";
	std::cout << "deposits:" << nbDep.str() << ";";
	std::cout << "withdrawals:" << withdrawals.str() << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{	
	std::ostringstream nbAcc;
	std::ostringstream nbDep;
	std::ostringstream amount;
	std::ostringstream withdrawals;

	nbAcc << getNbAccounts();
	nbDep << getNbDeposits();
	amount << getTotalAmount();
	withdrawals << getNbWithdrawals();
	std::cout << "accounts:" << nbAcc.str() << ";";
	std::cout << "total:" << amount.str() << ";";
	std::cout << "deposits:" << nbDep.str() << ";";
	std::cout << "withdrawals:" << withdrawals.str() << std::endl;
}
