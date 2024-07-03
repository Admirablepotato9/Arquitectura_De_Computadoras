#include <iostream>
#include <math.h>  // Incluye la biblioteca math.h (aunque no se utiliza en este código)

using namespace std;

// Función nochange que recibe un parámetro por valor
void nochange(int a)
{
    a = a + a;  // Modifica localmente el valor de 'a'
}

// Función change que recibe un parámetro por referencia mediante puntero
void change(int *a)
{
    *a = *a + *a;  // Modifica el valor apuntado por 'a' (es decir, modifica la variable original)
}

int main()
{
    int x = 1;  // Declara e inicializa la variable 'x' con valor 1
    int y = 1;  // Declara e inicializa la variable 'y' con valor 1

    cout << x << " " << y << endl;  // Imprime los valores iniciales de 'x' y 'y'

    nochange(x);  // Llama a la función 'nochange' pasando 'x' por valor
    change(&y);   // Llama a la función 'change' pasando la dirección de 'y' (usando '&y') para modificar 'y'

    cout << x << " " << y << endl;  // Imprime los valores de 'x' y 'y' después de llamar a las funciones

    return 0;
}
