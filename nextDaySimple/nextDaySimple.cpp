#include <iostream>
#include <cstdlib>
#include <string> 

using namespace std;
string fecha;
string dia;
int dias;
string dia1;
string dia2;
string mes;
int meses;
string mes1;
string mes2;
string anno;
int annos;
string anno1;
string anno2;
string anno4;
string anno5;
bool bisiesto;
int main() {
    cout << "Introduzca la fecha en este formato ´DD-MM-AAAA´" << endl;
    cin >> fecha;
    dia1 = fecha[0];
    dia2 = fecha[1];
    dia = dia1 + dia2;
    dias = atoi(dia.c_str());
    mes1 = fecha[3];
    mes2 = fecha[4];
    mes = mes1 + mes2;
    meses = atoi(mes.c_str());
    anno1 = fecha[6];
    anno2 = fecha[7];
    anno4 = fecha[8];
    anno5 = fecha[9];
    anno = anno1 + anno2 + anno4 + anno5;
    annos = atoi(anno.c_str());
    if (annos % 4 == 0)
    {
        if (annos % 100 == 0)
        {
            bisiesto = false;
        }
        else
        {
            bisiesto = true;
        };
        if (annos % 400 == 0)
        {
            bisiesto = true;
        };
    }
    else
    {
        bisiesto = false;
    };
    if (meses > 12)
    {
        cout << "fecha incorrecta";
    }
    else
    {
        if (meses % 2 == 0) // meses pares
        {
            if (meses == 12 || meses == 10 || meses == 8)
            {
                if (dias > 31)
                    {
                        cout << "fecha incorrecta";
                    }
            }
            else
            {
             if (dias > 30)
               {
                cout << "fecha incorrecta";
                };
             if (meses == 02) // Febrero
             {
                if (bisiesto == 1)
                {
                    if (dias > 29)
                    {
                        cout << "fecha incorrecta";
                    }
                }
                else 
                    {
                    if (dias > 28)
                    {
                    cout << "fecha incorrecta";
                    };
                };
            };
            };
        }
        else // meses impares
        {
            if (dias > 31)
            {
            cout << "fecha incorrecta";
            }; 
        };
    };
    if (dias == 31 && meses == 12)
    {
        annos = annos+1;
        meses = 01;
        dias = 01;
    }
    else
    {
        if (dias == 29 && meses == 2 && bisiesto == 1)
        {
            dias = 1;
            meses = meses +1;
        }
        else
        {
        if (dias == 31)
        {
            meses = meses+1;
            dias = 1;
        }
        else
        {
            dias = dias+1;
        };
        };
    };
    cout << "La fecha es: " << dias << "-" << meses << "-" << annos <<endl;
    cin.get();
    return 0;
}

