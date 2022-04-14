#include <iostream>
#include "Circle.h"
#include "Point.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int R, x, y;
	cout << "Введите R: " << endl;
	cin >> R;
	Circle A(R);

    for (int i = 0; i < 10; i++)
    {
        cout << "x" << i + 1 << ": " << endl;
        cin >> x;
        cout << "y" << i + 1 << ":" << endl;
        cin >> y;
        Point Z(x, y);
        cout << endl;
        if (A.Check(Z) == true)
            cout << "Попадание!" << endl;
        else
            cout << "Промах..." << endl;
    }
    system("pause");
	return 0;
}