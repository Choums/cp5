/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:18:25 by marvin            #+#    #+#             */
/*   Updated: 2023/01/01 18:18:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class Intern {
	public:
		Intern();
		Intern(Intern const& cpy);
		virtual ~Intern();

		Form*	makeForm(std::string name, std::string target);

		Intern&	operator=(Intern const& obj);
};