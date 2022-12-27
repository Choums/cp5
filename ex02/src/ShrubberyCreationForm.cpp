/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:15:24 by marvin            #+#    #+#             */
/*   Updated: 2022/12/27 17:15:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

	/*  Constructors/Destructor */
ShrubberyCreationForm::ShrubberyCreationForm(std::string const& name, std::string const& target) : Form(name, 145, 137, target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& cpy) : Form(cpy)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << RED << "[ Shrubbery Form " << this->_name << " has been erased ! ]" << END << std::endl;
}

	/*	Methods */
void	ShrubberyCreationForm::execute_form()
{
	std::ofstream	ofs;

	ofs.open(getTarget() + "_shrubbery", std::ofstream::out);

	if (!ofs.is_open())
		return ;
	

	ofs << "                   \\  _  / " << std::endl;
    ofs << "                    (\\o/) " << std::endl;
    ofs << "                ---  / \\  --- " << std::endl;
    ofs << "                     >*< " << std::endl;
    ofs << "                    >0<@>< " << std::endl;
    ofs << "                   >>>@<<* " << std::endl;
    ofs << "                  >@>*<0<<< " << std::endl;
    ofs << "                 >*>>@<<<@><< " << std::endl;
    ofs << "                >@>>0<<<*<<@>< " << std::endl;
    ofs << "               >*>>0<<@><<<@><<< " << std::endl;
    ofs << "              >@>>*<<@><>*<<0<*< " << std::endl;
    ofs << "             >0>>*<<@><>0><<*<@><< " << std::endl;
    ofs << "            >*>>@><0<<*>>@><*<0<< | " << std::endl;
    ofs << "           >@>>0<*<<0>>@<<0<<<*<@><| " << std::endl;
    ofs << "           >((*))_>0><*<0><@><<<0<*< " << std::endl;
    ofs << "         ||.*.*.*.|>>@<<*<<@>><0<<<((=_| " << std::endl;
    ofs << "         ||.*.*.*.|>>@<<*<<@>><0<<<((=_| " << std::endl;
	ofs.close();
}

	/*	Assignment Operator */
ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& obj)
{
	if (this != &obj)
		Form::operator=(obj);
	return (*this);
}