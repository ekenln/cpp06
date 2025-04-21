/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: elleneklund <elleneklund@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/18 10:47:13 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/04/21 17:25:26 by elleneklund   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer& old) {}

Serializer&	Serializer::operator=(const Serializer& S)
{
	return (*this);
}

Serializer::~Serializer() {}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t	converted = reinterpret_cast<uintptr_t>(ptr);
	return converted;
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data* ogPtr = reinterpret_cast<Data*>(raw);
	return ogPtr;
}
