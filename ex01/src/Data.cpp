/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/21 12:59:03 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/08/25 16:10:18 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : name("newborn"), age(0) {}

Data::Data(const Data& old) : name(old.name), age(old.age) {}

Data::~Data() {}

Data&	Data::operator=(const Data& D)
{
	if (this == &D)
		return *this;
	this->age = D.age;
	this->name = D.name;
	return *this;
}


std::string	Data::getName() const
{
	return (name);
}

int			Data::getAge() const
{
	return (age);
}
