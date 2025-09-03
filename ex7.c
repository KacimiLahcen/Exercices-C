#include <stdio.h>

int main() {
    double a ;
    double b ;
    double c ;
    double moyenne ;
    printf("1er nombre : ");
    scanf("%lf",&a);

    printf("2ème nombre : ");
    scanf("%lf",&b);

    printf("3ème nombre : ");
    scanf("%lf",&c);

    moyenne=(a*2 + b*3 + c*5) / (2+3+5);
    printf("La moyenne pondérée de cette trois nombres : %lf", moyenne);

    return 0;
}

