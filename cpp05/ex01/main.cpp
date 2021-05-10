#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Form	wrong("Wrong", 150, 0);
		std::cout << wrong << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}

	try
	{
		Form		good("Good", 50, 1);
		Bureaucrat	boss("Boss", 10);
		Bureaucrat	drone("Drone", 100);

		std::cout << good << std::endl;
		drone.signForm(good);
		std::cout << good << std::endl;
		boss.signForm(good);
		std::cout << good << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception : " << e.what() << std::endl;

	}
	

	return (0);
}