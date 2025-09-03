#include <stdio.h>
#include <math.h>

int main() {
    double a ;
    double b ;
    double c ;
    double moyennegeo ;
    printf("1er nombre : ");
    scanf("%lf",&a);

    printf("2ème nombre : ");
    scanf("%lf",&b);

    printf("3ème nombre : ");
    scanf("%lf",&c);

    moyennegeo=cbrt(a*b*c);
    printf("La moyenne géométrique de cette trois nombres : %lf", moyennegeo);

    return 0;
}