#include "mutantstack.hpp"
#include <algorithm>

void print_int(int i)
{
	std::cout << i << " ";
}

int twice(int i)
{
	return(i * 2);
}

/* int		main(void)
{
	MutantStack<int> m;

	for (int i = 0; i < 10; i++)
	{
		m.push(i);
	}
	
	std::for_each(m.begin(), m.end(), print_int);
	
	m.pop();
	m.pop();
	m.pop();

	std::cout << std::endl;

	std::for_each(m.begin(), m.end(), print_int);

	std::cout << std::endl;

	std::transform(m.begin(), m.end(), m.begin(), twice);

	std::cout << std::endl;

	std::for_each(m.begin(), m.end(), print_int);

} */


int main()
{
	MutantStack<int>    mstack;

	mstack.push(1);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(2);
	mstack.push(3);
	mstack.push(4);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << std::endl;
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;

	std::stack<int> s(mstack);
	mstack.pop();
	mstack.pop();
	mstack.pop();

	while(!s.empty())
	{
		std::cout << s.top() << std::endl;
		s.pop();
	}

	return 0;
}
