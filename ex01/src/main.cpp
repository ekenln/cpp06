/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/21 13:16:45 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/08/25 16:13:38 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int	main(void)
{
	Data test;
	std::cout << "-- DATA INFO --\n";
	std::cout << "Name: " << test.getName() << "\nAge: " << test.getAge() << std::endl; 
	
	uintptr_t converted = Serializer::serialize(&test);
	std::cout << "og address of data: " << &test << std::endl;
	std::cout << "in uintptr_t: " << converted << std::endl;
	std::cout << "address converted back from uintptr_t: " << Serializer::deserialize(converted) << std::endl;
	
}