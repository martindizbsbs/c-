#include <iostream>
using namespace std;

int main() {
    float largo, ancho, area;
    
    cout << "Ingresa el largo del rectángulo: ";
    cin >> largo;
    
    cout << "Ingresa el ancho del rectángulo: ";
    cin >> ancho;
    
    area = largo * ancho;
    
    cout << "El área del rectángulo es: " << area << endl;
    
    return 0;
}

