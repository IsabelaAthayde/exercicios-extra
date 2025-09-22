#include <stdio.h>
#include <string.h>

int main() {
	int i; 
	const char* texto = "this love";
	
	size_t tam = strlen(texto);
	printf("%zu\n", tam);
	printf("%s", "=======================\n");
			
	for (i=0; i<tam; i++){
		printf("%c\n", texto[i]);
	}   		
}

