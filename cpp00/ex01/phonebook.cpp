#include "Contact.class.hpp"

void	indexed(Contact contacts[8], int count)
{
	int i = 0;

	std::cout << "\e[1;37m     Index|First Name| Last Name|  Nickname|\e[0m" << std::endl;
	while (i < count)
	{
		contacts[i].print_index(i);
		i++;
	}
	std::cout << std::endl;
}

int		get_index(int i)
{
	int ret = -1;

	while (ret < 0 || ret >= i)
	{
		std::cout << "Enter Index: ";
		if (!(std::cin >> ret))
		{
			std::cin.clear();
			std::cin.ignore(256, '\n');
			ret = -1;
		}
	}
	std::cin.ignore();
	return (ret);
}

int		main()
{
	std::string	cmd = "";
	Contact		contacts[8];
	int			i = 0;

	std::cout << "\033c\n\e[0;34m         🄿 🄷 🄾 🄽 🄴 🄱 🄾 🄾 🄺 \e[0m\n";

	while (cmd != "EXIT")
	{	
		std::cout << "\n\033[0;96m>Available commands: ADD, SEARCH, EXIT\033[0m" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			if (i >= 3)
			{
				std::cout << "\e[0;31mSorry, Phonebook is full. :(\e[0m" << std::endl;
			}
			else
				contacts[i++].fill_contact();
		}
		else if (cmd == "SEARCH")
		{
			if (i > 0)
			{
				indexed(contacts, i);
				contacts[get_index(i)].print_contact();
			}
			else
				std::cout << "\e[0;31mPhonebook is empty.\e[0m" << std::endl;
		}
	}
	
}