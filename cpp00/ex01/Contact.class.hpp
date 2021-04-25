#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>
# include <iostream>
# include <iomanip>

const int MAX_CONTACTS = 8;
const int FIELD_WITDTH = 10;

class Contact
{

public:

	Contact(void);
	~Contact(void);

	static int	num;

	void		fill_contact(void);
	void 		print_index(int index) const;
	void		print_contact(void) const;

private:

	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_login;
	std::string	_postal;
	std::string	_email;
	std::string	_phone;
	std::string	_birthday;
	std::string	_meal;
	std::string	_underwear;
	std::string	_secret;

};

#endif