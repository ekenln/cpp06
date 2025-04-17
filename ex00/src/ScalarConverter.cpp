/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 17:22:33 by eeklund       #+#    #+#                 */
/*   Updated: 2025/04/17 11:26:23 by elleneklund   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "detectorFuncs.hpp"

void	ScalarConverter::convert(const std::string& str)
{
	if (str.empty())
		return ;

	int		integer = 0;
	char	character = 0;
	float	floatValue = 0.0f;
	double	doubleValue = 0.0;

	if (isInt(str))
	{
		std::cout << "found int\n";
		integer = std::stoi(str);
		character = static_cast<char>(integer);
		floatValue = static_cast<float>(integer);
		doubleValue = static_cast<double>(integer);
	}
	else if (isChar(str))
	{
		character = str[0];
		integer = static_cast<int>(character);
		floatValue = static_cast<float>(character);
		doubleValue = static_cast<double>(character);
	}
	else if (isDouble(str))
	{
		doubleValue = std::stod(str);
		character = static_cast<char>(doubleValue);
		floatValue = static_cast<float>(doubleValue);
		integer = static_cast<int>(doubleValue);
	}
	else if (isFloat(str))
	{
		floatValue = std::stof(str);
		character = static_cast<char>(floatValue);
		integer = static_cast<float>(floatValue);
		doubleValue = static_cast<double>(floatValue);
	}

	std::cout << "char: " << character << "\n";
	std::cout << "int: " << integer << "\n";
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << floatValue << "f\n";
	std::cout << "double: " << doubleValue << "\n";
}
