#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template< typename T >
class Array
{
private:
	T * 			_arr;
	unsigned int	_len;

public:
	Array();
	Array(unsigned int n);
	Array(Array<T> const & src);
	~Array();

	Array & operator = (Array const & src);
	T & operator [] (int i) const;

	unsigned int size() const;
};


template<typename T>
Array<T>::Array() :  _arr(NULL), _len(0)
{
}

template< typename T >
Array<T>::Array(unsigned int n) : _len(n)
{
	T *tmp = new T();

	_arr = new T[n];
	for (unsigned int i = 0 ; i < n ; i++)
		_arr[i] = *tmp;
}

template< typename T >
Array<T>::Array(const Array & src) : _arr(0)
{
	*this = src;
}

template<typename T>
Array<T>::~Array()
{
	delete [] _arr;
}

template< typename T >
Array<T> & Array<T>::operator=(const Array<T> & src)
{
	delete [] _arr;
	_len = src._len;
	_arr = new T[src.size()];
	for (unsigned int i = 0; i < _len; i++)
		_arr[i] = src[i];
	return(*this);
}

template< typename T >
T & Array<T>::operator [] (int i) const
{
	if (i >= (int)_len || i < 0)
		throw std::exception();
	return (_arr[i]);
}

template< typename T >
unsigned int Array<T>::size() const
{
	return (_len);
}

#endif