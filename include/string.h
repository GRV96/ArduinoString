#ifndef STRING_H
#define STRING_H

class string : public std::string
{
    public:
        String();
        virtual ~String();
        char charAt(unsigned int indice) const;
        unsigned int indexOf(char c) const;
        unsigned int indexOf(char c, unsigned int indice) const;

    protected:

    private:
};

#endif // STRING_H
