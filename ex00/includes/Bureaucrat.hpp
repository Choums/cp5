/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:04:34 by root              #+#    #+#             */
/*   Updated: 2022/12/12 15:26:12 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat {
	public:
			/*  Constructors/Destructor */
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const& cpy);
		virtual ~Bureaucrat();

			/*	Methods */
		void	IncreaseGrade();
		void	DecreaseGrade();

			/*	Assignment Operator */
		Bureaucrat&	operator=(Bureaucrat const& obj);

			/*	Accessors */
		std::string	getName() const;
		int			getGrade() const;
		
	private:
		std::string _name;
		int         _grade; /*	Range 150 to 1 */
	/*	 --------------------------------*/
	/*	Exeception */
	public:
		class	HighGradeExeception : std::exception {
			public:
				HighGradeExeception() throw();
				virtual ~HighGradeExeception() throw ();
				virtual	const char*	what() const throw()
				{	return ("{ Grade too high ! }\n");	}
		};
		
		class	LowGradeExeception : std::exception {
			public:
				LowGradeExeception() throw();
				virtual	~LowGradeExeception() throw();
				virtual	const char* what() const throw()
				{	return ("{ Grade too low ! }\n");	}
		};
};

	/*	Stream Operator Overload */
std::ostream&	operator<<(std::ostream& flux, Bureaucrat const& bur);