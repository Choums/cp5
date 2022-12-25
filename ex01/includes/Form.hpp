/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:37:16 by marvin            #+#    #+#             */
/*   Updated: 2022/12/24 16:37:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define END "\033[0m"

class   Form {
	public:
			/*  Constructors/Destructor */
		Form(std::string name, int to_sign, int exec);
		Form(Form const& cpy);
		virtual ~Form();

			/*	Methods */
		void	beSigned(Bureaucrat const& bur);

			/*	Assignment Operator */
		Form&	operator=(Form const& obj);

			/*	Accessors */
		std::string		getName() const;
		bool			getSigned() const;
		int				getToSign() const;
		int				getExec() const;

	private:
		std::string	_name;
		bool		_signed;
		int 		_to_sign;
		int			_execute;


	public: /*  Exceptions */
		class GradeTooHighException : std::exception {
			public:
				GradeTooHighException() throw();
				virtual ~GradeTooHighException() throw();
				virtual const char* what() const throw()
				{	return ("{ Grade Too High ! }\n"); }
		};

		class GradeTooLowException : std::exception {
			public:
				GradeTooLowException() throw();
				virtual ~GradeTooLowException() throw();
				virtual const char* what() const throw()
				{	return ("{ Grade Too Low ! }\n"); }
		};
};
	/*	Stream Operator Overload */
std::ostream&	operator<<(std::ostream &flux, Form const& form);