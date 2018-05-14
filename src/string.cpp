#include "string.h"

string::string()
{
    //ctor
}

string::~string()
{
    //dtor
}

char string::charAt(unsigned int indice) const
{
    return at(indice);
}
