/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   detectorFuncs.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/11 17:34:54 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/08/25 13:24:49 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <string>
#include <cctype>

bool	isChar(std::string input)
{
	if (input.length() > 1)
	{
		return false;
	}
	return true;
}

bool	isInt(std::string input)
{
	try 
	{
		size_t	pos;
		std::stoi(input, &pos);
		if (input.length() != pos)
			return false;
		return true;
	}
	catch (const std::exception& e)
	{
		return false;
	}
}

bool	isFloat(std::string input)
{
	if (input == "-inff" || input == "+inff" || input == "nanf")
		return true;
	try 
	{
		size_t	pos;
		std::stof(input, &pos);
		if (input.length() != pos + 1 || (input.back() != 'f' && input.back() != 'F'))
			return false;
		return true;
	}
	catch (const std::exception& e)
	{
		return false;
	}
}

bool	isDouble(std::string input)
{
	// if (input == "-inf" || input == "+inf" || input == "nan")
	// 	return true;
	try
	{
		size_t	pos;
		std::stod(input, &pos);
		if (input.length() != pos)
		{
			if (input.length() != pos + 1 || (input.back() != 'f' && input.back() != 'F'))
				return false;
		}
		return true;
	}
	catch (const std::exception& e)
	{
		return false;
	}
}
