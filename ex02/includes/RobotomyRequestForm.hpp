/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:38:49 by marvin            #+#    #+#             */
/*   Updated: 2022/12/27 18:38:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form {
	public:

			/*  Constructors/Destructor */
		RobotomyRequestForm(std::string const& name, std::string const& target);
		RobotomyRequestForm(RobotomyRequestForm const& cpy);
		virtual ~RobotomyRequestForm();

			/*	Methods */
		virtual void	execute_form();

		RobotomyRequestForm&	operator=(RobotomyRequestForm const& obj);
};