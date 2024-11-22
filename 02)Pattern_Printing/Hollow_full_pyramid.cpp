#include<iostream>
using namespace std;

int main()
{
    for(int row = 0; row < 6; row++)
    {
        // Leading spaces
        for(int col = 0; col < 6 - row - 1; col++)
        {
            cout << "  ";
        }

        // First star
        cout << "* ";

        // Middle spaces or stars
        for(int col = 1; col < 2 * row; col++)
        {
            if(row == 5) // Last row should be filled with stars
            {
                cout << "* ";
            }
            else
            {
                cout << "  "; // Space in between stars
            }
        }

        // Last star, if row > 0
        if(row > 0)
        {
            cout << "* ";
        }

        cout << endl;
    }
}
