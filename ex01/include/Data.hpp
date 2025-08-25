/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/21 12:52:51 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/08/25 16:09:40 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Data
{
	private:
		std::string	name;
		int			age;

	public:
		Data();
		Data(const Data& old);
		~Data();
		Data&	operator=(const Data& D);

		std::string	getName() const;
		int			getAge() const;
};