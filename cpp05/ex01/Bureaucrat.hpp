#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
	Bureaucrat() {}

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
	
	Bureaucrat(std::string const & name, int grade);
	Bureaucrat(Bureaucrat const & src);
	Bureaucrat & operator = (Bureaucrat const & src);
	~Bureaucrat();

	int getGrade() const;
	std::string getName() const;

	void increment();
	void decrement();

	void signForm(Form & f) const;
};

std::ostream & operator << (std::ostream & o, Bureaucrat const & rhs);

#endif