/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/18 10:18:37 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/08/25 16:07:04 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Data.hpp"

class Serializer
{
	private:
		Serializer() = delete;
		Serializer(const Serializer& old) = delete;
		Serializer&	operator=(const Serializer& S) = delete;
		~Serializer() = delete;
	
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};