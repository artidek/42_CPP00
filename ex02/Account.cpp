/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 23:32:33 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/20 00:15:26 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <sstream>

Account::Account(int initial_deopsit) : _accountIndex(_nbAccounts), _amount(initial_deopsit), _nbDeposits(0), _nbWithdrawals(0)
{
	std::ostringstream ind;
	std::ostringstream deposit;
	ind << _nbAccounts;
	deposit << initial_deopsit;
	_displayTimestamp();
	std::cout << "index:" << ind.str() << ";" << "amount:" << deposit.str() << ";" << "created" << std::endl;
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
}
