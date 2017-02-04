#include <iostream>
using namespace std;
int a1;
int a2;
int r;
int num;
int an;
int ann;

int main() {
    cout << "Introduce el primer término" << endl;
    cin >> a1;
    cout << "Introduce la razón" << endl;
    cin >> r;
    cout << "Introduce n términos que quieras calcular" << endl;
    cin >> num;
    cout << "Progresión Geométrica" << endl;
    cout << a1 << endl;
    num = num - 1;
    an = a1 * r;
    cout << an << endl;
    while (num > 0) {
        ann = an * r;
        an = ann * r;
        cout << ann << endl;
        cout << an << endl;
        num = num - 1;

    };
    return 0;
}