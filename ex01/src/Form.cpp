/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:37:19 by marvin            #+#    #+#             */
/*   Updated: 2022/12/24 16:37:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

		/*  Constructors/Destructor */
Form::Form(std::string name, int to_sign, int exec)
{
	if (name.empty()) {
		throw std::exception();	return; }
	if (to_sign > 150 || exec > 150)
		throw GradeTooLowException();
	else if (to_sign < 1 || exec < 1)
		throw GradeTooHighException();
	else
	{
		this->_name = name;
		this->_signed = false;
		this->_to_sign = to_sign;
		this->_execute = exec;
	}
}

Form::Form(Form const& cpy)
{
	if (cpy._name.empty()) {
		throw std::exception();	return; }
	if (cpy._to_sign > 150 || cpy._execute > 150)
		throw GradeTooLowException();
	else if (cpy._to_sign < 1 || cpy._execute < 1)
		throw GradeTooHighException();
	else
	{
		this->_name = cpy._name;
		this->_signed = cpy._signed;
		this->_to_sign = cpy._to_sign;
		this->_execute = cpy._execute;
	}
}

Form::~Form()
{
	std::cout << RED << "[ Form " << this->_name << " has been erased ! ]" << END << std::endl;
}

	/*	Methods */
void	Form::beSigned(Bureaucrat const& bur)
{
	if (bur.getGrade() >= this->_to_sign)
		throw GradeTooLowException();
	else this->_signed = true;
}

	/*	Accessors */
std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

int	Form::getToSign() const
{
	return (this->_to_sign);
}

int	Form::getExec() const
{
	return (this->_execute);
}

	/*	Assignment Operator */
Form&	Form::operator=(Form const& obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_signed = obj._signed;
		this->_to_sign = obj._to_sign;
		this->_execute = obj._execute;
	}
	return (*this);
}

	/*  Exceptions */
Form::GradeTooHighException::GradeTooHighException() throw() {}
Form::GradeTooHighException::~GradeTooHighException() throw() {}
Form::GradeTooLowException::GradeTooLowException() throw() {}
Form::GradeTooLowException::~GradeTooLowException() throw() {}

/*	Stream Operator Overload */
std::ostream&	operator<<(std::ostream &flux, Form const& form)
{
	flux << "Form " << form.getName();
	flux << ", need Grade: " << form.getToSign() << "to be signed.\n";
	if (form.getSigned())
		flux << GREEN << "Is already signed !\n" << END;
	else
		flux << RED << "Need to be signed !\n" << END;
	flux << "Need Grade " << form.getExec() << "to be executed." << std::endl;
	return (flux);
}