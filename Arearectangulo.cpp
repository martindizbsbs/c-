#include <iostream>
using namespace std;

int main() {
    float largo, ancho, area;
    
    cout << "Ingresa el largo del rect�ngulo: ";
    cin >> largo;
    
    cout << "Ingresa el ancho del rect�ngulo: ";
    cin >> ancho;
    
    area = largo * ancho;
    
    cout << "El �rea del rect�ngulo es: " << area << endl;
    
    return 0;
}

