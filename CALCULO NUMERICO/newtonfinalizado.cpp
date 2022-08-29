	/*
	Calculo Numerico
	Nome: Bryene
	Data: 12.03.22
	Metodo de Newton
	*/
	
	#include <stdio.h>
	#include <stdlib.h>
	#include <math.h>
	float f(float x){
	
//	 return (pow(12,x))*log(12)+x;
	  return tan(4*x)-0.67;
	 
	}
		
		float derivadafun(float x)
	{
		return ((f(x+0.001)-f(x))/0.001);
	}
	int main(void){
			
			float xn1=0.0, erro,solucao=0.0;
			int k;
			int cont=0;
	
			printf("------exercicio - metodo de newton-------\n");
			printf("Entre com o valor de x0: ");
			scanf("%f",&xn1);
			printf("Entre com o valor do Erro: ");
			scanf("%f",&erro); 
		    printf("Entre com o numero de interacoes: ");
			scanf("%d",&k);
				
						
			while(fabs(f(solucao))>erro){
				
				solucao=xn1-(f(xn1)/derivadafun(xn1));
				//passagem		
				xn1=solucao;				
				cont++;
			
				if(cont>=k){
					break;
			} 
	
			}	
			
			printf("\nA resposta final esta na linha:%d", cont);
			printf("\nXn =%.6f",solucao);
			printf("\nX%d-(med)= %f, F(X%d) = %.6f", cont, solucao, cont, f(solucao));
			
			return 0;
		}
