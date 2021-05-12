#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>

class Span
{
private:
	std::vector<int> _nums;
	unsigned int _len;
	Span() {}

public:
	class FullException : public std::exception
	{
	public:
		virtual const char * what() const throw()
		{
			return ("Span is full!");
		}
	};

	class NoSpanException : public std::exception
	{
	public:
		virtual const char * what() const throw()
		{
			return ("There is no span to find!");
		}
	};

	Span(unsigned int N);
	Span(Span const & src);
	~Span();

	Span & operator = (Span const & src);

	void addNumber(int n);
	int shortestSpan() const;
	int longestSpan() const;

};

#endif