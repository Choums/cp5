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
Form::Form(std::string name, int to_sign, int exec) : _name(name), _signed(false), _to_sign(to_sign), _execute(exec)
{
	if (name.empty()) {
		throw std::exception();	return; }
	if (to_sign > 150 || exec > 150)
		throw GradeTooLowException();
	else if (to_sign < 1 || exec < 1)
		throw GradeTooHighException();
}

Form::Form(Form const& cpy) : _name(cpy._name), _signed(false), _to_sign(cpy._to_sign), _execute(cpy._execute)
{
	if (cpy._name.empty()) {
		throw std::exception();	return; }
	if (cpy._to_sign > 150 || cpy._execute > 150)
		throw GradeTooLowException();
	else if (cpy._to_sign < 1 || cpy._execute < 1)
		throw GradeTooHighException();
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
		return (*this);
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
	flux << "< Form: " << form.getName();
	flux << ", need Grade " << form.getToSign() << " to be signed.\n";
	if (form.getSigned())
		flux << GREEN << "Is already signed !\n" << END;
	else
		flux << RED << "Need to be signed !\n" << END;
	flux << "Need Grade " << form.getExec() << " to be executed. >" << std::endl;
	return (flux);
}