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

int main(void)
{
	std::cout << "-----	fst	-----" << std::endl;
	
	Form		*form1 = new ShrubberyCreationForm("form1", "sapin");
	Bureaucrat	*bur = new Bureaucrat("Charles", 140);
	
	bur->signForm(*form1);
	bur->executeForm(*form1);

	std::cout << "-----	sec	-----" << std::endl;

	Bureaucrat	*bur2 = new Bureaucrat("Louis", 40);
	Form		*form2 = new RobotomyRequestForm("cyborg", bur2->getName());

	bur2->signForm(*form2);
	bur2->executeForm(*form2);

	std::cout << "-----	thr	-----" << std::endl;

	Bureaucrat	*bur3 = new Bureaucrat("Saul", 150);
	Bureaucrat	*boss = new Bureaucrat("Director", 3);
	Form		*form3 = new PresidentialPardonForm("Pardon", bur3->getName());

	boss->signForm(*form3);
	boss->executeForm(*form3);

	std::cout << "-----	del	-----" << std::endl;
	delete form1;
	delete bur;
	delete form2;
	delete bur2;
	delete form3;
	delete bur3;
	delete boss;
	return (0);
}