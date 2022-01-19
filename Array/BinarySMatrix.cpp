
// // Binary Search in Sorted Matrix

#include <iostream>
using namespace std;

// search in row provided between the column provided
void BinaryS(int arr[][4], int n, int m, int row, int cstart, int cend, int target)
{

    while (cstart <= cend)
    {
        int mid = (cstart + cend) / 2;
        if (arr[row][mid] == target)
        {

            
            cout <<"Fount at  row: "<< row << " and column: " << mid << endl;
            return;
        }

        else if (arr[row][mid] > target)
        {
            cend = mid - 1;
        }

        else
        {
            cstart = mid + 1;
        }
    }

    cout << -1 <<" in row : "<<row<< endl;
    
    return;
}

void search(int arr[][4], int n, int m, int target)
{
    if (n == 1)
    {
        BinaryS(arr, n, m, 0, 0, m - 1, target);
    }

    int rstart = 0;
    int rend = n - 1;
    int cmid = (m - 1) / 2;

    // till last two rows remain
    while (rstart < rend - 1)
    {
        int mid = (rstart + rend) / 2;

        if (arr[mid][cmid] == target)
        {
            cout << mid << " " << cmid;
        }

        else if (arr[mid][cmid] > target)
        {
            rend = mid;
        }
        else
        {
            rstart = mid;
        }
    }

    // now we have two rows
    // check whether target in col

    cout<<"remaining rows "<<rstart<<" "<<rend<<endl;
    cout<<"remaining col "<<cmid<<endl;

    if (arr[rstart][cmid] == target)
    {
        cout << rstart << " " << cmid;
        return;
    }

    if (arr[rend][cmid] == target)
    {
        cout << rend << " " << cmid;
        return;
    }

    // search in 1 half
    if (target <= arr[rstart][cmid - 1])
    {
        BinaryS(arr, n, m, rstart, 0, cmid - 1, target);
        cout<<"Found in 1 half"<<endl;
    }

    // search in 2 half
    else if (target >= arr[rstart][cmid + 1] && target <= arr[rstart][m - 1])
    {
        BinaryS(arr, n, m, rstart, cmid + 1, m - 1, target);
        cout<<"Found in 2 half"<<endl;
    }

    // search in 3 half
    else if (target <= arr[rend][cmid - 1])
    {
        BinaryS(arr, n, m, rend, 0, cmid - 1, target);
        cout<<"Found in 3 half"<<endl;
    }

    // search in 4 half
    else
    {
        BinaryS(arr, n, m, rend, cmid + 1, m - 1, target);
        cout<<"Found in 4 half"<<endl;
    }
}

int main()
{

    int arr[4][4] = {{10, 20, 30, 40}, {15, 25, 35, 45}, {28, 29, 37, 39}, {33, 34, 38, 50}};

    search(arr, 4, 4, 39);

    return 0;
}