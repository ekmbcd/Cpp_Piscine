#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	Form *	makeShrub(std::string const & target);
	Form *	makeRobot(std::string const & target);
	Form *	makePres(std::string const & target);

public:
	Intern();
	Intern(Intern const & src);
	~Intern();

	Intern & operator = (Intern const & src);

	Form * makeForm(std::string const & name, std::string const & target);
};

#endif