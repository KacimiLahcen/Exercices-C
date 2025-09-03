#include <stdio.h>
#include <math.h>

int main() {
    double p = 3.14159 ;
    double r ;
    double volume ;
    printf("le rayon de sphere : ");
    scanf("%lf",&r);

    volume=(4/3) * p * cbrt(r);
    printf("Le volume d’une sphère est : %lf", volume);

    return 0;
}