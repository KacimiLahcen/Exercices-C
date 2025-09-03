#include <stdio.h>

int main() {
    int number ;
    int n1 ;
    int n2 ;
    int n3 ;
    int n4 ;
    int inverse ;
    printf("Ecrire 4 chiffres : ");
    scanf("%d",&number);

    n1 = number / 1000 ;
    n2 = (number / 100) % 10 ;
    n3 = (number / 10) % 10 ;
    n4 = (number % 10);
    inverse= (n4 * 1000) + (n3 * 100) + (n2 * 10) + n1 ;
    printf("L'inverse de cette 4 chiffres : %d", inverse);

    return 0;
}