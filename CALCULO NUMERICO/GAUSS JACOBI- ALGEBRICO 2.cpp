
#include <iostream>
#include <cmath>

using namespace std;

int n;

float jacobi(float matrix[], float aux[], int component);


float get_error(float x_prev[], float x[], int component);

int main(){
  cout << "Quantas variaveis? ";
  cin >> n;

  float a[n][n], b[n], x[n], x_prev[n], aux[n], error[n];

  
  float toleran;

  int itera= 0;

  int max_itera;
  bool error_toleran;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout << "Coeficiente: " << i << ", " << j << ": ";
      cin >> a[i][j];
    }
  }

  for(int i = 0; i < n; i++){
    cout << "Equacao" << i + 1 << "resultado: ";
    cin >> b[i];
  }

  cout << "Erro: ";
  cin >> toleran;

  cout << "Iteracoes: ";
  cin >> max_itera;

  for(int i = 0; i < n; i++){
    cout << "Variavel " << i << " chute inicial: ";
    cin >> x_prev[i];
  }

  do{
    for(int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
        aux[j] = a[i][j];
      }


      x[i] = (1/a[i][i]) * (b[i] - jacobi(aux, x_prev, i));
    
      error[i] = get_error(x, x_prev, i);
    }

    for(int i = 0; i < n; i++){
      if(error[i] <= toleran){
        error_toleran = true;
      }
      else{
        error_toleran= false;
        break;
      }
    }

    cout << endl << "Iteracao: " << itera << endl;
    for(int i = 0; i < n; i++){

      x_prev[i] = x[i];
      cout << "X" << i + 1 << " = " << x[i] << endl;
    }
    itera++;
  } while( error_toleran== false && itera < max_itera);
  cout << endl << "Encerrado" << endl << "Iteracao: " << itera- 1 << endl;

  for (int i = 0; i < n ; i++){
    cout << "X" << i + 1 << " valor aproximado = " << x[i] << endl;
  }
  return 1;
}

float get_error(float vector1[], float vector2[], int component){
  float error;

  error = fabs((vector1[component] - vector2[component]) / vector1[component]);
  return error;
}

float jacobi(float Matrix[], float aux[], int component){
  float temp = 0;
  for (int i = 0; i < n; i++){
    if (component != i){
      temp = temp + Matrix[i] * aux[i];
    }
  }
  return temp;
}
