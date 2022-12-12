/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:39:37 by root              #+#    #+#             */
/*   Updated: 2022/12/12 15:28:24 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main(void)
{
	Bureaucrat emp1("Charles", 150);
	
	std::cout << emp1;
	try
	{
		emp1.DecreaseGrade();
		std::cout << emp1;
	}
	catch (Bureaucrat::LowGradeExeception& e)
	{
		std::cout << "-------\n";
		std::cout << e.what() << std::endl;
	}
	catch (std::exception& e)
	{std::cout << "----3---\n";
		std::cout << "err\n";
	}
	return (0);
}