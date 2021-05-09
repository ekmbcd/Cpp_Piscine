#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const & name, int grade) :
_name(name)
{
	if (grade < 1)
		throw GradeTooLowException();
	if (grade > 150)
		throw GradeTooHighException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & src) :
_name(src.getName())
{
	*this = src;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & src)
{
	_grade = src.getGrade();
	return(*this);
}

int Bureaucrat::getGrade() const
{
	return(_grade);
}

std::string Bureaucrat::getName() const
{
	return(_name);
}


void Bureaucrat::increment()
{
	if (_grade <= 1)
	{
		throw GradeTooHighException();
	}
	_grade--;
	
}

void Bureaucrat::decrement()
{
	if (_grade >= 150)
	{
		throw GradeTooLowException();
	}
	_grade++;
}

std::ostream & operator << (std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (o);
}

void Bureaucrat::signForm(Form & f) const
{
	try
	{
		f.beSigned(*this);
		std::cout << _name << " signs " << f.getName() << std::endl;
	}
	catch(Form::GradeTooLowException & e)
	{
		std::cerr << _name << " cannot sign " << f.getName() << " because " << e.what() << std::endl;
	}
	
}

void Bureaucrat::executeForm(Form const & f)
{
	try
	{
		f.execute(*this);
		std::cout << _name << " executes " << f.getName() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << _name << " cannot execute " << f.getName() << " because " << e.what() << std::endl;
	}
}