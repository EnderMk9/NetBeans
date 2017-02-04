#include <iostream>
#include <stdlib.h>
using namespace std;

float f;
float c;

int main() {
    cout << "Conversor de Fahrenheit a Celsius" << endl;
    cout << "_________________________________" << endl;
    cout << "Ingrese grados:" << endl;
    cin >> f;
    cout << "______________" << endl;
    c = (f - 32) / 1.8;
    cout << f << " Grados Fahrenheit son: " << c << " Grados Celsius" << endl;
    cin.get();
    return 0;
}