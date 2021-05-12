#include "iter.hpp"

class Test {
public:
	Test( void ) : a("Test") { }
	std::string a;
};

std::ostream & operator<<( std::ostream & o, Test const & rhs ) {
	o << rhs.a; 
	return o;
}

template< typename T >
void print( T & x ) 
{
	std::cout << x << std::endl;
}

int	main(void)
{
	int tab[] = { 0, 1, 2, 3, 4 };
	Test tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);

	return (0);
}