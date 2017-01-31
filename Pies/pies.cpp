#include <iostream>
#include <cstdlib>

using namespace std;
float foot;
float metros;

int main() {
    
    cout << "Introduzca el número de pies:" << endl;
    cin >> foot;
    cout << "_____________________________" << endl;
    metros = foot / 3.2808;
    cout << foot << " pies son: " << metros << " metros." << endl;
    return 0;
}

