/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 18:06:07 by marvin            #+#    #+#             */
/*   Updated: 2022/12/29 18:06:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const& name, std::string const& target) : Form(name, 25, 5, target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& cpy) : Form(cpy)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << RED << "[ PresidentialPardon Form " << this->_name << " has been erased ! ]" << END << std::endl;
}

void	PresidentialPardonForm::execute_form() const
{
	std::cout << "Dear " << this->_target << "," << std::endl;
	std::cout << "You have obtained mercy from the President Zaphod Beeblebrox" << std::endl;
	std::cout << "Do not waste your second chance !" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const& obj)
{
	if (this != &obj)
	Form::operator=(obj);
	return (*this);
}