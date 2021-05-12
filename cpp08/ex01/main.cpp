#include "Span.hpp"

int main()
{
	Span sp1 = Span(10000);
	Span sp10 = Span(10000);

	try
	{
		for (int i = 0; i < 10000; i++)
		{
			sp1.addNumber(i);
			sp10.addNumber(i * 10);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "shortest sp1: " << sp1.shortestSpan() << std::endl;
	std::cout << "longest sp1: " << sp1.longestSpan() << std::endl;

	std::cout << "shortest sp10: " << sp10.shortestSpan() << std::endl;
	std::cout << "longest sp10: " << sp10.longestSpan() << std::endl;

	try
	{	
		sp1.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}