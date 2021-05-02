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
    x = (b2-b1)/(m1-m2);
    y1= m1*x+b1;
    y2= m2*x+b2;
    if (m1!=m2)
    {
        cout << "Las rectas se intersectan en los puntos de coodernadas: (" << x << "," << y1 << ")" << endl;
    }
    else if (m1 ==m2 && b1==b2)
    {
        cout << "Las rectas son iguales." << endl;
    }
    else
    {
        cout << "Las rectas son paralelas, no se chocan en ningún punto." << endl;
    }
    return 0;
}
