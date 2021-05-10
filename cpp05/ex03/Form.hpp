#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
protected:
	std::string const	_name;
	int const			_g_sign;
	int const			_g_exec;
	bool				_signed;
	std::string 		_target;
	Form();

public:
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char * what() const throw()
		{
			return ("Grade too high!");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char * what() const throw()
		{
			return ("Grade too low!");
		}
	};

	class FormNotSignedException : public std::exception
	{
	public:
		virtual const char * what() const throw()
		{
			return ("Form is not signed yet!");
		}
	};

	Form(std::string const & name, int sign, int exec);
	Form(Form const & src);
	Form & operator = (Form const & src);
	virtual ~Form();

	std::string const & getName() const;
	bool isSigned() const;
	int getGradeSign() const;
	int getGradeExec() const;

	void beSigned(Bureaucrat const & b);
	void execute(Bureaucrat const & executor) const;
	virtual void action() const = 0;
};

std::ostream & operator << (std::ostream & o, Form const & rhs);

#endif