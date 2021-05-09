#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) :
Form("Robotomy Request", 145, 137)
{
	srand(time(0));
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src) :
Form("Robotomy Request", 72, 45)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & src)
{
	_target = src._target;
	return(*this);
}

void RobotomyRequestForm::action() const
{
	int i = rand() % 2;
	if (i)
		std::cout << "BZZZZZZT... " << _target << " has successfully been robotomized! For Science!" << std::endl;
	else
		std::cout << "BZZZZZZT... I'm afraid we have some bad news about " << _target << "..." << std::endl;
}