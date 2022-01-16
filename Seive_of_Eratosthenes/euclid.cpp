#include<iostream>
using namespace std;

int gcd(int n,int m){
    
    while (m!=0)
    {
        cout<<"old n ="<<n<<" ";
        cout<<"old m ="<<m<<" ";
        
        int rem = n%m;
        
        cout<<"rem ="<<rem<<"|";
        
        n = m;
        m = rem;
        cout<<"new n ="<<n<<" ";
        cout<<"new m ="<<m<<" ";
        cout<<endl;
    }
    
    return n;
}



int main(){
    int n , m;
    cin>>n>>m;
    cout<<gcd(n,m);
   return 0;
}