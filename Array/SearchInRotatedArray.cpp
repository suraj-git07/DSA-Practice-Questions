// No dublicate numbers

#include <iostream>
using namespace std;

int findPivot(int arr[], int n)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > arr[mid + 1])
        {
            //    cout<<mid<<endl;
            return mid;
        }
        else if (arr[mid] < arr[mid - 1])
        {
            //    cout<<mid-1<<endl;
            return mid - 1;
        }

        else if (arr[mid] < arr[low])
        {
            high = mid - 1;
        }

        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

int binaryS(int arr[], int low, int high, int target)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

int Search(int arr[], int n, int target)
{
    int Pivot = findPivot(arr, n);

    if (arr[Pivot] == target)
    {
        return Pivot;
    }

    else if (Pivot == -1)
    {
        cout << "Pivot Not Found";
        return -1;
    }

    else
    {
        int value1 = binaryS(arr, 0, Pivot - 1, target);
        int value2 = binaryS(arr, Pivot + 1, n - 1, target);

        if (value1 != -1)
        {
            return value1;
        }

        else
        {
            return value2;
        }
    }
}

int main()
{
    int arr[] = {3, 4, 5, 9, 0, 1, 2};
    cout << Search(arr, 7, 0);
    return 0;
}