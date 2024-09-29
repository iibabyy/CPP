/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 20:42:18 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/29 22:21:56 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_totalNbDeposits = 0;

Account::Account(int initial_deposit) {
	static int index = 0;

	Account::_nbAccounts = index + 1;
	this->_accountIndex = index;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;

	Account::_displayTimestamp();
	std::cout
	<< "index:" << index
	<< ";amount:" << this->_amount
	<< ";created"
	<< std::endl;
	index += 1;
};

Account::~Account(void) {
	Account::_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";closed"
	<< std::endl;
};

int	Account::getNbAccounts( void ) {
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout
	<< "accounts:" << Account::getNbAccounts()
	<< ";total:" << Account::getTotalAmount()
	<< ";deposits:" << Account::getNbDeposits()
	<< ";withdrawals:" << Account::getNbWithdrawals()
	<< std::endl;
}

void	Account::makeDeposit( int deposit ) {
	this->_nbDeposits += 1;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
	Account::_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex
	<< ";p_amount:" << this->checkAmount() - deposit
	<< ";deposit:" << deposit
	<< ";amount:" << this->_amount
	<< ";nb_deposits:" << this->_nbDeposits
	<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex
	<< ";p_amount:" << this->checkAmount()
	<< ";withdrawal:";
	if (this->_amount < withdrawal){
		std::cout << "refused" << std::endl;
		return (false);
	} else {
		this->_amount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals += 1;
	}
	std::cout << withdrawal
	<< ";amount:" << this->_amount
	<< ";nb_withdrawals:" << this->_nbWithdrawals
	<< std::endl;
	return (true);
}

int		Account::checkAmount( void ) const {
	return (this->_amount);
}

void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex
	<< ";amount:" << this->checkAmount()
	<< ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals
	<< std::endl;
}

void	Account::_displayTimestamp( void ) {
    std::time_t now = std::time(0);

    std::tm* tm_time = std::localtime(&now);
    std::stringstream ss;
    ss << std::setw(4) << (1900 + tm_time->tm_year)
       << std::setw(2) << std::setfill('0') << (tm_time->tm_mon + 1)
       << std::setw(2) << std::setfill('0') << tm_time->tm_mday
       << "_"
       << std::setw(2) << std::setfill('0') << tm_time->tm_hour
       << std::setw(2) << std::setfill('0') << tm_time->tm_min
       << std::setw(2) << std::setfill('0') << tm_time->tm_sec;
    
    std::cout << "[" << ss.str() << "] ";
}
