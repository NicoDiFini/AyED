#include <iostream>

using namespace std;

double calcularPi(double iteraciones) 
{
  double numerador = 4;
  double denominador = 1; 
  double pi = 0;
  int i = 0;
  int operador = 1;

    for (i; i < iteraciones; i++) 
    {
        pi += operador * (numerador / denominador);
        denominador += 2;
        operador *= -1;
    }

    return pi;
}

int main() 
{
    double iteraciones = 1000000;
    double pi = calcularPi(iteraciones);
    cout.precision (7);  
    cout << "El valor aproximado de pi es: " << pi << endl;

    return 0;
}
