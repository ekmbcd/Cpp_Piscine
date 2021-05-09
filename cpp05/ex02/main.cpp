#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat				bob("Bob", 50);
	Bureaucrat				adam("Adam", 1);
	ShrubberyCreationForm	shrub("home");
	RobotomyRequestForm		robot("Mario");
	PresidentialPardonForm	pres("Barabba");

	bob.executeForm(shrub);

	bob.signForm(shrub);
	bob.executeForm(shrub);

	bob.signForm(robot);
	bob.executeForm(robot);

	bob.signForm(pres);
	bob.executeForm(pres);

	adam.signForm(pres);
	adam.executeForm(pres);

	return (0);
}
