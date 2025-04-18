/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   detectorFuncs.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: elleneklund <elleneklund@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/11 17:34:54 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/04/18 10:14:36 by elleneklund   ########   odam.nl         */
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
		// std::cerr << "from isint" << '\n';
		// std::cerr << e.what() << '\n';
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
		// std::cerr << "from isFloat" << '\n';
		// std::cerr << e.what() << '\n';
		return false;
	}
}

bool	isDouble(std::string input)
{
	if (input == "-inf" || input == "+inf" || input == "nan")
		return true;
	try
	{
		size_t	pos;
		std::stod(input, &pos);
		if (input.length() != pos)
			return false;
		return true;
	}
	catch (const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
		return false;
	}	
}

// bool	isPseudoLiteral(std::string input){}

