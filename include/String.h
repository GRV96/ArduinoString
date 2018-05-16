#ifndef STRING_H
#define STRING_H

#include <string>

class String : public std::string
{
    public:
        String();
        String(const std::string& str);
        String(unsigned int n, char c);
        virtual ~String();
        String charAt(unsigned int indice) const;
        int indexOf(char c, unsigned int indice=0) const;
        int indexOf(const String& str, unsigned int indice=0) const;

        String operator=(const char[] c);

    protected:

    private:
};

#endif // STRING_H
