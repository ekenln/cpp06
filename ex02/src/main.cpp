/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/21 14:10:34 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/04/22 11:35:47 by eeklund       ########   odam.nl         */
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

	data = data->generate();
	data->identify(data);
	delete data;
	
	data = data->generate();
	data->identify(data);
	delete data;

}