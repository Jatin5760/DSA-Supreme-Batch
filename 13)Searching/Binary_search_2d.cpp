#include <iostream>
using namespace std;
int binary2D(int arr[][4], int size, int target, int m, int n)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int col = n;
    int row = m;

    while (s <= e)
    {
        int row_index = mid / col;
        int col_index = mid % col;
        int element = arr[row_index][col_index];

        if (element == target)
        { 
            return true;
        }
        else if (element > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    int arr[5][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16},
                     {17, 18, 19, 20}};
    int m = 5;
    int n = 4;
    int size = m * n;

    int target;
    cout << "Enter the element which you wanted to search: " << endl;
    cin >> target;

    int finalanswer = binary2D(arr, size, target, m, n);
    if (finalanswer == 1)
    {
        cout << "Yes, your element is present" << endl;
    }
    else
    {
        cout << "Sorry the element is not present" << endl;
    }

    return 0;
}