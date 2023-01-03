/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:44:35 by marvin            #+#    #+#             */
/*   Updated: 2022/12/24 18:44:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"

int main(void)
{
	std::cout << "-----	fst	-----" << std::endl;
	
	try {
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		Bureaucrat bur("Charles", 25);
		bur.signForm(*rrf);
		bur.executeForm(*rrf);
		delete rrf;
	}
	catch (std::string& except) {
		std::cout << except;
	}
	
	std::cout << "\n-----	sec	-----\n" << std::endl;
	try {
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Jardin");

		Bureaucrat bur("Jardinier", 150);
		bur.signForm(*rrf);
		bur.executeForm(*rrf);
		delete rrf;
	}
	catch (std::string& except) {
		std::cout << except;
	}
	return (0);
}