#include "Span.hpp"

Span::Span(unsigned int N) : _len(N)
{
}

Span::Span(const Span & src)
{
	*this = src;
}

Span::~Span()
{

}

Span & Span::operator=(const Span & src)
{
	_nums = src._nums;
	_len = src._len;
	return(*this);
}

void Span::addNumber(int n)
{
	if (_nums.size() >= _len )
		throw FullException();
	_nums.push_back(n);
}

int Span::shortestSpan() const
{
	if (_nums.size() < 2)
		throw NoSpanException();

	std::vector<int> tmp(_nums);
	unsigned int i = 1;
	int min = INT_MAX;

	std::sort(tmp.begin(), tmp.end());
	while (i < tmp.size())
	{
		if (tmp[i] - tmp[i - 1] < min)
			min = tmp[i] - tmp[i - 1];
		i++;
	}
	return(min);
}

int Span::longestSpan() const
{
	if (_nums.size() < 2)
		throw NoSpanException();
	return (*(std::max_element(_nums.begin(), _nums.end())) -
	 *(std::min_element(_nums.begin(), _nums.end())));
}

