#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main()
{
	std::vector<int> vec;
	std::list<int> lst;

	for ( int i = 0 ; i < 10 ; i++ )
	{
		vec.push_back(i);
		lst.push_back(i);
	}

	int		pos;

	std::cout << "Vectors :" << std::endl;
	try
	{
		pos = easyfind(vec, 4);
		std::cout << "Found " << 4 << " in vector at position " << pos << std::endl;
		pos = easyfind(vec, 8);
		std::cout << "Found " << 8 << " in vector at position " << pos << std::endl;
		pos = easyfind(vec, 12);
		std::cout << "Found " << 12 << " in vector at position " << pos << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
	std::cout << std::endl;



	std::cout << "Lists :" << std::endl;
	try
	{
		pos = easyfind(lst, 4);
		std::cout << "Found " << 4 << " in list at position " << pos << std::endl;
		pos = easyfind(lst, 8);
		std::cout << "Found " << 8 << " in list at position " << pos << std::endl;
		pos = easyfind(lst, 12);
		std::cout << "Found " << 12 << " in list at position " << pos << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}

	return (0);
}