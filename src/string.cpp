#include "String.h"

String::String()
{
    //ctor
}

String::String(const std::string& str): std::string(str)
{
    //
}

String::String(unsigned int n, char c): std::string(n, c)
{
    //ctor
}

String::~String()
{
    //dtor
}

String String::charAt(unsigned int indice) const
{
    char c = at(indice);
    return String(1, c);
}

int String::indexOf(char c, unsigned int indice) const
{
    return find(c, indice);
}

int String::indexOf(const String& str, unsigned int indice) const
{
    return find(str, indice);
}

String String::operator =(const char[] c)
{
    return String(c);
}
