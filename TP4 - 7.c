#include <stdio.h>

int esPrimo(int num) {
	if (num <= 1)
		return 0;
	
	for (int i = 2; i < num; i++) {
		if (num % i == 0)
			return 0;
	}
	
	return 1;
}

int main() {
	char primos[20];
	int contador = 0;
	int num = 2;
	
	while (contador < 20) {
		if (esPrimo(num)) {
			primos[contador] = (char) num;
			contador++;
		}
		num++;
	}
	
	printf("Los 20 primeros números primos son:\n");
	for (int i = 0; i < 20; i++) {
		printf("%d ", primos[i]);
	}
	printf("\n");
	
	return 0;
}
