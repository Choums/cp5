/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 10:26:53 by root              #+#    #+#             */
/*   Updated: 2022/12/24 18:42:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

	/*  Constructors/Destructor */
Bureaucrat::Bureaucrat(std::string name, int grade)
{
	if (name.empty()) {
		throw std::exception(); return; }
	if (grade > 150)
		throw Bureaucrat::LowGradeException();
	else if (grade < 1)
		throw Bureaucrat::HighGradeException();
	else
	{
		this->_name = name;
		this->_grade = grade;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const& cpy)
{
	if (cpy._name.empty()) {
		throw std::exception(); return; }
	if (cpy._grade > 150)
		throw Bureaucrat::LowGradeException();
	else if (cpy._grade < 1)
		throw Bureaucrat::HighGradeException();
	else
	{
		this->_name = cpy._name;
		this->_grade = cpy._grade;
	}
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "[ " << this->_name << " has been fired ! ]" << std::endl;
}

	/*  Methods */
void    Bureaucrat::IncreaseGrade()
{
	if ((this->_grade - 1) < 1)
		throw Bureaucrat::HighGradeException();
	else this->_grade--;
}

void    Bureaucrat::DecreaseGrade()
{
	if ((this->_grade + 1) > 150)
		throw Bureaucrat::LowGradeException();
	else this->_grade++;
}

void	Bureaucrat::signForm(Form& form)
{
	if (form.getSigned())
		std::cout << RED << this->getName() << "couldn't sign " << form.getName() << " because form is already signed !" << RED << std::endl;
	else
	{
		try {
			form.beSigned(*this);
			std::cout << GREEN << this->getName() << " signed " << form.getName() << END << std::endl;
		}
		catch (std::exception& except) {
			std::cout << RED << this->getName() << "couldn't sign " << form.getName() << " because " << except.what() << END;
		}
	}
}

	/*	Assignment Operator */
Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_grade = obj._grade;
	}
	return (*this);
}

	/*	Accessors */
std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

	/*	Execptions */
Bureaucrat::HighGradeException::HighGradeException() throw() {}

Bureaucrat::HighGradeException::~HighGradeException() throw() {}

Bureaucrat::LowGradeException::LowGradeException() throw() {}

Bureaucrat::LowGradeException::~LowGradeException() throw() {}

	/*	Stream Operator Overload */
std::ostream&	operator<<(std::ostream& flux, Bureaucrat const& bur)
{
	flux << bur.getName();
	flux << ", bureaucrat grade ";
	flux << bur.getGrade();
	flux << std::endl;
	return (flux);
}