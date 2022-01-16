#include <iostream>
using namespace std;

int splitArray(int arr[], int n, int m)
{
    int start = 0;
    int end = 0;
    for (int i = 0; i < n; i++)
    {
        start = max(start, arr[i]);
        end += arr[i];
    }

    // binary Search
    while (start < end)
    {
        int mid = (start + end) / 2;

        int sum = 0;
        int pieces = 1;
        for (int i = 0; i < n; i++)
        {
            if (sum + arr[i] > mid)
            {
                sum = arr[i];
                pieces++;
            }
            else
            {
                sum += arr[i];
            }
        }

        if (pieces > m)
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }

    return end;
}

int main()
{
    int arr[]= { 7, 2, 5, 10, 8};
    cout<<splitArray(arr,5,2);
    return 0;
}