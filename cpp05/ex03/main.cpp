#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat	john("John", 1);
	Intern		intern;
	Form		*form;

	form = intern.makeForm("shrubbery creation", "home");

	john.signForm(*form);
	john.executeForm(*form);
	delete form;

	form = intern.makeForm("robotomy request", "Mario");

	john.signForm(*form);
	john.executeForm(*form);
	delete form;


	form = intern.makeForm("presidential pardon", "Barabba");

	john.signForm(*form);
	john.executeForm(*form);
	delete form;


	form = intern.makeForm("wrong", "error");
	delete form;


	return (0);
}
