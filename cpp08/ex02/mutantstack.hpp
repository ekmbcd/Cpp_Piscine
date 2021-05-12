#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

class MutantStack : std::stack
{
private:

public:
	MutantStack();
	MutantStack(MutantStack const & src);
	~MutantStack();

	MutantStack & operator = (MutantStack const & src);
};

#endif