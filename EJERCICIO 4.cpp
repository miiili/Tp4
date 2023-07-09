#include <stdio.h>


int main() {
	int notas[15];
	int frecuencia[11] = {0}; // Inicializar todas las frecuencias en 0
	int i;
	
	// Leer las notas de los alumnos
	printf("Ingrese las notas de los %d alumnos:\n", 15);
	for (i = 0; i < 15; i++) {
		printf("Alumno %d: ", i + 1);
		scanf("%d", &notas[i]);
		
		// Verificar que la nota est� entre 0 y 10
		if (notas[i] < 0 || notas[i] > 10) {
			printf("La nota debe estar entre 0 y 10. Ingrese nuevamente.\n");
			i--; // Retroceder para volver a leer la nota v�lida
		} else {
			frecuencia[notas[i]]++;
		}
	}
	
	// Mostrar la frecuencia de cada nota
	printf("\nFrecuencia de notas:\n");
	for (i = 1; i < 11; i++) {
		printf("Nota %d: %d alumno(s)\n", i, frecuencia[i]);
	}
	
	return 0;
}
