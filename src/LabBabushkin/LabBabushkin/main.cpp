#include <iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int R, x, y;
	cout << "������� R: " << endl;
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
                cout << "���������!" << endl;
            else
                cout << "������..." << endl;
        }

        if (x < 0)
        {
            if (((x * x) + (y * y) <= R * R) && (x >= y))
                cout << "���������!" << endl;
            else
                cout << "������..." << endl;
        }
    }
    system("pause");
	return 0;
}