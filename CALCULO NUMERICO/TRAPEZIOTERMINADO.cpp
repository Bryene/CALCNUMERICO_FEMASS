#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//ALUNA: BRYENE
float inf, sup, h, somatorio=0.0;
int i, n, coeficiente;
float x;

float func(float x)
{
    return exp(x)-(x*x)+4;
  
}


float metodotrapezio (float xinf, float xsup, float nxi)
{
	
	h=(xsup-xinf)/nxi;
	printf("\n O valor de H e: |%.2f| ",h);
	somatorio=(func(xinf)+func(xsup))/2; //primeiro somatorio nos pontos superior e inferior	
	xsup=xinf+h;
  	xsup=xinf;
  	
	for (i=1; i<nxi; i++){
			
		if ( nxi>inf){
			
			coeficiente=2; 
		
		}
		
		if ( (i==0) || (i==nxi)){
		
			coeficiente=1; 
	    
	}  	
	    somatorio=somatorio+(fabs(func(xinf+i*h))); 
	   
		printf("\n |%d|xi: %.6f -|coef:%d||%d|somatorio: %.6f\n", i, xinf+i*h, coeficiente, i, somatorio);
		
	}
		
	somatorio= coeficiente*h*somatorio/2;
	
}


main()
{
	do
	{	printf("\n-------Metodo do Trapezio---------\n");
	    printf("- INFORME O LIMITE INFERIOR:  ");
		scanf("%f", &inf);
	
	    printf("- INFORME O LIMITE SUPERIOR: ");
		scanf("%f", &sup);
		
		if(inf> sup)
			printf("\nLIMITE INFERIOR TEM QUE SER MENOR QUE O SUPERIOR ");
			
	} while (inf>sup);
	
	
	do
	{
		printf("\n INFORME O NUMERO DE TRAPEZIOS (integracao): ");
		scanf("%d", &n);
		
		if (n<=0)
		{
			printf("\nDEVE SER MAIOR QUE ZERO, tente novamente!!");
		}
	}while(n<=0);
	
	
	metodotrapezio (inf, sup, n);
	
	printf("\n-----Resultado Final-------");
	printf("\n Resultado da area do Metodo do Trapezio:: X%d-(total)= %.6f", i, fabs(somatorio));
   
}
