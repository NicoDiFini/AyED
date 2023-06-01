#include <iostream>

using namespace std;

double calcularPi(int iteraciones) 
{
    double suma = 0;
    int signo = 1;
    int i = 0

    for (i; i < iteraciones; i++) 
    {
        suma = suma + signo * (1/ (2 * i + 1));
        signo = -signo;
    }

    return suma * 4;
}

int main() 
{
    double numIteraciones = 1000000;
    cout.precision (7);
    
    double pi = calcularPi(numIteraciones);

    cout << "El valor aproximado de pi es: " << pi << endl;

    return 0;
}