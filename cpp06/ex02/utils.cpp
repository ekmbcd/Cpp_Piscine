#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_reference( Base & p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::bad_cast & _)
	{}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::bad_cast & _)
	{}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::bad_cast & _)
	{}
}

void identify_from_pointer(Base * p)
{
	A * a = dynamic_cast<A *>(p);
	if (a)
	{
		std::cout << "A" << std::endl;
		return ;
	}
		
	B * b = dynamic_cast<B *>(p);
	if (b)
	{
		std::cout << "B" << std::endl;
		return ;
	}

	C * c = dynamic_cast<C *>(p);
	if (c)
	{
		std::cout << "C" << std::endl;
		return ;
	}

}