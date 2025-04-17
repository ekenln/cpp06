/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 17:23:36 by eeklund       #+#    #+#                 */
/*   Updated: 2025/04/17 10:42:44 by elleneklund   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "detectorFuncs.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
		return 1;
	ScalarConverter::convert(argv[1]);
	return 0;
}
