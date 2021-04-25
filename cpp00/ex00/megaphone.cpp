#include <iostream>

void megaphone(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		std::cout << (char)std::toupper(str[i]);
		i++;
	}
	std::cout << " ";
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac > 1)
	{
		while (++i < ac)
			megaphone(av[i]);	
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}
