#include "Contact.class.hpp"

int		Contact::num = 0;

Contact::Contact(void)
{
	Contact::num++;
	return;
}

Contact::~Contact(void)
{
	Contact::num--;
	return;
}

void	Contact::fill_contact(void)
{
	std::cout << "\n\e[1;37mFirst Name: \e[0m"; 
	std::getline(std::cin, _firstname);
	std::cout << "\e[1;37mLast Name: \e[0m";
	std::getline(std::cin, _lastname);
	std::cout << "\e[1;37mNickname: \e[0m";
	std::getline(std::cin, _nickname);
	std::cout << "\e[1;37mLogin: \e[0m";
	std::getline(std::cin, _login);
	std::cout << "\e[1;37mPostal Address: \e[0m";
	std::getline(std::cin, _postal);
	std::cout << "\e[1;37mEmail Address: \e[0m";
	std::getline(std::cin, _email);
	std::cout << "\e[1;37mPhone Number: \e[0m";
	std::getline(std::cin, _phone);
	std::cout << "\e[1;37mBirthday Date: \e[0m";
	std::getline(std::cin, _birthday);
	std::cout << "\e[1;37mFavorite Meal: \e[0m";
	std::getline(std::cin, _meal);
	std::cout << "\e[1;37mUnderwear Color: \e[0m";
	std::getline(std::cin, _underwear);
	std::cout << "\e[1;37mDarkest Secret: \e[0m";
	std::getline(std::cin, _secret);
	std::cout << "\n\e[0;32mContact Created.\e[0m" << std::endl;
}

void	Contact::print_contact(void) const
{
	std::cout << "\n\e[1;37mFirst Name: \e[0m"; 
	std::cout << _firstname << std::endl;
	std::cout << "\e[1;37mLast Name: \e[0m";
	std::cout <<  _lastname << std::endl;
	std::cout << "\e[1;37mNickname: \e[0m";
	std::cout <<  _nickname << std::endl;
	std::cout << "\e[1;37mLogin: \e[0m";
	std::cout << _login << std::endl;
	std::cout << "\e[1;37mPostal Address: \e[0m";
	std::cout << _postal << std::endl;
	std::cout << "\e[1;37mEmail Address: \e[0m";
	std::cout << _email << std::endl;
	std::cout << "\e[1;37mPhone Number: \e[0m";
	std::cout << _phone << std::endl;
	std::cout << "\e[1;37mBirthday Date: \e[0m";
	std::cout << _birthday << std::endl;
	std::cout << "\e[1;37mFavorite Meal: \e[0m";
	std::cout << _meal << std::endl;
	std::cout << "\e[1;37mUnderwear Color: \e[0m";
	std::cout << _underwear << std::endl;
	std::cout << "\e[1;37mDarkest Secret: \e[0m";
	std::cout << _secret << std::endl;
}

void	truncate(std::string str)
{
	int i = 0;

	while (i < 9)
	{
		std::cout << str[i++];
	}
	std::cout << ".|";
}

void	Contact::print_index(int index) const
{
	std::cout << std::setw(10) << index << "|";
	if (_firstname.length() <= 10)
		std::cout << std::setw(10) << _firstname << "|";
	else
		truncate(_firstname);
	if (_lastname.length() <= 10)
		std::cout << std::setw(10) << _lastname << "|";
	else
		truncate(_lastname);
	if (_nickname.length() <= 10)
		std::cout << std::setw(10) << _nickname << "|";
	else
		truncate(_nickname);
	std::cout << std::endl;
}