#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	cristiano("Cristiano", 2);
		std::cout << cristiano << std::endl;
		cristiano.increment();
		std::cout << cristiano << std::endl;
		cristiano.increment();
		std::cout << cristiano << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	umberto("Umberto", 149);
		std::cout << umberto << std::endl;
		umberto.decrement();
		std::cout << umberto << std::endl;
		umberto.decrement();
		std::cout << umberto << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
	return (0);
}