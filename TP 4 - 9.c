#include <stdio.h>
#include <math.h>

#define PI 3.14159265

void generar_arreglos(float s[], int a[], float p[]) {
	int angulo = 0;
	
	for (int i = 0; i < 36; i++) {
		float radianes = angulo * (PI / 180);
		float seno = sin(radianes);
		s[i] = seno;
		a[i] = angulo;
		// Calcular promedio
		if (i < 34) {
			p[i] = (s[i] + s[i + 1] + s[i + 2]) / 3;
		} else {
			p[i] = (s[i] + s[i + 1] + s[0]) / 3;
		}
		angulo += 10;
	}
}

void mostrar_tabla(float s[], int a[], float p[]) {
	printf("Angulo\t| Función seno\t| Promedio\n");
	printf("-----------------------\n");
	
	for (int i = 0; i < 36; i++) {
		printf("%d\t| %.15f\t| %.15f\n", a[i], s[i], p[i]);
	}
}

int main() {
	float s[36];
	int a[36];
	float p[36];
	generar_arreglos(s, a, p);
	mostrar_tabla(s, a, p);
	
	return 0;
}
