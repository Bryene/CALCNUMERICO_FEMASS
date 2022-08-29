/* Gauss Seidel
    Ax = b 
    A, b, Xo,tol , max_itera
*/

#include<stdio.h>
#include<math.h>

#define MAX_SIZE 10


int main(){

    // Initialize Variables
    int n;                              
    float A[MAX_SIZE][MAX_SIZE];      
    float b[MAX_SIZE];                  
    float x[MAX_SIZE];                 
    float xo[MAX_SIZE];                 
    float tol;                         
    int max_iter;                       
    
    int i,j,k;
    float sigma,norm;
    
    
  
    printf("\nInsira o valor da ordem: \n");
    scanf("%d",&n);
    
  
    printf("\nEntre com os coeficientes: \n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%f",&A[i][j]);
        }
    } 
    
 
    printf("\nEntre com as constantes: \n");
    for(i=0;i<n;i++) {
        scanf("%f",&b[i]);
    }
 
    printf("\nInsira o chute inicial: \n");
    for(i=0;i<n;i++) {
        scanf("%f",&x[i]);
    }
 
    printf("\nEntre com o erro: \n");
    scanf("%f",&tol);
    
 
    printf("\nNumero de iteracoes: \n");
    scanf("%d",&max_iter); 
       
   
  
    printf("\nResolvendo a equacao linear: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%fx%d ",A[i][j],j);
        }
        printf("= ");
        printf("%f\n",b[i]);
    }
    
    printf("tol: %f\n",tol);
    printf("max_iter %d\n",max_iter);
    printf("Valor:");
    for(i=0;i<n;i++){
        printf("%f ",x[i]);
    }
    printf("\n");

   
    k = 1;
    while(k <= max_iter){
        for(i=0;i<n;i++){
            xo[i] = x[i];
        }
        for(i=0;i<n;i++){
            sigma = 0;
            for(j=0;j <= i-1; j++){
                sigma = sigma + A[i][j]*x[j];
            }
            for(j = i + 1; j < n;j++){
                sigma = sigma + A[i][j] * xo[j];
            }
            x[i] = (1/A[i][i])*(b[i] - sigma );         
        }
        
     
        sigma = 0;
        for(i=0;i<n;i++){
            sigma = sigma + pow((xo[i]-x[i]),2);
        }
        norm = sqrt(sigma);
        
        if( norm <= tol){
            break;
        }
        k++;
        
    }
 
    printf("\nA resposta :\n");
    for(i=0;i<n;i++){
        printf("\nx[%d]: %f",i,x[i]);
    }
    printf("\nIteracoes: %d",k-1);
    printf("\nErro final de parada: %f", norm);
    
    return 0;
    
}
