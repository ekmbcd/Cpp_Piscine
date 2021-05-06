#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{

public:

	Zombie(std::string name, std::string type);
	Zombie();
	~Zombie(void);
	void announce(void);

	void setName(std::string const & name);
	void setType(std::string const & type);

private:

	std::string	_name;
	std::string	_type;

};

#endif
