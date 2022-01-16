#include <iostream>
using namespace std;

bool ifpowerof2(int n)
{

    int mask = n & (n - 1);

    return !mask;
}

int main()
{
    cout << ifpowerof2(16);
    return 0;
}