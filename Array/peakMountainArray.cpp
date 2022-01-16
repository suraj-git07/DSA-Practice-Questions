#include <iostream>
using namespace std;

void SearchPeak(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    int ans = 0;
    while (low < high)
    {

        int mid = (low + high) / 2;
        ans = arr[mid];
        if (arr[mid] > arr[mid + 1])
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout<<ans; //after getting right mid
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 4, 3, 2, 1, 0};
    SearchPeak(arr, 13);
    return 0;
}