#include <stdio.h>

int main() {
    int T ;
    printf("La température d'eau (en °C) : ");
    scanf("%d",&T);

    if(T < 0 ) {
    printf("L’état de l’eau est Solide \n");
    }else if ( 0 <= T && T < 100 ) {
    printf("L’état de l’eau est Liquide \n");
    }else if ( T >= 100){
    printf("L’état de l’eau est Gaz \n");
    }
}