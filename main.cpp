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

    cout << "Test avec le string " << s << endl;

    cout << "Troisieme caractere: " << s.charAt(2) << endl;

    cout << "Position du caractere 'i': " << s.indexOf('i') << endl;

    cout << "Sous-chaine: " << aine << endl;

    cout << "Position de la chaine \"ain\": " << s.indexOf("ain") << endl;
    cout << "Position de la chaine \"ain\": " << s.indexOf(ain) << endl;

    // Pas besoin d'implémenter clear. Apparamment, n'existe pas dans Arduino.
    s.clear();
    cout << "s.clear(): " << s << "." << endl << endl;

    //* Essai de new avec String*
    String* sp = new String("chaine");
    cout << "Pointeur de String: " << *sp << endl;

    delete sp;
    cout << "Suppression du pointeur." << endl;

    cout << "Pointeur de String: " << *sp << endl;

    sp = 0;
    cout << "Mise a zero du pointeur." << endl;

    /* Fait planter le programme.
    cout << "Pointeur de String: " << *sp << endl;
    //*/

    /* Essai de new avec vector<String*>
    vector<String*> strvec = vector<String*>();

    const int n = 10000000;

    for(unsigned int i=0; i<n; i++)
    {
        strvec.push_back(new String("chaine"));
    }

    for(unsigned int i=0; i<10; i++)
    {
        cout << i << " " << *strvec.at(i) << endl;
    }

    String a;
    cin >> a; // Pour arrêter le programme

    // Essai du destructeur
    for(unsigned int i=0; i<n; i++)
    {
        delete strvec.at(i);
    }

    for(unsigned int i=0; i<10; i++)
    {
        cout << i << " " << *strvec.at(i) << endl;
    }

    cin >> a; // Pour arrêter le programme

    cout << a << endl;
    //*/

    return 0;
}
