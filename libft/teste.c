#include <stdio.h>
#include <bsd/string.h>

int main() {
    char buffer[10];
    char fonte[] = "Hello, World!";
    
    size_t resultado = strlcpy(buffer, fonte, sizeof(buffer));
    
    printf("Texto copiado: %s\n", buffer);
    printf("Tamanho original: %zu\n", resultado);
    
    return 0;
}