#include <iostream>
#include <cstdlib>

using namespace std;

int anno;
bool bisiesto;

int main() {
    cout << "Introduzca el año." << endl;
    cin >> anno;
    if (anno % 4 == 0)
    {
        if (anno % 100 == 0)
        {
            bisiesto = false;
        }
        else
        {
            bisiesto = true;
        };
        if (anno % 400 == 0)
        {
            bisiesto = true;
        };
    }
    else
    {
        bisiesto = false;
    };
    if (bisiesto == 1)
    {
        cout << "El año " << anno << " es bisiesto" << endl;
    }
    else
    {
        cout << "El año " << anno << " no es bisiesto" << endl;
    };
    cin.get();
    return 0;
}

