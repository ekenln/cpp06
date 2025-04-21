/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: elleneklund <elleneklund@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/21 12:52:51 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/04/21 13:06:21 by elleneklund   ########   odam.nl         */
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
};