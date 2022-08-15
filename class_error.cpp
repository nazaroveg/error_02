#include "class_error.h"

class_error::class_error(const char* what) : std::exception(what)
{	
}


