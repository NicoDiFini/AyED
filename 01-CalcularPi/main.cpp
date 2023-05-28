#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    double pi,s;
    int n,i,signo;
    
    s=0;
    signo=1;
    i=1;

    while (abs(4*s-3.141592) >= 0.000001)
    {
        s=s+signo*(1/(2*i-1));
        signo=-signo;
        i++;
    }
    
    pi = 4*s;
    n=i-1;

    cout << "El valor aproximado de pi es: " << pi << endl;
    cout << "Se realizaron " << n << " iteraciones." << endl;

    return 0;
}