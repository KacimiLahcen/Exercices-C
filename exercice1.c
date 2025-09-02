#include <stdio.h>

int main() {
    char nom[10];
    char prenom[10];
    int age;
    char sexe[10];
    char email[100];

    printf("votre nom: \n");
    scanf("%s", &nom);
    printf("votre prénom: \n");
    scanf("%s", &prenom);
    printf("votre age: \n");
    scanf("%d", &age);
    
    printf("votre sexe: \n");
    scanf("%s", &sexe);
    printf("votre mail: \n");
    scanf("%s", &email);
    
   printf("\n votre nom complete est : %s %s , tu as %d ans, et votre email est : %s",nom,prenom,age,email);
    return 0;
}