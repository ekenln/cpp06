/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/21 14:08:50 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/08/26 13:38:03 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base::~Base() {}

Base*	Base::generate(void)
{
	int		randNum = (rand() % 3);

	switch (randNum)
	{
		case 0: return new A();
		case 1: return new B();
		case 2: return new C();
	}
	return nullptr;
}

void	Base::identify(Base* p)
{
	A*	ptrA = dynamic_cast<A*>(p);

	if (ptrA)
		std::cout << "A" << std::endl;
	else if (B*	ptrB = dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else
		std::cout << "C" << std::endl;
}

void	Base::identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::exception&) {}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::exception&) {}

	std::cout << "C" << std::endl;
}
