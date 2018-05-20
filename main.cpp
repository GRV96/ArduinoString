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

    /* Test toInt()
    String strInt1 = "12345";
    String strInt2 = "123foo";

    cout << "12345 + 1 = " << strInt1.toInt() + 1 << endl;
    cout << "123foo + 1 = " << strInt2.toInt() + 1 << endl;
    //cout << "chaine + 1 = " << s.toInt() + 1 << endl; // Lance l'exception std::invalid_argument.
    //*/

    /* Test remove()
    String chaineACouper = "anticonstitutionnellement";
    String coupee1 = chaineACouper;
    String coupee2 = chaineACouper;
    coupee1.remove(3);
    coupee2.remove(3, 4);

    cout << coupee1 << " " << coupee2 << endl;
    //*/

    /* Test size
    String chaineDeTaille = "taille";
    cout << "Taille de \"taille\": " << chaineDeTaille.length() << endl;
    //*/

    /* Test compareTo()
    String str1 = "affaire";
    String str2 = "patente";

    cout << "str1.compareTo(str2): " << str1.compareTo(str2) << endl;
    cout << "str2.compareTo(str1): " << str2.compareTo(str1) << endl;
    //*/

    /* Test +=
    String str1 = "affaire";
    String str2 = "patente";

    str2 += str1;
    cout << str2 << endl;
    //*/

    //* Test +
    String str1 = "affaire";
    String str2 = "patente";
    String somme = str1 + str2;

    cout << "str1 + str2: " << somme << endl;
    // Pour vérifier que les chaînes originales sont inchangées
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    //cout << "\"essai\" + \"tentative\": " << "essai" + "tentative" << endl;
    cout << str1 + "essai" << endl;
    cout << "tentative" + str2 << endl;
    //*/

    /* Essai de new avec String*
    String* sp = new String("chaine");
    cout << "Pointeur de String: " << *sp << endl;

    delete sp;
    cout << "Suppression du pointeur avec delete." << endl;

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
