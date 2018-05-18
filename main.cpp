#include <iostream>
#include <string>
#include <vector>

#include "include\String.h"

using namespace std;

int main()
{
    /*
    string str = "chaine";

    cout << "Test avec le string " << str << endl;

    cout << "Troisieme caractere: " << str.at(2) << endl;

    cout << "Position du caractere 'i': " << str.find('i') << endl;

    cout << "Position de la chaine \"ain\": " << str.find("ain") << endl;
    //*/

    String s = "chaine";

    /*
    String str ("chaine");
    String s = str;
    //*/

    //String s ("chaine");

    //String ain = "ain";
    String ain = s.substring(2, 4);
    String aine = s.substring(2);

    //*
    cout << "Test avec le string " << s << endl;

    cout << "Troisieme caractere: " << s.charAt(2) << endl;

    cout << "Position du caractere 'i': " << s.indexOf('i') << endl;

    cout << "Sous-chaine: " << aine << endl;

    cout << "Position de la chaine \"ain\": " << s.indexOf("ain") << endl;
    cout << "Position de la chaine \"ain\": " << s.indexOf(ain) << endl;

    vector<String*> strvec = vector<String*>();

    const int n = 10000000;

    // Essai de new avec String
    for(unsigned int i=0; i<n; i++)
    {
        strvec.push_back(new String("chaine"));
    }

    for(unsigned int i=0; i<10; i++)
    {
        cout << *strvec.at(i) << endl;
    }

    String a;
    cin >> a;

    // Essai du destructeur
    for(unsigned int i=0; i<n; i++)
    {
        delete strvec.at(i);
    }

    for(unsigned int i=0; i<10; i++)
    {
        cout << *strvec.at(i) << endl;
    }

    cin >> a;

    cout << a << endl;
    //*/

    return 0;
}
