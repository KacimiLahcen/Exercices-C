#include <stdio.h>

int main() {
    double C ;
    double K ;
    
    printf("La température en degrés Celsius est : ");
    scanf("%lf",&C);
    K=273.15 + C;
    printf("La température en degrés Kelvin est : %lf", K);

    return 0;
}


    /*  to run u wwrite gcc nameof.project>>> after >>> .\.exe  */