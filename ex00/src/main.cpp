/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 17:23:36 by eeklund       #+#    #+#                 */
/*   Updated: 2025/04/21 17:21:17 by elleneklund   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "detectorFuncs.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "too many arguments, expected 1\n";
		return 1;
	}
	ScalarConverter::convert(argv[1]);
	return 0;
}
