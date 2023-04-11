/*Leer la nota de un estudiante y decir si aprobó o reprobó,
un estudiante aprueba si su nota es mayor o igual a 70.*/

#include <iostream>

using namespace std;

int nota, calculo;

int main()
{
    cout << "Dime la nota que obtuviste: ";
    cin >> nota;

    if (nota >= 70)
    {
        cout << "Usted ha aprobado.";
    }
    else
    {
        cout << "Usted no ha aprobado.";
    }

    return 0;
}