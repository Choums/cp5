/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:21:15 by marvin            #+#    #+#             */
/*   Updated: 2023/01/01 18:21:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern()
{
	std::cout << "[ A new Intern has been recruted ! ]" << std::endl;
}

Intern::Intern(Intern const& cpy)
{}

Intern::~Intern()
{
	std::cout << RED << "[ The intern has been fired ! ]" << END << std::endl;
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	Form	*form;
	
	std::cout << RED << "Intern cannot find " << name << " form !" << END << std::endl;
	return (NULL);
}

Intern&	Intern::operator=(Intern const& obj)
{
	if (this != &obj)
	{}
	return (*this)
}