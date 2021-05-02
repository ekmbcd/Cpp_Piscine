#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

class Logger
{

public:

	Logger(std::string file);
	void log(std::string const & dest, std::string const & message);

private:	
	
	void logToConsole(std::string const & message);
	void logToFile(std::string const & message);
	std::string makeLogEntry(std::string const & message);

	std::string _file;

	
};

#endif