#include <iostream>
#include <math.h>  // Incluye la biblioteca math.h para funciones matemáticas

using namespace std;

int main()
{
    int a = 0;  // Declara e inicializa la variable 'a' en el ámbito principal de main
    cout << a << endl;  // Imprime el valor de 'a', que es 0

    {
        int a = 10;  // Declara e inicializa otra variable 'a' en un ámbito interno
        cout << a << endl;  // Imprime el valor de 'a' dentro de este ámbito, que es 10
    }

    cout << a << endl;  // Imprime el valor de 'a' fuera del ámbito interno, sigue siendo 0
}
