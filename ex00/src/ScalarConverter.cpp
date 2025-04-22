/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 17:22:33 by eeklund       #+#    #+#                 */
/*   Updated: 2025/04/22 11:32:45 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "detectorFuncs.hpp"

// void	ScalarConverter::convert(const std::string& str)
// {
// 	if (str.empty())
// 		return ;

// 	int		integer = 0;
// 	char	character = 0;
// 	float	floatValue = 0.0f;
// 	double	doubleValue = 0.0;
// 	bool	impossibleChar = false;
// 	bool	impossibleInt = false;

// 	if (isInt(str))
// 	{
// 		integer = std::stoi(str);
// 		character = static_cast<char>(integer);
// 		if (!std::isprint(static_cast<unsigned char>(character)))
// 			impossibleChar = true;
// 		floatValue = static_cast<float>(integer);
// 		doubleValue = static_cast<double>(integer);
// 	}
// 	else if (isChar(str))
// 	{
// 		character = str[0];
// 		integer = static_cast<int>(character);
// 		floatValue = static_cast<float>(character);
// 		doubleValue = static_cast<double>(character);
// 	}
// 	else if (isDouble(str))
// 	{
// 		doubleValue = std::stod(str);
// 		floatValue = static_cast<float>(doubleValue);
// 		character = static_cast<char>(doubleValue);
// 		if (!std::isprint(static_cast<unsigned char>(character)))
// 			impossibleChar = true;
// 		if (doubleValue > INT_MAX || doubleValue < INT_MIN)
// 			impossibleInt = true;
// 		else
// 			integer = static_cast<int>(doubleValue);
		
// 	}
// 	else if (isFloat(str))
// 	{
// 		floatValue = std::stof(str);
// 		doubleValue = static_cast<double>(floatValue);
// 		character = static_cast<char>(floatValue);
// 		if (!std::isprint(static_cast<unsigned char>(character)))
// 			impossibleChar = true;
// 		if (floatValue > INT_MAX || floatValue < INT_MIN)
// 			impossibleInt = true;
// 		else
// 			integer = static_cast<float>(floatValue);
// 	}
// 	else
// 	{
// 		std::cerr << "Not a literal\n";
// 	}

// 	std::cout << "char: ";
// 	if (impossibleChar)
// 		std::cout << "impossibleChar\n";
// 	else
// 		std::cout << character << "\n";
// 	std::cout << "int: ";
// 	if (impossibleInt)
// 		std::cout << "impossible\n";
// 	else
// 		std::cout << integer << "\n";
// 	std::cout << std::fixed << std::setprecision(1);
// 	std::cout << "float: " << floatValue << "f\n";
// 	std::cout << "double: " << doubleValue << "\n";
// }


ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& old) {
	(void)old;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& S)
{
	(void) S;
	return (*this);
}

void	ScalarConverter::convert(const std::string& str)
{
	if (str.empty())
		return ;

	if (isInt(str))
		::generalConverter<int>(std::stoi(str));
	else if (isChar(str))
		::generalConverter<char>(str[0]);
	else if (isDouble(str))
		::generalConverter<double>(std::stod(str));
	else if (isFloat(str))
		::generalConverter<float>(std::stof(str));
	else
		std::cerr << "Not a literal\n";
}
