/*Autor: Oscar Eduardo FLetes Ixta, elavorado el 18/02/222
	Programa que calcula e imprime e larea deun circulo, pidiendo el valor del radio,
	y que debe ser mayor de 0 y sino mandara un mensaje que vuelva a pedir el valor
	tantas veces sean necesarias 
	
	programa en lenguaje c que calcula el area de un circulo y que su radio sea mayor de 0,con el uso de la libreria math.h 
	para las constantes atematicas, uso del scanf, uso del ciclo do-while, condiocnes y operaciones aritméticas
	
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo float
		* Uso de la libreria math.h 
		* Uso del ciclo do-while
		* Uso de condicones
		* printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables de tipo float, uso del scanf, usar el ciclo while, usar condicones, 
	realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa  pide como entrada 1 variable del tipo float (valor del radio)
	El programa calcula e imprime e larea deun circulo, pidiendo el valor del radio, y que debe ser mayor de 0 y sino mandara 
	un mensaje que vuelva a pedir el valor tantas veces sean necesarias 
	*/
	
#include<stdio.h>//libreria para el cuerpo de c
#include<math.h>//libreria para constantes matematicas

int main(){
	//Variables 
	float r,area;//Variables con decimal
	//Entrada 
	//Proceso
	do{//ciclo do-while
		printf("Introduce el valor del radio: ");//imprime mensaje 
		scanf("%f", &r);//lee el numero insertado por el teclado
		if(r<=0){//condicion, si r es menor o igual a 0
			printf("El valor del radio no es positivo, por lo tanto no se puede calcular\n");//imprime mensaje 	
		}
	}while(r<=0);//do-while termina cuando se inserta un numero menor o igual a 0
	area=M_PI*pow(r,2);//calcula el area
	//M_PI es el valor de pi
	//pow es para elevar un numero a la potencia n
	printf("El area del circulo es: %.2f",area);//imprime la salida del area 
	
	return 0;
}
