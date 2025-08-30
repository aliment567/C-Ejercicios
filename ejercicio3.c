#include <stdio.h>
#include <ctype.h>  

int main() {
    char letra;

    
    printf("Ingresa una letra: ");
    scanf("%c", &letra);

   
    if (isalpha(letra)) {
        letra = toupper(letra);
        printf("La letra en mayúscula es: %c\n", letra);
    } else {
        printf("No ingresaste una letra válida.\n");
    }

    return 0;
}
