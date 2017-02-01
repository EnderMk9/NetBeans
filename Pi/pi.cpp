#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
long double pi;
long double pimult;
long double pisqrt;
long long int n;
long double a1;
long double a2;
long double sum;
long long int times;
long long int times2;
int main() {
    cout << "Introduce el número de términos para calcular:" << endl;
    cin >> times;
    n = 1;
    times = times / 2;
    times2 = 1;
    sum = 0;
    while (times > 0)
    {
        cout.precision(500000);
        a1 = 1 / pow(n,2) ; //Calculamos 1 término
        //cout << "a1 " << a1 << endl;
        n = n+1; //Sumamos 1 a n 
        a2 = 1 / pow(n,2) ;// Calculamos 2 término
        //cout << "a2 " << a2 << endl;
        n = n+1; //Sumamos 1 a n 
        sum = sum + (a1 + a2); //Sumamos los dos términos mas el valor inicial de la suma
        //cout << "sum " << sum << endl;
        if (times2 == 1)
        {
        cout << "Round " << times2 << endl; 
        };
        if (times2 % 10000000 == 0)
        {
        cout << "Round " << times2 << endl;
        };
        times2 = times2 +1;
        times = times-1; // restamos 1 a times
        
    };
    //cout << "sum: " << sum << endl;
    pimult = sum * 6;
    //cout << "pimult: " << pimult << endl;
    pisqrt = sqrt(pimult);
    //cout << "pisqrt: " << pisqrt << endl;
    pi = pisqrt;
    cout << "___________________________________" << endl;
    cout << "pi: " << pi << endl;
    return 0;
}

