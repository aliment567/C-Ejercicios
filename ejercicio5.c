#include <stdio.h>
#include <ctype.h>  

int main() {
    char caracter;

    printf("Ingresa un caracter: ");
    scanf(" %c", &caracter);

    if (isdigit(caracter)) {
        printf("'%c' es un dígito numérico.\n", caracter);
    } else {
        printf("'%c' NO es un dígito numérico.\n", caracter);
    }

    return 0;
}
