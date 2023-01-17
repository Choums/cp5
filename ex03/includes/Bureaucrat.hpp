/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:04:34 by root              #+#    #+#             */
/*   Updated: 2023/01/17 18:30:57 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
#include "Form.hpp"

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define END "\033[0m"

class Form;

class Bureaucrat {
	public:
			/*  Constructors/Destructor */
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const& cpy);
		virtual ~Bureaucrat();

			/*	Methods */
		void	IncreaseGrade();
		void	DecreaseGrade();
		void	signForm(Form& form);
		void	executeForm(Form const& form);

			/*	Assignment Operator */
		Bureaucrat&	operator=(Bureaucrat const& obj);

			/*	Accessors */
		std::string	getName() const;
		int			getGrade() const;
		
	private:
		std::string const	_name;
		int         		_grade; /*	Range 150 to 1 */
	/*	 --------------------------------*/
	/*	Exception */
	public:
		class	HighGradeException : std::exception {
			public:
				HighGradeException() throw();
				virtual ~HighGradeException() throw ();
				virtual	const char*	what() const throw()
				{	return ("{ Grade too high ! }\n");	}
		};
		
		class	LowGradeException : std::exception {
			public:
				LowGradeException() throw();
				virtual	~LowGradeException() throw();
				virtual	const char* what() const throw()
				{	return ("{ Grade too low ! }\n");	}
		};
};

	/*	Stream Operator Overload */
std::ostream&	operator<<(std::ostream& flux, Bureaucrat const& bur);