/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: elleneklund <elleneklund@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/21 14:08:50 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/04/21 16:14:01 by elleneklund   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base::~Base() {}

 //randomly instantiates a,b or c returns instance as base ptr
Base*	Base::generate(void)
{
	struct generator
	{
		Base*	(*create)(); 
	};

	generator map[3] = {
		{[]()-> Base* {return (new A()); }},
		{[]()-> Base* {return (new B()); }},
		{[]()-> Base* {return (new C()); }}
	};

	int		randNum = (rand() % 3);
	Base*	instance = map[randNum].create();
	return (instance);
}

 // prints the actual type of the object pointed to by p: "A", "B", or "C".
void	Base::identify(Base* p)
{
	A*	ptrA = dynamic_cast<A*>(p);
	B*	ptrB = dynamic_cast<B*>(p);

	if (ptrA)
		std::cout << "A" << std::endl;
	else if (ptrB)
		std::cout << "B" << std::endl;
	else if (C*	ptrC = dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "failure\n";

}

 //prints the actual type of the object referenced by p: "A", "B", or "C".
void	Base::identify(Base& p)
{
	try
	{
		A refA = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{

	}
	try
	{
		B refB = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{

	}
	std::cout << "C" << std::endl;
}
