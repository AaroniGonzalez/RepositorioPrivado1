#include <iostream>

using namespace std;

main()
{
    float velocidad;
    cout << "Ingrese un valor en km/h: " << endl;
    cin >> velocidad;
    if (velocidad >= 0)
    {
        cout << "Valor en m/s: " << velocidad/3.6 << endl;
    }
    else
        cout << "La velocidad no puede ser negativa" << endl;
    return 0;
}

