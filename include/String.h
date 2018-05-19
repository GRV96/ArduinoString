#ifndef STRING_H
#define STRING_H

#include <string>

class String : public std::string
{
    public:

        // Constructeurs
        String();
        String(std::string const& str);
        String(unsigned int n, char c);
        String(const char c[]);

        // Destructeur
        virtual ~String();

        // M�thodes � adapter
        String charAt(unsigned int indice) const;
        int indexOf(char c, unsigned int indice=0) const;
        int indexOf(const char* c, unsigned int indice=0) const;
        int indexOf(String const& str, unsigned int indice=0) const;
        void remove(unsigned int debut, unsigned int nbr=npos);
        unsigned int length() const;
        String substring(unsigned int debut, unsigned int fin=-1) const;
        long int toInt() const;

        String& operator=(std::string const& str);
        String& operator=(const char c[]);
};

#endif // STRING_H
