#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
  


/*string*/
string cadena = "Hola mundo...";
//cout << toUpper(cadena[0]);
for (int i = 0; i < cadena.size(); i++)
{
    cadena[i] = toupper(cadena[i]);
}
cout<<cadena<<endl;
    return 0;

}
