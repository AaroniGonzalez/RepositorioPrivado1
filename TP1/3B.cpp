#include <iostream>
#include <math.h>

using namespace std;
main()
{
    setlocale(LC_CTYPE, "Spanish");
    float m1,m2,b1,b2,x,y1,y2;
    cout << "Ingrese los valores de las pendientes m1 y m2: " << endl;
    cin >> m1 >> m2;
    cout << "Ahora ingrese los valores de las ordenadas al origen b1 y b2: " << endl;
    cin >> b1 >> b2;
    if (m1-m2==0)
    {
        if (b1==b2)
        {
            cout << "Las rectas con iguales, se intersectan en todos los puntos." << endl;
        }
        else
            cout << "Las rectas son paralelas, no se intersectan" << endl;
    }
    else
    {
        x = (b2-b1)/(m1-m2);
        y1= m1*x+b1;
        y2= m2*x+b2;
        cout << "El punto de interseccion es: (" << x << ";" << y1 << ")" << endl;
    }
    return 0;
}
