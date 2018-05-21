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
        String(int nombre);
        String(double nombre);

        // Destructeur
        virtual ~String();

        // Méthodes à adapter
        char charAt(unsigned int indice) const;
        int compareTo(String const& str) const;
        int indexOf(char c, unsigned int indice=0) const;
        int indexOf(const char* c, unsigned int indice=0) const;
        int indexOf(String const& str, unsigned int indice=0) const;
        unsigned int length() const;
        void remove(unsigned int debut, unsigned int nbr=npos);
        String substring(unsigned int debut, unsigned int fin=-1) const;
        long int toInt() const;

        String& operator=(std::string const& str);
        String& operator=(const char c[]);

        //String& operator+(const char c[]) const;
};

#endif // STRING_H
