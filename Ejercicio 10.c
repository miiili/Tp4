#include <stdio.h>
#include <math.h>
int funcion (int dia, int mes, int anio){
	
	if (anio%4==0){
		if (anio%100==0){
			if (anio%400==0){
				
			}
			else{
				//NO bisiesto 
			}
		}
		else{
			//bisiesto
		}
	}	
	else{
		//NO bisiesto 
	}
	
	return 0;
}
	
 int main{
	int dia;
	int mes;
	int anio;
	
	printf ("Ingrese el dia:\n");
	scanf ("%d"&dia);
	printf ("Ingrese el mes:\n");
	scanf ("%d"&mes);
	printf ("Ingrese el año:\n");
	scanf ("%d"&anio);
	
	}
