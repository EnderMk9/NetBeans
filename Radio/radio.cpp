#include <iostream>
#include <cstdlib>

using namespace std;
float radio;
float lon;
float area;
float volumen;
const float pi  = 3.1416;

int main() {
    cout << "Introduce el radio:" << endl;
    cin >> radio;
    cout << "___________________" << endl;
    lon = radio * 2 * pi;
    area = radio * radio * pi;
    volumen = radio * radio * radio * pi / 0.75;
    cout << "La longitud de una circunferencia con radio " << radio << " es " << lon << "." << endl;
    cout << "El área de un círculo con radio " << radio << " es " << area << "." << endl;
    cout << "El volumen de una esfera con radio " << radio << " es " << volumen << "." << endl;
    return 0;
}

