/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: elleneklund <elleneklund@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/21 12:59:03 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/04/21 13:21:33 by elleneklund   ########   odam.nl         */
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
