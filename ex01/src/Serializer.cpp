/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: elleneklund <elleneklund@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/18 10:47:13 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/04/21 13:16:43 by elleneklund   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t	address = reinterpret_cast<uintptr_t>(ptr);
	return address;
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data* ogPtr = reinterpret_cast<Data*>(raw);
	return ogPtr;
}
