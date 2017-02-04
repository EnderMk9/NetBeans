#include <iostream>
#include <cstdlib>

using namespace std;
int n;
int n2;
bool primo;

int main() {
    primo = true;
    n2 = 2;
    cout << "Introduzca un número: " << endl;
    cin >> n;
    while (n2 != n) {
        if (n2 == n) {
            n2 = n;
        } else {
            if (n % n2 == 0) {
                primo = false;
                n2 = n2 + 1;
            } else {
                if (primo == false) {
                    n2 = n2 + 1;
                } else {
                    n2 = n2 + 1;
                    primo = true;
                };
            };
        };

    };
    if (n == 1 || n == 2) {
        cout << "Primo" << endl;
    } else {
        if (primo == true) {
            cout << "El número " << n << " es primo." << endl;
        };
        if (primo == false) {
            cout << "El número " << n << " no es primo." << endl;
        };
    };
    cin.get();
    return 0;
}

