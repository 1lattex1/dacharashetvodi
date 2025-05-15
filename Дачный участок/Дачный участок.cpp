#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    float t, S, n, Hg, L, d,Q,H,Re,l,W,h;
    cout << "Введите время t = ";
    cin >> t;
    cout <<endl<< "Введите  площадь участка S= ";
    cin >> S;
    cout << endl << "Введите количество человек n= ";
    cin >> n;
    cout << endl << "Введите Hg= ";
    cin >> Hg;
    cout << endl << "Введите L = ";
    cin >> L;
    cout << endl << "Введите d = ";
    cin >> d;
    Re = d / pow(10, -6);
    if (Re < 2320)
        l = 64 / Re;
    else l = 0.3 / pow(Re, 0.25);
    h = l * (L / (19.6 * d));
}

