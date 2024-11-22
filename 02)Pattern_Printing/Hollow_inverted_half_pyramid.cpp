#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number " << endl;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        if (row == 0)
        {
            for (int col = 0; col < n; col++)
            {
                cout << "* ";
            }
            cout << endl;
        }

        else
        {
            for (int col = 0; col < n; col++)
            {
                if (col == n - row - 1 || col == 0)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
}
