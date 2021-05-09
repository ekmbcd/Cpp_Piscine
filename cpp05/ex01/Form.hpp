#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const	_name;
	int const			_g_sign;
	int const			_g_exec;
	bool				_signed;
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

	Form(std::string const & name, int sign, int exec);
	Form(Form const & src);
	Form & operator = (Form const & src);
	~Form();

	std::string const & getName() const;
	bool isSigned() const;
	int getGradeSign() const;
	int getGradeExec() const;

	void beSigned(Bureaucrat const & b);
};

std::ostream & operator << (std::ostream & o, Form const & rhs);

#endif