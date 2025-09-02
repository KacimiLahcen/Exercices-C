#include <stdio.h>

int main() {
    double km ;
    double yards ;
    
    printf("La distance en kilomètres est : ");
    scanf("%lf",&km);
    yards=km * 1093.61;
    printf("La distance en yards est : %lf", yards);

    return 0;
}

