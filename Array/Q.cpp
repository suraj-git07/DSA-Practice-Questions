#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n; // size of ..
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int numa = 0;
    int numb = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'a')
            numa++;
        
        else
            numb++;
    }

    int change = 0;
    
    
    
    if(numa == 0 || numb ==0){
        change = 0;
        cout<<change;
        return 0;
    }
    
    else if (numa>=numb)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i]=='b')
            {
                change++;
            }
            
        }
        
    }
    else 
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i]=='a')
            {
                change++;
            }
            
        }
        
    }


    cout<<change;
    

    
    return 0;
}