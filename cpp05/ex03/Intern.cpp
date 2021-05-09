#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern & src)
{
	*this = src;
}

Intern::~Intern()
{

}

Intern & Intern::operator=(const Intern & src)
{
	(void)src;
	return(*this);
}

Form * Intern::makeShrub(std::string const & target)
{
	return (new ShrubberyCreationForm(target));
}

Form * Intern::makeRobot(std::string const & target)
{
	return (new RobotomyRequestForm(target));
}

Form * Intern::makePres(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}

typedef Form * (Intern::*form_constr) (std::string const & target);

Form * Intern::makeForm(std::string const & name, std::string const & target)
{
	Form *ret;
	std::string	forms[3] = {
		"shrubbery creation", 
		"robotomy request", 
		"presidential pardon"
	};
	form_constr	functs[3] = {
		&Intern::makeShrub, 
		&Intern::makeRobot, 
		&Intern::makePres
	};

	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i])
		{
			ret = (this->*functs[i])(target);
			std::cout << "Intern creates " << forms[i] << std::endl;
			return (ret);
		}
	}
	std::cout << "Intern doesn't know how to make " << name <<  std::endl;
	return (NULL);
}