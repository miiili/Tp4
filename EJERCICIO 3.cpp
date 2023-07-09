#include <stdio.h>

int main(){
	float notas[10];
	float sum=0;
	int i;
	//pedimos al usuario que ingrese las notas de 10 alumnos
	for(i=0;i<=10;i++){
		printf("ingrese la nota del alumno %d;", i+1);
		scanf("%f", &notas[i]);sum+=notas[i];
	}
	//calculamos el promedio de notas
	float promedio=sum/10;
	//contamos la cantidad de alumnos por encima y por debajo del promedio
	int encima=0, debajo=0;
	for(i=0; i<10;i++){
		if(notas[i]>=promedio){
			encima++;
		}else{
			debajo++;
		}
	}
	//mostramos los resultados
	printf("cantidad de alumnos por encima del promedio: %d\n",encima);
	printf("cantidad de alumnos por debajo del promedio: %d\n",debajo);
	return 0;
}
