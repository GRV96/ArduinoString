#include "String.h"

String::String(): std::string()
{
    // Appelle le constructeur de std::string.
}

String::String(std::string const& str): std::string(str)
{
    // Appelle le constructeur de std::string.
}

String::String(unsigned int n, char c): std::string(n, c)
{
    // Appelle le constructeur de std::string.
}

String::String(const char c[]): std::string(c)
{
    // Appelle le constructeur de std::string.
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

void String::remove(unsigned int debut, unsigned int nbr)
{
    *this = erase(debut, nbr);
}

String String::substring(unsigned int debut, unsigned int fin) const
{
    String s = substr(debut, fin-debut+1);
    return s;
}

long int String::toInt() const
{
    return std::stoi(*this);
}

String& String::operator =(std::string const& str)
{
    String s = String(str);
    return s;
}

String& String::operator =(const char c[])
{
    String s = String(c);
    return s;
}
