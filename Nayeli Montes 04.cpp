#include <stdio.h>

int main() {
    int p;
    float harina;
 
    printf("Programa para calcular cuantos kg de harina se necesitan según el número de pasteles\n"); 
    printf("Ingrese el número de pasteles: ");
    scanf("%d", &p); //La señora maria para hacer 100 pasteles requiere de 3kg de harina, la formula para calcular la cantidad de harina necesaria es la siguiente//
    
    harina = p*3/100.0;
 
    printf("para hacer %d",p);
    printf(" pasteles, se necesita: %.2f kg\n", harina); 
 
    return 0;
}