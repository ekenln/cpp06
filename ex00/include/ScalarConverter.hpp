/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 10:12:57 by eeklund       #+#    #+#                 */
/*   Updated: 2025/08/26 13:40:23 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

class ScalarConverter
{
	private:
		ScalarConverter() = delete;
		ScalarConverter(const ScalarConverter& old) = delete;
		~ScalarConverter() = delete;
		ScalarConverter&	operator=(const ScalarConverter& S) = delete;

	public:
		static void	convert(const std::string& string);
};

struct	Values {
	int		i = 0; 
	float	f = 0.0f;
	double	d = 0.0;
	char	c = '\0';

	bool	charImpossible = true;
	bool	intImpossible = true;
	bool	doubleValid = true;
};
