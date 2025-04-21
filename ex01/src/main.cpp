/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: elleneklund <elleneklund@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/21 13:16:45 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/04/21 17:21:44 by elleneklund   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int	main(void)
{
	Data test;
	
	uintptr_t converted = Serializer::serialize(&test);
	std::cout << "og address: " << &test << std::endl;
	std::cout << "in uintptr_t: " << converted << std::endl;
	std::cout << "converted back: " << Serializer::deserialize(converted) << std::endl;
}