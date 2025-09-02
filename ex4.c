#include <stdio.h>

int main() {
    double km_par_h ;
    double m_par_s ;
    
    printf("La vitesse en km_par_h est : ");
    scanf("%lf",&km_par_h);
    m_par_s= km_par_h * 0.27778;
    printf("La vitesse en m_par_s est : %lf", m_par_s);

    return 0;
}

