#include <iostream>

using namespace std;
int main(int argc, char const *argv[])

{
/*Leer un numero deict si es multilpo de 5 */
//condicionales
int num;
cout << "Dime un #: ";
cin >> num;
//Condicional
if (num % 5==0)
{
    cout<<num<<" es multiplo de 5"<<endl;
}else{
    cout<<num<<" no es multiplo de 5"<<endl;

}
}
