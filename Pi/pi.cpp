#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
long double pi;
long long int n;
long double a1;
long double sum;
long long int times;
long long int times2;

int main() {
    cout.precision(50000000);
    cout << "Introduce el número de términos para calcular:" << endl;
    cin >> times;
    n = 1;
    times2 = 1;
    sum = 0;
    while (times > 0) {
        a1 = 1 / pow(n, 2); //Calculamos 1 término
        n = n + 1; //Sumamos 1 a n 
        sum = sum + a1; //Sumamos los dos términos mas el valor inicial de la suma
        if (times2 == 1) {
            cout << "Round " << times2 << endl;
        };
        if (times2 % 10000000 == 0) {
            cout << "Round " << times2 << endl;
        };
        times2 = times2 + 1;
        times = times - 1; // restamos 1 a times

    };
    pi = sqrt(sum * 6);
    cout << "___________________________________" << endl;
    cout << "pi: " << pi << endl;
    return 0;
}

