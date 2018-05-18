#ifndef STRING_H
#define STRING_H

#include <string>

class String : public std::string
{
    public:

        // Constructeurs
        String();
        String(const std::string& str);
        String(unsigned int n, char c);
        String(const char c[]);

        // Destructeur
        virtual ~String();

        // Méthodes à adapter
        String charAt(unsigned int indice) const;
        int indexOf(char c, unsigned int indice=0) const;
        int indexOf(const char* c, unsigned int indice=0) const;
        int indexOf(String const& str, unsigned int indice=0) const;

        String& operator=(std::string const& str);
        String& operator=(const char c[]);
};

#endif // STRING_H
