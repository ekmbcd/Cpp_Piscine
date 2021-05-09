#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) :
Form("Presidential Pardon", 25, 5)
{
	srand(time(0));
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src) :
Form("Presidential Pardon", 25, 5)
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & src)
{
	_target = src._target;
	return(*this);
}

void PresidentialPardonForm::action() const
{
	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}