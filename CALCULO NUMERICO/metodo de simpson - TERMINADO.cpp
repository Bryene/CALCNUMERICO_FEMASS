#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//ALUNA: BRYENE
float inf, sup, somatorio;
float x, soma, h;
int i, n;


float func(float x)
{
    // return exp(x)-(x*x)+4;
    return pow(3,exp(x))-5;
}

float metodosimpson (float xinf, float xsup, float nxi)
{
    /*altura*/
	h=(xsup-xinf)/nxi;
	printf("\n O valor de H e: |%.2f| ",h);
	
	for (i=1; i<nxi; i++) //recebendo 1 pula linha 0
	{
			
		if (i%2==0)
		{
			soma+=2*fabs(func(xinf+i*h));
		}
		
		else{
			
			soma+=4*fabs(func(xinf+i*h));
		}
			
   printf("\n |%d|xi: %.6f - |%d|somatorio: %.6f\n", i, xinf+i*h, i, soma);
   
	}
   	
	somatorio= h*(fabs(func(xinf))+soma+fabs(func(xsup)))/3;

	
}

main()
{
	do
	{	printf("\n-------Metodo do Simpson---------\n");
		printf("- INFORME O LIMITE INFERIOR: ");
		scanf("%f", &inf);
	
		printf("- INFORME O LIMITE SUPERIOR: ");
		scanf("%f", &sup);
		
		if(inf>sup)
			printf("\nLIMITE INFERIOR TEM QUE SER MENOR QUE O SUPERIOR");
			
	} while (inf>sup);
	
	
	do
	{
		printf("\nENTRE COM O NUMERO DE INTEGRACOES: ");
		scanf("%d", &n);
		
		if (n<=0 && n%2!=0)
		{
			printf("\n NAO PODE SER MENOR QUE 0 E IMPAR, TENTE NOVAMENTE:");
		}
		
	}while((n<=0) && (n%2!=0));
	
	
	metodosimpson (inf, sup, n);
	
    printf("\n-----Resultado Final-------");
	printf("\n Resultado da area do Metodo de Simpson e: X%d-(total)= %.6f", i, fabs(somatorio));
	
	

}
