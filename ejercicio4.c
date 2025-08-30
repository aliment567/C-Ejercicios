#include <stdio.h>

int main() {
    char palabra[100];  
    char letra;         
    int contador = 0;  
    int i;

    
    printf("Escribe una palabra: ");
    scanf("%s", palabra);

    
    printf("Escribe la letra que quieres contar: ");
    scanf(" %c", &letra);  

   
    for (i = 0; palabra[i] != '\0'; i++) {
        if (palabra[i] == letra) {
            contador++;
        }
    }

    printf("La letra '%c' aparece %d veces en la palabra '%s'.\n", letra, contador, palabra);

    return 0;
}
