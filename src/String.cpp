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

String::String(const char c[]): std::string(c)
{
    //
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

int String::indexOf(const char* c, unsigned int indice) const
{
    return find(*c, indice);
}

int String::indexOf(String const& str, unsigned int indice) const
{
    return find(str, indice);
}

//*
String& String::operator =(std::string const& str)
{
    String s = String(str);
    return s;
}
//*/

//*
String& String::operator =(const char c[])
{
    String s = String(c);
    return s;
}
//*/
