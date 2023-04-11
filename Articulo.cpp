/*Determinar cuánto pagará una persona en una tienda por un artículo considerando que tiene un descuento 
del 20% cuando se compran dos o más ejemplares del artículo. Recuerde calcular el 15% de I.V.A,
el subtotal y el total a pagar.*/

#include <iostream>

using namespace std;

int cantidad, precio, descuento, iva, subtotal, total;
int main()
{
    cout << "¿Cuanto es el numero de articulos que lleva? ";
    cin >> cantidad;
    cout << "¿Cual es el precio individual del articulo que lleva? ";
    cin >> precio;

    if (cantidad >= 2)
    {
        cout << "Tienes un descuento de 20%."<< endl;
        descuento = precio * cantidad * 0.20;
        subtotal = precio * cantidad - descuento;
        cout << "Tu subtotal con el descuento seria de: " << subtotal <<endl;
        total = subtotal * 0.15;
        iva = subtotal + total;
        cout << "Su total incluyendo el IVA es de: " << iva;
    }
    else
    {
        cout << "El descuento no aplica, su subtotal es: " << precio * cantidad << endl;
        subtotal = precio * cantidad;
        total = subtotal * 0.15;
        iva = subtotal + total;
        cout << "Su total incluyendo el IVA es de: " << iva;
    }
        return 0;

}