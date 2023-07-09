#include <stdio.h>
#include <math.h>

int main() {
	int muestra [5], t;
	int suma=0;
	float promedio, suma_error; 
	int error; 
	float EM;
	for (t=0; t<5; t++) {
		printf ("Ingrese un valor para la muestra [%d]",t); 
		scanf ("%d" ,&muestra [t]); 
		suma=suma+muestra [t];
	}
	promedio=suma/5;
	for (t=0; t<5; t++){
		printf ("muestra[%d]=%d\n",t,muestra[t]);
	}
	printf ("El promedio obtenido es %f\n",promedio);
	for (t=0;t<5;t++){
		error=promedio-muestra[t];
	}
	EM=sqrt (((error*error)/5));printf ("El error medio es %f\n",EM);
	return 0;
}
