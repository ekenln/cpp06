/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 17:23:36 by eeklund       #+#    #+#                 */
/*   Updated: 2025/08/26 12:43:46 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Error: Wrong amount of arguments - expected 1\n";
		return 1;
	}
	ScalarConverter::convert(argv[1]);
	return 0;
}
