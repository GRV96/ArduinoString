#include <cassert>

#include "testString.h"

void toutTester()
{
    constructeursAvecNombre();
    caractereAPosition();
    verifierEffacement();
    comparerChaines();
    concatenerAvecConcat();
    positionCaractere();
    positionChaine();
    tailleChaine();
    supprimerCaracteres();
    extraireSousChaine();
    transformerEnEntier();
    concatenerAvecPlus();
    concatenerAvecPlusEgal();
    allocationMemoireString();
}

void constructeursAvecNombre()
{
    String n1 = String(17);
    String n2 = String(23.1608);

    assert(n1 == "17");
    assert(n2 == "23.1608");
}

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

void concatenerAvecConcat()
{
    // Test avec int
    String s1 = "int";
    s1.concat(3);
    assert(s1 == "int3");

    String s2 = "int";
    s2.concat(-12);
    assert(s2 == "int-12");

    // Test avec double
    String s3 = "double";
    s3.concat(57.4132);
    assert(s3 == "double57.4132");

    String s4 = "double";
    s4.concat(-0.83716000000);
    assert(s4 == "double-0.83716");

    String s5 = "double";
    s5.concat(9214.603781820575872085);
    assert(s5 == "double9214.603782");

    // Test avec des chaînes de caractères
    String s6 = "chaine";
    s6.concat("str");
    assert(s6 == "chainestr");

    String s7 = "mot";
    s7.concat(s6);
    assert(s7 == "motchainestr");
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

void concatenerAvecPlus()
{
    String str1 = "affaire";
    String str2 = "patente";
    String somme = str1 + str2;

    assert(somme == "affairepatente");

    // Pour vérifier que les chaînes originales sont inchangées
    assert(str1 == "affaire");
    assert(str2 == "patente");

    assert(str1 + "essai" == "affaireessai");
    assert("tentative" + str2 == "tentativepatente");

    /* Opérandes invalides
    assert("essai" + "tentative" == "essaitentative");
    //*/

    assert(String("cossin") + "machin" == "cossinmachin");
}

void concatenerAvecPlusEgal()
{
    String str1 = "affaire";
    String str2 = "patente";

    str2 += str1;
    assert(str2 == "patenteaffaire");

    // Pour vérifier que str1 est inchangée
    assert(str1 == "affaire");
}

void allocationMemoireString()
{
    String* sp = new String("mot");
    assert(*sp == "mot");

    delete sp;
    assert(*sp != "mot");

    sp = 0;
}
