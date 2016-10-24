//Calculadora


#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main (){

	
	
	int o;
	
	
	cout<<endl<<"Presione: "<<endl<<endl<<"1 Para sumar"<<endl<<"2 Para restar"<<endl<<"3 Para multiplicar"<<endl<<"4 Para dividir"<<endl<<"5 Para elevar un numero a una potencia"<<endl<<"6 Para hacer raices cuadradas"<<endl<<"7 Para utilizar la calculadora geometrica"<<endl<<endl<<":";
	cin>>o;
	cout<<endl;
	
	if (o == 1){ //Sumar
		
		float x,y;
		
	 printf("       SUMAR\n\n");
	 printf(" Seleccione un numero para ser sumado: ");
	 scanf("%f",&x);
	 printf(" Seleccione un numero para sumar al anterior: ");
	 scanf("%f",&y);
	 x = x + y;
	 printf("El resultado de esta operacion es: %f.\n\n\n\n\n\n",x);
	
	}
	
	if (o == 2){ //Restar
		
	  printf (       "RESTAR\n\n");
	  float x,y;
	
	  printf(" Seleccione un numero para ser restado: ");
      scanf("%f",&x);
      printf(" Seleccione un numero para restar al anterior ");
      scanf("%f",&y);
      x = x - y;
      printf("El resultado de esta operacion es: %f.\n\n\n\n\n\n",x);
	
		
	}
	
	if (o == 3){ //Multiplicar
		printf("       MULTIPLICAR\n\n");
	float x,y;
	
	printf(" Seleccione un numero para ser multiplicado: ");
	scanf("%f",&x);
	printf(" Seleccione un numero que multiplique al anterior: ");
    scanf("%f",&y);
    x = x * y;
    printf("El resultado de la operacion es: %f.\n\n\n\n\n\n",x);
    
	}
	
	if (o == 4){ //Dividir
		
		printf("       DIVIDIR\n\n");
		
		float x,y;
		
		printf("Seleccione un numero para ser dividido: ");
		scanf("%f",&x);
		printf("Seleccione un numero que divida al anterior: ");
		scanf("%f",&y);
		x = x / y;
		printf("El resultado de la operacion es: %f\n\n\n\n\n\n",x);
	}
	
	if ( o == 5){ //Exponentes
	float x,y;
	
	printf("       ELEVAR UN NUMERO A UNA POTENCIA\n\n");
	printf ("Seleccione la base de la potencia:");
	scanf("%f",&x);
	printf ("Seleccione el exponente de la potencia: ");
	scanf("%f",&y);
	x = pow(x,y);
	printf("El resultado de la operacion es: %f\n\n\n\n\n\n",x);
     }

    if (o == 6){ //Raices cuadradas
    	
    	float x;
    	
    	printf("       RAICES CUADRADAS\n\n");
    	printf ("Seleccione un numero: ");
    	scanf("%f",&x);
    	
    	x = sqrt(x);
    	printf("El resultado de la operacion es: %f\n\n\n\n\n\n",x);
    	
    	
	}

    if (o == 7){ //Calculadora geométrica

    	 int Acua,Acir,Arec,Atri,o;
    	 
    Acua = 1; // Área cuadrado
    Acir = 2; // Área Círculo
    Arec = 3; // Área rectángulo
    Atri = 4; // Área triángulo
    
    printf("\nSeleccione lo que quiera calcular. Presione:\n\n 1: Area de un cuadrado\n 2: Area de un circulo\n 3: Area de un rectangulo\n 4: Area de un triangulo\n :");
    scanf("%o",&o);
    
    if (o == Acua){ // Área cuadrado
    
    	float x;
    	printf("\nAsigne el valor del lado del cuadrado en cm (No poner unidades): ");
    	scanf("%f",&x);
    	x = x * x;
    	
    	printf("El area de ese cuadrado es: %f cm^2\n\n\n\n",x);
	}
	if (o == Arec){ // Área rectángulo
	float x,y;
	printf("\n\n\nIntroduzca el valor de la base en cm (No poner unidades): ");
	scanf("%f",&x);
	printf("\nIntroduzca el valor de la altura en cm (No poner unidades): ");
	scanf("%f",&y);
    x = x * y;
	printf(" \n\nEl area del rectangulo es: %f cm^2\n\n\n\n",x);
	}
	if (o == Acir){ // Área círculo
		float x,y;
		printf("Asigne el valor del radio del circulo en cm (No poner unidades): ");
		scanf("%f",&x);
		x = 3.14 * x * x;
		printf("El area del circulo es: %f cm^2\n\n\nºn",x);
		
	}
	if (o == Atri){ // Área triángulo
		
		float x,y;
		printf("\n\n\nIntroduzca el valor de la base en cm (No poner unidades): ");
		scanf("%f",&x);
		printf("\nIntroduzca el valor de la altura en cm (No poner unidades): ");
		scanf("%f",&y);
		x = x * y / 2;
		printf("\n\nEl area del triangulo es: %f cm^2\n\n\n\n",x);
		
		
	}
	
	
	
	
	}



 





if (o>7) {  //Numero no configurado, poner los demás IF encima de esto
		printf("       ERROR. ESE NUMERO NO ESTA CONFIGURADO.\n\n\n\n\n\n");
	}
	
	system("pause");
	return 0;
	}

