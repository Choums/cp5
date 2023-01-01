/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:38:48 by marvin            #+#    #+#             */
/*   Updated: 2022/12/27 18:38:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

	/*  Constructors/Destructor */
RobotomyRequestForm::RobotomyRequestForm(std::string const& name, std::string const& target) : Form(name, 72, 45, target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& cpy) : Form(cpy)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << RED << "[ Robotomy Form " << this->_name << " has been erased ! ]" << END << std::endl;
}

void	RobotomyRequestForm::execute_form() const
{
	std::cout << "Start " << this->_target << " Operation !" << std::endl;
	std::cout << "PZZZZZZZ PZZZZZZ PZZZZZ" << std::endl;
	std::cout << "CRIC CRIC PZZZZZ CRAC" << std::endl;
	srand(time(NULL));
	if (rand() % 2)
		std::cout << GREEN << "OPERATION SUCCESSED" << std::endl << "Congratulation "<< this->_target << " , you've come a step further to greatness !" << END << std::endl;
	else
		std::cout << RED << "OPERATION FAILED" << std::endl << "The damages on "<< this->_target <<" are irreversible !" << END << std::endl;


}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const& obj)
{
	if (this != &obj)
		Form::operator=(obj);
	return (*this);
}