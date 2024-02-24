//  & -> maka adresse ana variable
//  * -> maka ny valeur ao anatinl'ilay adresse pointé
#include <stdio.h>

/*
    Pointeur : variable contenant l'adresse d'une autre variable
    %d -> affiche une adresse de variable ou pointeur

    [VARIABLES]
        maVariable  :   valeur de la variable
        &maVariable :   adresse de la variable
    
    [POINTEUR]
        *monPointeur = NULL ou *monPointeur = &maVariable
        (déclaration et initialisation d'un pointeur)

        monPointeur     : adresse de la variable pointée
        *monPointeur    : valeur de la variable pointée
        &monPointeur    : adresse du pointeur
*/

// tonga de ilay reference no nalaina fa tsy ilay copie anle variable no nampiasaina tao anatinle fonction, izany no
// nahatonga anle anle variable tsy ecraser rehefa tafiala ao anaty fonction ny execution anle code
void mifamadika(int *nbr1, int *nbr2) // (!!!) syntaxe rehefa ametraka anle arguments ao anatin'ilay function : (<type_var> *<nom_arg>,...)
{
    int temporaire = 0;
    
    temporaire = *nbr1;
    *nbr1 = *nbr2;
    *nbr2 = temporaire;
}

int main(void)
{
    int nombreA = 25;
    int nombreB = 9;

    // declaration d'une variable pointeur : <type_variable> *<nom_var> = &<nom_var_pointer>
    int *pointerNombreA = &nombreA;
    int *pointerNombreB = &nombreB;

    printf("AVANT: nombreA = %d et nombreB = %d \n", nombreA,nombreB);

    // rehefa function passage par adresse ilay izy dia tsy maintsy adresse an'ilay variable no atao ao anaty an'ilay parametre
    mifamadika(&nombreA,&nombreB); // ampiana & eo alohan'ny variable satria io no miteny hoe passage par adresse ilay paramettre (!!!) syntaxe
    printf("APRES: nombreA = %d et nombreB = %d \n", nombreA, nombreB);
    mifamadika(pointerNombreA,pointerNombreB);

    printf("EN FIN: nombreA = %d et nombreB = %d", nombreA,nombreB);

    return 0;
}