#include <stdio.h>
#include<stdlib.h>
#include <math.h>

//ALUNA: BRYENE
float inf, sup, h, somatorio;
int i, n;

float func(float x)
{

    return exp(x)-(x*x)+4;
   
     
}


 
float metodoretangulo(float xinf, float xsup, float nxi)
{
	
	h=(xsup-xinf)/nxi;
	printf("\n O valor de H e: |%.2f| ",h);

	somatorio=(func(xinf)+func(xsup))/2; 
	xsup=xinf+h;
	xsup=xinf;
	
	for (i=1; i<nxi; i++)
	
	{  	printf("\n |%d|xi: %.6f - |%d|somatorio: %.6f\n", i, xinf+i*h, i, somatorio);
	
	    
		somatorio=somatorio+fabs(func(xinf+i*h));  //xitotal
       
	}
    
		somatorio = h*somatorio; //h*o valor, multiplicando o valor total final
	
}

main()
{
	do
	{	printf("\n-------Metodo do Retangulo---------\n");
	    printf(" - INFORME O LIMITE INFERIOR: ");
		scanf("%f", &inf);
	
	   printf(" - INFORME O LIMITE SUPERIOR: ");
		scanf("%f", &sup);
		
		if(inf > sup)
			printf("\nLIMITE INFERIOR TEM QUE SER MENOR QUE O SUPERIOR");
			
	} while (inf>sup);
	
	
	do
	{
		printf("\n INFORME O NUMERO DE TRAPEZIOS (integracao): ");
		scanf("%d", &n);
		
		if (n<=0)
		{
			printf("\nDEVE SER MAIOR QUE ZERO, tente novamente.");
		}
	}while(n<=0);
	

	metodoretangulo(inf, sup, n);
	
	printf("\n-----Resultado Final-------");
	printf("\n Resultado da area do Metodo do Retangulo: X%d-(total)= %.6f", i, fabs(somatorio));


	
}



