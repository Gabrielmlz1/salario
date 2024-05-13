#include <iostream>

using namespace std;

int main () {

    string nombre;

    int h = 0, g = 0;

    float m = 0;
   
    cout << "Ingrese su nombre: \n";
    cin >> nombre;

    cout << "Ingrese sus horas trabajadas: \n";
    cin >> h;

    if( h <= 160)
    {
        m = h * 10;

    cout << nombre << "Su salario es de:\n";
    cout <<  m; }

    else if(h > 160)
    {
        m = ((h - 160) * 15) + (160 * 10);
        cout << "Su salario con sus horas extra trabajadas es:\n";
        cout << m << endl;
    }

    if(m <= 2000)
    {
        cout << "Usted es libre de impuesto."; }

    else if(m > 2000 && m <= 2200) 
    {

        g = (m * (-0.2)) + m;
        cout << "Su salario luego de inpuestos: \n";
        cout << g;
    }
    else if(m > 2201)
    {
        g = (m * (-0.3)) + m;
        cout << "Su salario luego de impuestos: \n";
        cout << g;
    }

return 0;

}




