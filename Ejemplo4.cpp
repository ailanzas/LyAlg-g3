#include <iostream>

using namespace std;

int sumar(int num1, int num2);
int restar(int num1, int num2);
int multiplicar(int num1, int num2);
void dividir(int num1, int num2);

int main()
{
/*Realizar las operaciones basicas de aritmetica
1. sumar
2. restar
3. multiplicar
4. dividir
*/
cout << sumar(3,3)<<endl;
cout << restar(10,9)<<endl;
cout << multiplicar(8,5)<<endl;
dividir(5,9);

return 0;
}
int sumar(int num1, int num2){
return num1 + num2;

}
int restar(int num1, int num2){
return num1 - num2;
}
int multiplicar(int num1, int num2){
return num1 * num2;
}
void dividir(int num1, int num2)
{
if (num2>0)
{
   cout<< num1 / num2;
   }
cout<<"No se puede dividir entre 0"<<endl;

}