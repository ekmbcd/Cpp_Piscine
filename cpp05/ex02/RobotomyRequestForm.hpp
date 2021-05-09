#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm() {}

public:
	RobotomyRequestForm(std::string const & target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	~RobotomyRequestForm();

	RobotomyRequestForm & operator = (RobotomyRequestForm const & src);

	void action() const;
};

#endif