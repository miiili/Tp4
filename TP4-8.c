#include <stdio.h>
#include <math.h>

#define PI 3.14159265

void generar_arreglos(float s[], int a[]) {
	int angulo = 0;
	
	for (int i = 0; i < 36; i++) {
		float radianes = angulo * (PI / 180);
		float seno = sin(radianes);
		s[i] = seno;
		a[i] = angulo;
		angulo += 10;
	}
}

void mostrar_tabla(float s[], int a[]) {
	printf("Angulo\t| Función seno\n");
	printf("-----------------------\n");
	
	for (int i = 0; i < 36; i++) {
		printf("%d\t| %.15f\n", a[i], s[i]);
	}
}

int main() {
	float s[36];
	int a[36];
	
	generar_arreglos(s, a);
	mostrar_tabla(s, a);
	
	return 0;
}
