#include <iostream>
#include <cstdlib>

using namespace std;
float millas;
float metros;
float km;

int main() {
    
    cout << "Introduzca el número de millas:" << endl;
    cin >> millas;
    cout << "_____________________________" << endl;
    metros = millas / 0.00062137;
    km = metros / 1000;
    cout << millas << " millas son: " << metros << " metros y " << km << " kilometros." << endl;
    return 0;
}

