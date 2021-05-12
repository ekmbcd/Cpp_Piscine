#include <iostream>
#include <algorithm>


template< typename T >
int easyfind(T arr, int n)
{
	typename T::const_iterator it; 
	it = std::find(arr.begin(), arr.end(), n);

	if (it == arr.end())
		throw std::runtime_error("Value not found");
	return (*it);
}