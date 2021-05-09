#include "Form.hpp"

Form::Form(std::string const & name, int sign, int exec) :
_name(name), _g_sign(sign), _g_exec(exec), _signed(false)
{
	if (_g_sign < 1 || _g_exec < 1)
		throw GradeTooHighException();
	if (_g_sign > 150 || _g_exec > 150)
		throw GradeTooLowException();
}

Form::Form(const Form & src) :
_name(src._name), _g_sign(src._g_sign), _g_exec(src._g_exec), _signed(false)
{
	*this = src;
}

Form::~Form()
{

}

Form & Form::operator=(const Form & src)
{
	_signed = src._signed;
	return(*this);
}

Form::Form() : _g_sign(150), _g_exec(150)
{

}

std::ostream & operator << (std::ostream & o, Form const & rhs)
{
	o << "Form " << rhs.getName() << " requires " << rhs.getGradeSign() << " to sign and " << rhs.getGradeExec() << " to execute. Signed: ";
	if (rhs.isSigned())
		o << "Yes.";
	else
		o << "No.";
	return (o);
}

std::string const & Form::getName() const
{
	return(_name);
}

bool Form::isSigned() const
{
	return(_signed);
}

int Form::getGradeSign() const
{
	return(_g_sign);
}

int Form::getGradeExec() const
{
	return(_g_exec);
}

void Form::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() > _g_sign)
		throw GradeTooLowException();
	else
		_signed = true;
}

void Form::execute(Bureaucrat const & executor) const
{
	if (!_signed)
		throw FormNotSignedException();
	if (executor.getGrade() > _g_exec)
		throw GradeTooLowException();
	else
		action();
}