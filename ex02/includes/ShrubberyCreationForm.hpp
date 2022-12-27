/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:47:57 by marvin            #+#    #+#             */
/*   Updated: 2022/12/27 16:47:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
	public:
			/*  Constructors/Destructor */
		ShrubberyCreationForm(std::string const& name, std::string const& target);
		ShrubberyCreationForm(ShrubberyCreationForm const& cpy);
		virtual ~ShrubberyCreationForm();

			/*	Methods */
		virtual void	execute_form();

		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const& obj);
};
 