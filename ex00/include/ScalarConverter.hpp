/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 10:12:57 by eeklund       #+#    #+#                 */
/*   Updated: 2025/04/18 09:59:33 by elleneklund   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <cctype>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& old);
		~ScalarConverter();
		ScalarConverter&	operator=(const ScalarConverter& S);

	public:
		static void	convert(const std::string& string);
};