/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 17:22:33 by eeklund       #+#    #+#                 */
/*   Updated: 2025/08/26 12:42:39 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	printValues(const Values& result)
{
	std::cout << "char: ";
	if (result.charImpossible)
		std::cout << "Impossible\n";
	else if (!std::isprint(static_cast<unsigned char>(result.c)))
		std::cout << "Non displayable\n";
	else
		std::cout << '\'' << result.c << "\'\n";

	std::cout << "int: ";
	if (result.intImpossible)
		std::cout << "Impossible\n";
	else
		std::cout << result.i << "\n";

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << result.f << "f\n";
	std::cout << "double: " << result.d << "\n";
}

bool	isImpossibleChar(double value)
{
	return (std::isnan(value) ||std::isinf(value) || value < 0 || value > 127);
}

bool	isImpossibleInt(double value)
{
	return (std::isnan(value) || std::isinf(value) || value > static_cast<double>(std::numeric_limits<int>::max()) || 
		value < static_cast<double>(std::numeric_limits<int>::min()));
}

void	ScalarConverter::convert(const std::string& str)
{
	Values result;
	if (str.empty())
	{
		std::cerr << "Empty string\n";
		return ;
	}
	try
	{
		size_t	pos;
		result.d = std::stod(str, &pos);
		if (str.length() != pos)
		{
			if (str.length() != pos + 1 || (str.back() != 'f' && str.back() != 'F'))
				result.doubleValid = false;
		}
	}
	catch (const std::exception& e)
	{
		result.doubleValid = false;
	}

	if (result.doubleValid == true)
	{
		result.f = static_cast<float>(result.d);
		result.charImpossible = isImpossibleChar(result.d);
		result.c = static_cast<char>(result.d);
		result.intImpossible =  isImpossibleInt(result.d);
		result.i = static_cast<int>(result.d);
	}
	else if (str.length() == 1)
	{
		char c = str[0];
		result.c = c;
		result.i = static_cast<int>(c);
		result.f = static_cast<float>(c);
		result.d = static_cast<double>(c);
	}
	else
	{
		std::cerr << "Error: Invalid input\n";
		return ;
	}
	
	printValues(result);
}