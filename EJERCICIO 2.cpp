#include <stdio.h>
#include <math.h>

int main() {
	float numeros[10];
	float sum_pares = 0, sum_impares = 0;
	int cant_pares = 0, cant_impares = 0;
	int i;
	
	for (i = 0; i < 10; i++) {
		printf("Ingrese un número real: ");
		scanf("%f", &numeros[i]);
	}
	
	// Se calcula el promedio de los elementos de índice par.
	for (i = 0; i < 10; i += 2) {
		sum_pares += numeros[i];
		cant_pares++;
	}
	float prom_pares = sum_pares / cant_pares;
	
	// Se calcula el promedio de los elementos de índice impar.
	for (i = 1; i < 10; i += 2) {
		sum_impares += numeros[i];
		cant_impares++;
	}
	float prom_impares = sum_impares / cant_impares;
	
	// Se muestran los resultados.
	printf("El promedio de los elementos de índice par es: %.2f\n", prom_pares);
	printf("El promedio de los elementos de índice impar es: %.2f\n", prom_impares);
	
	return 0;
}
