#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	std::string buf;
	std::ifstream file;
	int i = 0;

	while (++i < ac)
	{
		file.open(av[i]);
		if (!file.is_open())
		{
			std::cout << "cat: " << av[i] << ": No such file or directory" << std::endl;
			continue ;
		}
		std::getline(file, buf, '\0');
		std::cout << buf << std::endl;
		file.close();
	}
	if (ac == 1)
	{
		while (std::cin >> buf)
		{
			std::cout << buf << std::endl;
		}
		
	}
	return (0);
}