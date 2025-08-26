/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/21 14:04:00 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/08/26 13:02:15 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Base
{
	public:
		virtual ~Base();

		Base	*generate(void); //randomly instantiates a,b or c returns instance as base ptr
		void	identify(Base* p); // prints the actual type of the object pointed to by p: "A", "B", or "C".
		void	identify(Base& p); //prints the actual type of the object referenced by p: "A", "B", or "C".
		// virtual void	type() = 0;
};