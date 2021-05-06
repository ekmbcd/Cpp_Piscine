#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class Pony
{

public:

	Pony(std::string name, std::string color, int speed);
	~Pony(void);
	void run(void);

private:

	std::string	_name;
	std::string	_color;
	int			_speed;

};

#endif
