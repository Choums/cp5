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

int main(void)
{
	try {
		Form	form("First", 50, 0);
	}
	catch (Form::GradeTooHighException &except) {
		std::cout << except.what();
		// return (1);
	}
	catch (std::exception &except) {
		std::cout << "Invalid name" << std::endl;
		// return (1);
	}
	std::cout << "2------" << std::endl;
	
	Form 		form("Contrat secret", 50, 20);
	Bureaucrat	emp1("Big Boss", 1);
	Bureaucrat	emp2("Stagiare", 140);

	emp2.signForm(form);
	emp1.signForm(form);
	emp1.signForm(form);
	std::cout << "3------" << std::endl;
	
	Form	con("Project", 100, 50);
	std::cout << form;
	std::cout << con;

	return (0);
}