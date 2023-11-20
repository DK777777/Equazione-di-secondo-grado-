#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cout << "Inserisci il coefficiente a: ";
    cin >> a;
    cout << "Inserisci il coefficiente b: ";
    cin >> b;
    cout << "Inserisci il coefficiente c: ";
    cin >> c;
    double delta = b * b - 4 * a * c;
    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "La disequazione ha due soluzioni reali: x1 = " << x1 << " e x2 = " << x2 << endl;
    } else if (delta == 0) {
        double x = -b / (2 * a);
        cout << "La disequazione ha una soluzione reale: x = " << x << endl;
    } else {
        cout << "La disequazione non ha soluzioni reali." << endl;
    }
return 0;
} 

