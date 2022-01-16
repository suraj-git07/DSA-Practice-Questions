#include <iostream>
using namespace std;

bool getbit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

void unique2(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)  // first find the xorsum 
    {
        xorsum = xorsum ^ arr[i];
    }

    // now xorsum is the xor of that 2 unique numbers

    
    // Now we find the pos in that xorsum where bit is set
    int pos = 0;
    while (true)
    {
        if (getbit(xorsum, pos))
        {
            break;
        }

        else
        {
            pos++;
        }
    }

    // Now we do Xor of only those numbers which have a set bit at pos same as xorsum
    // this will give us one of our number
    int xorsum1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (getbit(arr[i], pos))
        {
            xorsum1 = xorsum1 ^ arr[i];
        }
    }

    //our sec num should be , First ^ (First ^ Second)
    cout << xorsum1 << "  " << int(xorsum1 ^ xorsum)<<endl;
}

int main()
{
    int arr[10] = {1, 2, 3, 5, 1, 2 , 4 ,3 , 6 ,4};
    unique2(arr, 10);
    return 0;
}