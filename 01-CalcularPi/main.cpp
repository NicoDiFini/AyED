#include <iostream>
#include <cmath>

using namespace std;

double calcularPi() 
{
  double numerador = 4;
  double denominador = 1; 
  double pi = 0;
  int i = 0;
  int operador = 1;

  while (abs(pi - 3.141592) > 0.0000001) 
  {
    pi += operador * (numerador / denominador);
    denominador += 2;
    operador *= -1;
    i++;
  }

  cout << "Se necesitaron " << i << " iteraciones para alcanzar la precision deseada." << endl;
  return pi;
}

int main() 
{
  double pi = calcularPi();
  cout.precision(7);
  cout << "El valor aproximado de pi es: " << pi << endl;

  return 0;
}
