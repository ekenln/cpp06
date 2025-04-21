/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 10:12:57 by eeklund       #+#    #+#                 */
/*   Updated: 2025/04/21 18:51:33 by elleneklund   ########   odam.nl         */
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

template <typename T> void generalConverter(T type)
{
	int		integer = 0;
	bool	impossibleChar = false;
	bool	impossibleInt = false;

	float floatValue = static_cast<float>(type);
	double doubleValue = static_cast<double>(type);
	char character = static_cast<char>(type);
	
	if (!std::isprint(static_cast<unsigned char>(character)))
		impossibleChar = true;
	if (type > INT_MAX || type < INT_MIN)
		impossibleInt = true;
	else
		integer = static_cast<int>(type);

	std::cout << "char: ";
	if (impossibleChar)
		std::cout << "Non displayable\n";
	else
		std::cout << '\'' << character << "\'\n";

	std::cout << "int: ";
	if (impossibleInt)
		std::cout << "Impossible\n";
	else
		std::cout << integer << "\n";

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << floatValue << "f\n";
	std::cout << "double: " << doubleValue << "\n";
}