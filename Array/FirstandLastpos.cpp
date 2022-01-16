#include <iostream>
using namespace std;

int searchFunc(int arr[], int n, int target, bool Firstoccur)
{
    int ans;
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            if (Firstoccur)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

void FandL(int arr[], int n, int target)
{

    int ansA[] = {-1, -1};

    ansA[0] = searchFunc(arr, n, target, true);
    ansA[1] = searchFunc(arr, n, target, false);

    cout << ansA[0] << " " << ansA[1];
}

int main()
{
    int arr[] = {1, 7, 7, 9, 7, 13};
    FandL(arr, 6, 7);
    return 0;
}