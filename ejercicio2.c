#include <stdio.h>
#include <ctype.h>  

int main() {
    char caracter;

    
    printf("Ingresa un carácter: ");
    scanf("%c", &caracter);

  
    caracter = tolower(caracter);

    
    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
        printf("%c es una vocal.\n", caracter);
    } else if ((caracter >= 'a' && caracter <= 'z')) {
        printf("%c es una consonante.\n", caracter);
    } else {
        printf("%c no es una letra válida.\n", caracter);
    }

    return 0;
}
