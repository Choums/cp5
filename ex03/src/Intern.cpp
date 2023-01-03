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
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

Intern::Intern()
{
	std::cout << "[ A new Intern has been recruted ! ]" << std::endl;
}

Intern::Intern(Intern const& cpy)
{
	(void)cpy;
}

Intern::~Intern()
{
	std::cout << RED << "[ The intern has been fired ! ]" << END << std::endl;
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	std::string	tab[3] = {	"shrubbery creation",
							"robotomy request",
							"presidential pardon"};

	int	i(-1);
	while (++i < 3)
		if (!tab[i].compare(name))
			break;
	switch (i)
	{
		case 0:
			std::cout << GREEN << "Intern creates Shrubbery form" << END << std::endl;
			return (new ShrubberyCreationForm(name, target));
		case 1:
			std::cout << GREEN << "Intern creates Robotomy form" << END << std::endl;
			return (new RobotomyRequestForm(name, target));
		case 2:
			std::cout << GREEN << "Intern creates Presidential pardon form" << END << std::endl;
			return (new PresidentialPardonForm(name, target));
		case 3:
			throw std::string("Intern cannot find " + name + " form !\n");
			break;
	}
	return (NULL);
}

Intern&	Intern::operator=(Intern const& obj)
{
	if (this != &obj)
	{}
	return (*this);
}