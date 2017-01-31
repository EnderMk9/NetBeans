#include <iostream>
using namespace std;
int a1;
int a2;
int d;
int num;
int an;
int ann;

int main()
{
    cout << "Introduce el primer término" << endl;
    cin >> a1;
    cout << "Introduce la diferencia" << endl;
    cin >> d;
    cout << "Introduce n términos que quieras calcular" << endl;
    cin >> num;
    cout << "Progresión aritmética" << endl;
    cout << a1 << endl;
    num = num-1;
    an = a1 + d;
    cout << an << endl;
    while (num > 0)
    {
       ann = an + d;
       an = ann + d;
       cout << ann << endl;
       cout << an << endl;
       num = num-1;
       
    };
	return 0;
}