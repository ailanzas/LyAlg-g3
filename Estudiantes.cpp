/*Leer la nota de un estudiante y decir si aprobó o reprobó,
un estudiante aprueba si su nota es mayor o igual a 70.*/

#include <iostream>

using namespace std;

void aprobado();
void noaprobado();

int main()
{
    int nota;
    cout << "Dime la nota que obtuviste: " << endl;
    cin >> nota;

    if (nota >= 70)
    {
        aprobado();
    }
    else
    {
        noaprobado();
    }

    return 0;
}

void aprobado()
{
    cout << "Usted ha aprobado.";
}
void noaprobado()
{
    cout << "Usted no ha aprobado.";
}