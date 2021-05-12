#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template< typename T >
class MutantStack : public std::stack<T>
{
private:

public:
	MutantStack();
	MutantStack(MutantStack const & src);
	~MutantStack();

	MutantStack	& operator = (MutantStack const & src);

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin();
	iterator end();

};

template <typename T>
MutantStack<T> & MutantStack<T>::operator = (MutantStack const & src)
{
	this->c = src.c;
	return (*this);
}

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack & src) : std::stack<T>(src)
{
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return (this->c.end());
}

#endif