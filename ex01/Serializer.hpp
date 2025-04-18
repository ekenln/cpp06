/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: elleneklund <elleneklund@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/18 10:18:37 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/04/18 10:23:16 by elleneklund   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer& old);
		Serializer&	operator=(const Serializer& S);
		~Seriaizer();
	
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};