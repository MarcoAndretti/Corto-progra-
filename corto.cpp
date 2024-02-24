/*#include <iostream>
using namespace std;

int main() {
    int año;

    cout << "Ingrese el año: ";
    cin >> año;

    if (año % 4 == 0 && año % 100 != 0 || año % 400 == 0) {
        cout << año << " es un año bisiesto." << endl;
    } else {
        cout << año << " No es un año bisiesto." << endl;
    }

    return 0;
}*/
//Serie Fibonacci

/*#include <iostream>

int main() {
    int n;
    std::cout << "Ingrese el número hasta el cual desea generar la secuencia de Fibonacci: ";
    std::cin >> n;

    int a = 0, b = 1;
    std::cout << "Serie de Fibonacci hasta el número " << n << ":\n";
    std::cout << a << " " << b << " ";

    while (a + b <= n) {
        int c = a + b;
        std::cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}*/

//CALCULO DE FACTORIAL

/*#include <iostream>

int main() {
    int n;
    std::cout << "Ingrese un numero: ";
    std::cin >> n;
    long long factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    std::cout << "El factorial de " << n << " es " << factorial << std::endl;

    return 0;
}*/
