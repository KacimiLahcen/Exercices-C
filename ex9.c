#include <stdio.h>
#include <math.h>

int main() {
    double x1 ;
    double x2 ;
    double y1 ;
    double y2 ;
    double z1 ;
    double z2 ;
    double distance ;
    printf("x1 : ");
    scanf("%lf",&x1);

    printf("x2 : ");
    scanf("%lf",&x2);

    printf("y1 : ");
    scanf("%lf",&y1);

    printf("y2 : ");
    scanf("%lf",&y2);

    printf("z1 : ");
    scanf("%lf",&z1);

    printf("z2 : ");
    scanf("%lf",&z2);

    distance=sqrt(pow(x2-x1,2) + pow(y2-y1,2) + pow(z2-z1,2)) ;
    printf("la distance euclidienne est : %lf", distance);

    return 0;
}



// cbrt