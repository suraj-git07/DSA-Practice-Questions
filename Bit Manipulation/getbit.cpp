// '<<' this is left shift operator
// 1 << 2  =  0100

#include <iostream>
using namespace std;

bool getbit( int n, int pos)
{
    return ((n & (1<<pos)) != 0);
}

int main()
{

    int n;
    cin >> n;

    int pos; // index
    cin >> pos;

    cout << getbit(n, pos);
    return 0;
}