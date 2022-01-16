#include <iostream>
using namespace std;

int onebit(int n)
{

    int value = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        value++;
    }

    return value;
}

int main()
{
    cout << onebit(7);
    return 0;
}