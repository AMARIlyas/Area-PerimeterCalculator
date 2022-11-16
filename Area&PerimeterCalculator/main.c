#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Déclaration des varibales
    float surface, perimetre;
    float longueur, largeur;

    // Entrée du code
    printf("Veuillez entrer la longueur du rectangle: ");
    scanf("%f",&longueur);
    printf("Veuillez entrer la largeur du rectangle: ");
    scanf("%f",&largeur);

    surface = longueur * largeur;
    perimetre = 2 * (longueur + largeur);
    printf("Votre rectangle a une surface egale à %.1f , et un perimetre de %.1f ;",surface , perimetre);

    return 0;
}
