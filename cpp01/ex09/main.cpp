#include "Logger.hpp"
#include <unistd.h>

int	main(void)
{
	Logger	l("file");

	l.log("console", "Initializing...");
	usleep(1000000);
	l.log("console", "Running...");
	usleep(1000000);

	l.log("file", "In file...");
	usleep(1000000);
	l.log("file", "Writing...");
	usleep(1000000);
	l.log("file", "Closing file...");
	usleep(1000000);

	l.log("console", "Exiting...");
	return (0);
}