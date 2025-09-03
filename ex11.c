#include <stdio.h>

int main() {
    double longueur ;
    double largeur ;
    double surface ;
    printf("longueur : ");
    scanf("%lf",&longueur);

    printf("largeur : ");
    scanf("%lf",&largeur);

    surface=longueur * largeur ;
    printf("La surface d’un rectangle : %lf", surface);

    return 0;
}