/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:04:34 by root              #+#    #+#             */
/*   Updated: 2022/12/24 18:55:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "./Form.hpp"

class Form;
class Bureaucrat;

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

			/*	Assignment Operator */
		Bureaucrat&	operator=(Bureaucrat const& obj);

			/*	Accessors */
		std::string	getName() const;
		int			getGrade() const;
		
	private:
		std::string _name;
		int         _grade; /*	Range 150 to 1 */
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