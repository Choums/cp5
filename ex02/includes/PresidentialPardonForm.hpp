/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 17:41:18 by marvin            #+#    #+#             */
/*   Updated: 2022/12/29 17:41:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Form.hpp"

class PresidentialPardonForm : public Form {
	public:
			/*  Constructors/Destructor */
		PresidentialPardonForm(std::string const& name, std::string const& target);
		PresidentialPardonForm(PresidentialPardonForm const& cpy);
		virtual ~PresidentialPardonForm();

			/*	Methods */
		virtual void	execute_form() const;

		PresidentialPardonForm&	operator=(PresidentialPardonForm const& obj);
};