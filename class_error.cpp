#include "class_error.h"

class_error::class_error(const std::string &what) : std::exception("")
{
	std::cout << what << std::endl;
	
}
