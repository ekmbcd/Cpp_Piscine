#include "Logger.hpp"

Logger::Logger(std::string file) : _file(file) { }

void Logger::logToConsole(std::string const & message)
{
	std::cout << message << std::endl;
}

void Logger::logToFile(std::string const & message)
{
	std::ofstream file(_file, std::ofstream::app);
	if (file.good())
		file << message << std::endl;
	file.close();
}

std::string Logger::makeLogEntry(std::string const & message)
{
	std::ostringstream outstream;
	time_t t = time(0);
	struct tm *tm = localtime(&t);

	outstream << std::put_time(tm,"[%Y/%m/%d_%H:%M:%S] ") << message;
	return(outstream.str());
}

void Logger::log(std::string const & dest, std::string const & message)
{
	std::string	where[] = {
		"console",
		"file"
	};

	void (Logger::*methods[])(std::string const & message) = {
		&Logger::logToConsole, 
		&Logger::logToFile
	};

	std::string msg;

	msg = makeLogEntry(message);
	for (int i = 0; i < 2; i++)
	{
		if (dest == where[i])
		{
			(this->*methods[i])(msg);
			break;
		}
			
	}
}