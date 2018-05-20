#include <cassert>

#include "testString.h"

void caractereAPosition()
{
    String s = "chaine";

    assert(s.charAt(2) == 'a');
    assert(s.charAt(4) == 'n');
    assert(s.charAt(1) != 'c');
}

void verifierEffacement()
{
    String s = "chaine";
    s.clear();

    assert(s == "");
    assert(s != "chaine");
}

void comparerChaines()
{
    String str1 = "affaire";
    String str2 = "patente";

    assert(str1.compareTo(str2) < 0);
    assert(str1.compareTo(str1) == 0);
    assert(str2.compareTo(str1) > 0);
}

void positionCaractere()
{
    String s = "anticonstitutionnellement";
    char c = 'i';

    assert(s.indexOf('a') == 0);
    assert(s.indexOf('n') == 1);
    assert(s.indexOf('n') != 6);
    assert(s.indexOf(c) == 3);
}

void positionChaine()
{
    String s = "anticonstitutionnellement";
    String on = "on";

    assert(s.indexOf(on) == 5);
    assert(s.indexOf("on") == 5);
    assert(s.indexOf(on) != 14);
    assert(s.indexOf("on") != 14);
}

void tailleChaine()
{
    String s = "anticonstitutionnellement";
    assert(s.length() == 25);
}

void supprimerCaracteres()
{
    String chaineACouper = "anticonstitutionnellement";
    String coupee1 = chaineACouper;
    String coupee2 = chaineACouper;
    coupee1.remove(3);
    coupee2.remove(3, 4);

    assert(coupee1 == "ant");
    assert(coupee2 == "antstitutionnellement");
}

void extraireSousChaine()
{
    String s = "anticonstitutionnellement";

    assert(s.substring(7) == "stitutionnellement");
    assert(s.substring(7, 13) == "stituti");
}

void transformerEnEntier()
{
    String strInt1 = "12345";
    String strInt2 = "123foo";

    assert(strInt1.toInt() == 12345);
    assert(strInt2.toInt() == 123);
}

void allouerMemoireString()
{
    String* sp = new String("chaine");
    assert(*sp == "chaine");

    delete sp;
    assert(*sp != "chaine");

    sp = 0;
}
