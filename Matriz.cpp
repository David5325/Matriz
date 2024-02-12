#include <iostream>
#include <vector>

using namespace std;

int main() {
    int filas, columnas;

    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> columnas;

vector<vector<int> > matriz(filas, vector<int>(columnas));


    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "La matriz ingresada es:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
