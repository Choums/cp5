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
		Form(std::string const& name, int to_sign, int exec, std::string const& target);
		Form(Form const& cpy);
		virtual ~Form();

			/*	Methods */
		void			beSigned(Bureaucrat const& bur);
		void			execute(Bureaucrat const& executor) const;
		virtual void	execute_form() const = 0;
			/*	Assignment Operator */
		Form&	operator=(Form const& obj);

			/*	Accessors */
		std::string		getName() const;
		bool			getSigned() const;
		int				getToSign() const;
		int				getExec() const;
		std::string		getTarget() const;

	protected:
		std::string	const	_name;
		bool				_signed;
		int 		const	_to_sign;
		int			const	_execute;
		std::string	const	_target;


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