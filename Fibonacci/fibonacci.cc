#include <iostream>
#include <stdlib.h>
using namespace std;
long long int an;
long long int ann;
int num;
int main() {
    cout << "Número de repeticiones:" << endl;
    cin >> num;
    cout << "_______________________" << endl;
    an = 0;
    ann = 1;
    cout << an << endl;
    cout << ann << endl;
    an = ann + an;
    ann = an + ann;
    cout << an << endl;
    cout << ann << endl;
    while (num > 0)
    {
    an = ann + an;
    ann = an + ann;
    cout << an << endl;
    cout << ann << endl;
    num = num-1;
    }
    return 0;
}