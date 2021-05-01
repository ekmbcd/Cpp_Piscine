#include <iostream>
#include <fstream>

int main(int argc, char const **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace [filename] [s1] [s2]" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string tofind = argv[2];
	std::string tosub = argv[3];

	if (tofind == "" || tosub == "")
	{
		std::cout << "Strings cannot be empty." << std::endl;
		return 1;
	}

	std::ifstream input(filename);

	if (!input)
	{
		std::cout << "Error opening file '" << filename << "'." << std::endl;
		return 1;
	}	

	std::ofstream output(filename + ".replace");

	if (!output)
	{
		std::cout << "Error writing file '" << filename << ".replace'." << std::endl;
		return 1;
	}

	std::string line;
	
	while (std::getline(input, line))
	{
		while (line.find(tofind) != std::string::npos)
			line.replace(line.find(tofind), tofind.length(), tosub);
		output << line;
		if (!input.eof())
			output << std::endl;
	}
	input.close();
	output.close();
	
	return 0;
}
