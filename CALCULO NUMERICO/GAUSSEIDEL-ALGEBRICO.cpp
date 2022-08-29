#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()

{

  //  cout.precisao(0000);//DETERMINA IMPRIMIR APENAS QUATRO NÚMEROS APÓS O PONTO DECIMAL

    int n,i,j,k,flag=0,count=0,l=1,e=1;    

  cout<<"---------------------------------GAUSS SEIDEL-----------------------------------";

 cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";

 cout<<"DIGITE O NUMERO DE EQUACOES: ";           
  cin>>n;                
    

 double a[n][n+1];       //DECLARAÇÃO DA SEGUNDA MATRIZ PARA ARMAZENAR OS ELEMENTOS DA MATRIZ AUMENTADA
 double x[n];            // DECLARAÇÃO DO ARRAY PARA ARMAZENAR OS VALORES DAS VARIÁVEIS L

    double eps,y;

    cout<<"\n OS ELEMENTOS DA MATRIZ AUMENTADOS EM UMA LINHA: \n";

    for (i=0;i<n;i++){      

        for (j=0;j<=n;j++){

            cout<<"["<<i+1<<"]"<<"["<<j+1<<"] = ";

   cin>>a[i][j];   //ENTRADA DOS ELEMENTOS NA MATRIZ

   }}

           

    x[i] =0; //CHUTE INICIAL
    eps = 0.001; //ERRO

 system ("cls");

 cout<<"---------------------------------GAUSS SEIDEL-----------------------------------";

 cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n";

 

 cout<<"----------------------------A MATRIZ É: ------------------------------";

 cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";

 for (i=0;i<n;i++){      

         cout<<"\nx"<<l++<<"= ";  //IMPRIME POR  X0=, X1=........

  for (j=0;j<=n;j++){ 

       

     if (j==n){          //CONDICIONAIS
     
  cout<<"="<<setw(1)<<a[i][j]<<setw(1)<<setw(2);}        

  else{                                                 

        cout<<"|"<<setw(1)<<a[i][j]<<setw(1)<<"|"<<setw(2);}   

   }}

 //SOLUÇÃO/       

 for (i=0;i<n;i++)      //CICLO PARA TORNAR EQUAÇÕES DIAGONALMENTE DOMINANTES

        for (k=i+1;k<n;k++) 

               

   if (abs(a[i][i])<abs(a[k][i]))  //TRANSFORMAÇÃO DE UM VALOR PARA UM VALOR ABSOLUTO NESTE CASO PARA DEVOLVER A MATRIZ PARA A FUNÇÃO DE ITERAÇÃO
                

    for (j=0;j<=n;j++)  

                {

                    double temp=a[i][j];

                    a[i][j]=a[k][j];

                    a[k][j]=temp;

                }

    cout<<"\n"; 

    //RESULTADO

 cout<<"--------MATRIZ AP0S APLICACAO DA DIAGONAL DOMINANTE DE GAUSS SEIDEL--------";

 cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";

 for (i=0;i<n;i++){     

         cout<<"\n x= "<<e++<<" ";  //IMPRIME  X0=, X1=........

  for (j=0;j<=n;j++){ 

     if (j==n){          

  cout<<"="<<setw(1)<<a[i][j]<<setw(1)<<setw(2);}        

  else{                                                  

        cout<<"|"<<setw(1)<<a[i][j]<<setw(1)<<"|"<<setw(2);}   

   }}

                

 cout<<"\n";

 cout<<"---------------------------------GAUSS SEIDEL-----------------------------------";

 cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";

 

 cout<<"ITERACAO: ."<<setw(9);
    for(i=0;i<n;i++)            //X1,X2,X3,XN..........

        cout<<"x"<<i+1<<setw(18); 

    cout<<"\n----------------------------------------------------------------------";

    do{                         //REALIZAR ITERACOES PARA CALCULAR X1, X2, ... XN

        cout<<"\n"<<count+1<<"."<<setw(16);  
        for (i=0;i<n;i++)       

        {

            y=x[i];

            x[i]=a[i][n];

            for (j=0;j<n;j++)

            {

                if (j!=i)

                x[i]=x[i]-a[i][j]*x[j];

            }

            x[i]=x[i]/a[i][i];

            if (abs(x[i]-y)<=eps)

                flag++;

            cout<<"|"<<x[i]<<"|"<<setw(18);//  
        }

        cout<<"\n";             

        count++;               

    }

 while(flag<n);              



    cout<<"\nA SOLUCAO EH:\n";

    for (i=0;i<n;i++)

        cout<<"x"<<i+1<<"  =  "<<x[i]<<endl; // X[n...]

    

 system ("PAUSE");

 return 0;

}
