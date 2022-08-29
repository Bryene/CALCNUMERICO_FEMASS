	/*
	Calculo Numerico
	Nome: Bryene
	Data: 12.03.22
	Metodo da bissecao
	*/
	
	
		#include <stdio.h>
		#include<stdlib.h>
		#include<math.h>
	
		float funcao(float x) {
			
         return exp(x)-(pow(x,9))-(pow(x,2))-1;
       

		}
		
		  int interacoes= 0;
		  float x=0.0;
		  
	
		float Bis(float a, float b, float erro, int maxint) {

		    float aux=0.0;
		  
		    if (b<a) {
		        aux = b;
		        b=a;
		        a=aux;
		    }
		
		    if ((funcao(a)*funcao(b))>0) {
		        printf("Sem raizes para a funcao neste intervalo.\n");
		        
		        return 0.0;
		    }
		
		    if ((b-a)<erro){
		        return (a + b)/2;
		}
		
		 
		    for (interacoes=1; interacoes<=maxint; interacoes++) {
		        x = (a + b)/2;
		       
		        if ((funcao(a)*funcao(x))>0) {
		            a=x;
		           
		        } 
				else {
		            b=x;
		         
		        }
		
		        if ((b-a)<erro) {
		            return (a+b)/2;
				 
		        }
	     
		    }
		    
		    return (a+b)/2;
	
		}
	     	 
		//Principal
		int main() {
		
		    float a = 0.00, b = 0.00;
		    float erro= 0.00;
		    int maxint= 0;
		    float raiz= 0.00;
		       
		    printf("Informe o valor de A: ");
		    scanf("%f", &a);
		    printf("Informe o valor de B: ");
		    scanf("%f", &b);
		
		    do {
		        printf("Informe o erro: ");
		        scanf("%f", &erro);
		        
		        if (erro<=0.0)
		            printf("Valor precisa ser acima de 0. Tente novamente.\n");
		            
		    } while (erro<=0.0);
		
	
		    do {
		        printf("Informe o numero maximo de interacoes: ");
		        scanf("%d", &maxint);
		        
		        if (maxint<=0.0){
		            printf("Valor precisa ser acima de 100. Tente novamente.\n");
		   }
		      
	
		    } while (maxint<=0.0);
		     
		    
		
		    raiz= Bis(a, b, erro,maxint);
		    x=Bis(a, b, erro,maxint);
		   
		    printf("\nA RAIZ ENCONTRADA FOI: %f\n", raiz);
		    printf("\nNumero de interacoes necessarias:%d", interacoes);
		    printf("\nX%d-(med)= %f, F(X%d) = %.6f, a = %f, b = %f\n", interacoes, raiz, interacoes, funcao(raiz), a, b);
	
	
	
		
		    return 0;
		}
