#include <iostream>
#include <sstream>
#include <iomanip>

void checkChar(char c)
{
	if (c < 32 || c > 126)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : " << c << std::endl;
}

void printInt(std::string input)
{
	std::istringstream ss(input);
	int n;
	ss >> n;
	checkChar(static_cast<char>(n));
	std::cout << "int : " << n << std::endl;
	std::cout << "float : " << static_cast<float>(n) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(n) << ".0" << std::endl;
}

void printChar(std::string input)
{
	std::istringstream ss(input);
	char c;
	ss >> c;
	std::cout << "char : " << c << std::endl;
	std::cout << "int : " << static_cast<int>(c) << std::endl;
	std::cout << "float : " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(c) << ".0" << std::endl;
}

void printDouble(std::string input)
{
	std::istringstream ss(input);
	double d;
	ss >> d;
	checkChar(static_cast<char>(d));
	std::cout << "int : " << static_cast<int>(d) << std::endl;
	if (d == static_cast<int>(d))
	{
		std::cout << "float : " << static_cast<float>(d) << ".0f" << std::endl;
		std::cout << "double : " << d << ".0" << std::endl;
	}
	else
	{
		std::cout << "float : " << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double : " << d << std::endl;
	}
}

void printFloat(std::string input)
{
	input.resize(input.size() - 1);
	std::istringstream ss(input);
	float f;
	ss >> f;
	checkChar(static_cast<char>(f));
	std::cout << "int : " << static_cast<int>(f) << std::endl;
	if (f == static_cast<int>(f))
	{
		std::cout << "float : " << f << ".0f" << std::endl;
		std::cout << "double : " << static_cast<double>(f) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float : " << f << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(f) << std::endl;
	}
}

void printSpecialDouble(std::string input)
{
	std::cout << "char : impossible" << std::endl;
	std::cout << "int : impossible" << std::endl;
	std::cout << "float : " << input << "f" << std::endl;
	std::cout << "double : " << input << std::endl;
}

void printSpecialFloat(std::string input)
{
	input.resize(input.size() - 1);
	printSpecialDouble(input);
}

void printError()
{
	std::cout << "char : impossible" << std::endl;
	std::cout << "int : impossible" << std::endl;
	std::cout << "float : impossible" << std::endl;
	std::cout << "double : impossible" << std::endl;
}

int isSpecial(std::string input)
{
	if (input == "-inff" || input == "+inff" || input == "nanf")
	{
		printSpecialFloat(input);
		return (1);
	}
		
	if (input == "-inf" || input == "+inf" || input == "nan")
	{
		printSpecialDouble(input);
		return (1);
	}
	return(0);
}

int isChar(std::string input)
{
	if (input.size() == 1 && ((input[0] >= 32 && input[0] < '0') ||
		(input[0] > '9' && input[0] < 127)))
		return (1);
	return (0);
}

int isInt(std::string input)
{
	int i = 0;
	if (input[0] == '-')
		i++;
	while (input[i])
	{
		if (input[i] < '0' || input[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int isFloat(std::string input)
{
	int i = 0;
	bool point = false;
	if (input[0] == '-')
		i++;
	while (input[i] && input[i] != 'f')
	{
		if (input[i] == '.')
		{
			if (point)
				return (0);
			point = true;
		}
		else if (input[i] < '0' || input[i] > '9')
			return (0);
		i++;
	}
	if (input[i] != 'f' || input[i + 1] != 0)
		return (0);
	return (1);
}

int isDouble(std::string input)
{
	int i = 0;
	bool point = false;
	if (input[0] == '-')
		i++;
	while (input[i])
	{
		if (input[i] == '.')
		{
			if (point)
				return (0);
			point = true;
		}
		else if (input[i] < '0' || input[i] > '9')
			return (0);
		i++;
	}
	if (input[i] != 0)
		return (0);
	return (1);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "The program requires 1 parameter" << std::endl;
		return (1);
	}
	std::string input = av[1];
	std::istringstream ss(av[1]);

	if (isChar(av[1]))
		printChar(av[1]);
	else if (isInt(av[1]))
		printInt(av[1]);
	else if (isFloat(av[1]))
		printFloat(av[1]);
	else if (isDouble(av[1]))
		printDouble(av[1]);
	else if (isSpecial(av[1]))
		;
	else
		printError();
}