#include <iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int R, x, y;
	cout << "Введите R: " << endl;
	cin >> R;

    for (int i = 0; i < 10; i++)
    {
        cout << "x" << i + 1 << ": " << endl;
        cin >> x;
        cout << "y" << i + 1 << ":" << endl;
        cin >> y;
        cout << endl;
        if (x > 0)
        {
            if (((x * x) + (y * y) <= R * R) && (x <= y))
                cout << "Попадание!" << endl;
            else
                cout << "Промах..." << endl;
        }

        if (x < 0)
        {
            if (((x * x) + (y * y) <= R * R) && (x >= y))
                cout << "Попадание!" << endl;
            else
                cout << "Промах..." << endl;
        }
    }
    system("pause");
	return 0;
}