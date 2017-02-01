#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
long double pi;
long int n;
long double n2;
long double n3;
long double sum;
long long int times;
int main() {
    n = 1;
    times = 5000000000000;
    sum = 0;
    while (times > 0)
    {
        n2 = 1 / pow(n,2) ; //Calculamos 1 término
        //cout << "n2 " << n2 << endl;
        n = n+1; //Sumamos 1 a n 
        n3 = 1 / pow(n,2) ;// Calculamos 2 término
        //cout << "n3 " << n3 << endl;
        n = n+1; //Sumamos 1 a n 
        sum = sum + n2+n3; //Sumamos los dos términos mas el valor inicial de la suma
        //cout << "sum " << sum << endl;
        times = times-1; // restamos 1 a times
    };
    pi = sum * 6;
    pi = sqrt(pi);
    cout << "pi: " << pi << endl;
    return 0;
}

