#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // kadane's algorithm

    int curr_sum = 0;
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            cout<<"adding "<<arr[i]<<endl;
            curr_sum += arr[i];
        }
        else
        {
            cout<<"curr_max "<<curr_sum<<endl;
            max_sum = max(max_sum, curr_sum);
            curr_sum = 0;
        }
    }
    max_sum = max(curr_sum,max_sum);

    cout << max_sum;

    return 0;
}


// for max circular subarray

// Max subarray sum  = total sum of array - sum of non contributing ele


// we can find sum of non contributing ele using:
//            change the sign of all ele in array
//            apply kadane and find the max sum contiguous block
//            that is actuly highest negative block of ele