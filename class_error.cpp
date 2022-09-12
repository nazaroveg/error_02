#include "class_error.h"



class_error::class_error(const std::string what)
{
	whado = what;
}

std::string class_error::what()
{
	return whado;
}

