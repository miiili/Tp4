#include <stdio.h>
#include <math.h>
int funcion(float px1, float px2, float py1, float py2, float pz1, float pz2){
	float difx;
	difx= px2-px1;
	float dify;
	dify= py2-py1;
	float difz;
	difz= pz2-pz1;
	float suma;
	suma=pow(difx,2)+pow(dify,2)+pow(difz,2);
	float mod;
	mod=sqrt(suma);
	printf("La diferencia entre los puntos es: %f",mod);
}
int main(){
	float px1;
	float px2;
	float py1;
	float py2;
	float pz1; 
	float pz2; 
	
	printf("Ingrese el valor de x del primer punto:\n");
	scanf("%f",&px1);
	printf("Ingrese el valor de y del primer punto:\n");
	scanf("%f",&py1);
	printf("Ingrese el valor de z del primer punto:\n");
	scanf("%f",&pz1);
	printf("Ingrese el valor de x del segundo punto:\n");
	scanf("%f",&px2);
	printf("Ingrese el valor de y del segundo punto:\n");
	scanf("%f",&py2);
	printf("Ingrese el valor de z del segundo punto:\n");
	scanf("%f",&pz2);
	funcion(px1,px2,py1,py2,pz1,pz2);
	return(0);
}
