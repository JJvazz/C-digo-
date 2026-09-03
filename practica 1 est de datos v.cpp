#include <iostream>
#include <array>
using namespace std;

int main() {
    array<double, 5> notas = {8.5, 9.0, 7.5, 10.0, 8.0};

    double suma = 0.0;

    for (double n : notas) {
        suma += n;
    }

    double promedio = suma / notas.size();

    cout << "Promedio: " << promedio << endl;

    system("pause");
    return 0;
}
