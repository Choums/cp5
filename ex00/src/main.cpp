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

int	empty_name(void)
{
	std::cout << " [ Invalid name ! ]" << std::endl;
	return (1);
}

int main(void)
{
	try
	{
		Bureaucrat emp1("Charles", 150);

		std::cout << emp1;
		emp1.DecreaseGrade();
		std::cout << emp1;
	}
	catch (Bureaucrat::LowGradeExeception& e) {
		std::cout << "--- low ----\n";
		std::cout << e.what() << std::endl;
	}
	catch (std::exception &name) {
		return (empty_name());
	}
	std::cout << "-----" << std::endl;

	try
	{
		Bureaucrat emp1("Gerard", 150);

		emp1.IncreaseGrade();
		std::cout << emp1;
	}
	catch (Bureaucrat::HighGradeExeception& e) {
		std::cout << "-------\n";
		std::cout << e.what() << std::endl;
	}
	catch (std::exception &name) {
		return (empty_name());
	}
	std::cout << "-----" << std::endl;

	try
	{
		Bureaucrat	emp2("Sarah", 2);

		std::cout << emp2;
		emp2.IncreaseGrade();
		std::cout << emp2;
		emp2.IncreaseGrade();
		std::cout << emp2;
	}
	catch (Bureaucrat::LowGradeExeception& e) {
		std::cout << "--- low ----\n";
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::HighGradeExeception& e) {
		std::cout << "--- high ----\n";
		std::cout << e.what() << std::endl;
	}
	catch (std::exception &name) {
		return (empty_name());
	}
	std::cout << "-----" << std::endl;
	return (0);
}