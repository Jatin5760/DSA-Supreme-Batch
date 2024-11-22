#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int target)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int index_occ = -1;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            index_occ = mid;
            e = mid - 1;
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return index_occ;
}

int main()
{
    int arr[] = {1, 3, 4, 4, 4, 4, 6, 7};
    int size = 8;
    int target = 4;

    int occ = firstOcc(arr, size, target);

    cout << "First occurance of target is: "<<occ<<endl;

    return 0;
}
