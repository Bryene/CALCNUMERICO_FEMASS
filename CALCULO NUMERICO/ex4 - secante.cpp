		/*
	Calculo Numerico
	Nome: Bryene
	Data: 12.03.22
	Metodo da secante
	*/
	
		#include <stdio.h>
		#include <stdlib.h>
		#include <math.h>
		
		
		float fsecante(float x){
		
		return ((pow(6,x))-(6*x)+ exp(x)-10)/(6-20);
		
	
		}
		float x=0.0;
		main(){
			
			float xn1=0.0,xn=0.0,erro=0.0,fxn1=0.0,fxn=0.0,fxn1_nova=0.0,resultado=0.0;
			int k=0, i=0;
			int cont;
			
			printf("-------exercicio - metodo da secante-------");
			
			printf("\n\nEntre com o valor de x0: ");
			scanf("%f",&xn1);
			printf("Entre com o valor de x1: ");
			scanf("%f",&xn);
			printf("Entre com o valor do Erro: ");
			scanf("%f",&erro); 
		    printf("Entre com o numero de interacoes: ");
			scanf("%d",&cont);
			
//	printf("k\tX(n-1)\t\tf(x(n-1))\tX(n)\t\tF(xn)\t\tX(n+1)\t\tErro\n");	
				
			
			do{
				
					
			//	printf("%d",k);
				k++;	
			//	printf("\t%.6f\t",xn1);
				fxn1=fsecante(xn1);
		//		printf("\t%.6f\t",fxn1);
			//	printf("\t%.6f\t",xn);
				fxn=fsecante(xn);	
			//	printf("\t%.6f\t",fxn);
				fxn1_nova=((xn1*fxn)-(xn*fxn1))/(fxn-fxn1);
			//	printf("\t%.6f\t",fxn1_nova);
		   	//	printf("\t%.2f\t",erro);
			
				//passagem
				resultado=xn;
				xn=fxn1_nova;
				printf("\n");
			
	}
			while((fabs(fxn))>erro&& (cont>=100));
			printf("A resposta final esta na linha %d", k);
			printf("\n xn = %f",resultado);
			printf("\nX%d-(med)= %f, F(X%d) = %.6f", k, resultado, k, fsecante(resultado));
		}
			
	
	





