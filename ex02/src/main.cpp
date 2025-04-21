/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: elleneklund <elleneklund@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/21 14:10:34 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/04/21 18:31:47 by elleneklund   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void)
{
	std::srand(time(NULL));
	Base* data = nullptr;
	data = data->generate();
	data->identify(data);
	delete data;
}