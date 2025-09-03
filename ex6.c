#include <stdio.h>

int main() {
    double a;
    double b ;
    double result ;
    char operation;

    printf("Entrer le premiere numero : ");
    scanf(" %lf",&a);

     printf("Entrer le deuxieme numero : ");
    scanf(" %lf",&b);

     printf("Choisez l'operation (+, -, /, *    ): \n");
    scanf(" %c",&operation);

        switch (operation)
        {
        case '+':
        result = a + b;
            printf(" %lf + %lf = %lf", a,b,result);
            break;
        
        case '-' :
        result = a - b;
            printf(" %lf - %lf = %lf", a,b,result);
            break;

        case '/' :
        if(b != 0) {
            result = a / b;
            printf(" %lf / %lf = %lf", a,b,result);
        }else {
            printf("Erreur : /0 pas possible");
        }
            break;

        case '*' :
        result = a * b  ;
            printf(" %lf * %lf = %lf", a,b,result);
            break;
        
        default :
            printf("l'operation pas definie, Veuillez choisir +, -, * ou /.");
        }
        


    return 0 ;
}