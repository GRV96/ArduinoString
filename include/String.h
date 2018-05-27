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

        // M�thodes � adapter
        char charAt(unsigned int indice) const;
        int compareTo(String const& str) const;
        void concat(int nombre);
        void concat(double nombre);
        void concat(const char* s);
        void concat(std::string str);
        int indexOf(char c, unsigned int indice=0) const;
        int indexOf(const char* c, unsigned int indice=0) const;
        int indexOf(String const& str, unsigned int indice=0) const;
        unsigned int length() const;
        void remove(unsigned int debut, unsigned int nbr=npos);
        String substring(unsigned int debut=0, unsigned int fin=npos) const;
        long int toInt() const;

        String& operator=(std::string const& str);
        String& operator=(const char c[]);

    private:
        static void eliminerZeros(std::string& nbStr);
};

#endif // STRING_H
