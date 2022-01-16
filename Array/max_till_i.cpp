#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;
int main(){
   
   
   int n;
   cin>>n;
   int arr[n];
   for(int i = 0; i<n;i++){
       cin>>arr[i];
   }

   int maxnum = INT_MIN;
   for(int i = 0; i<n;i++){
       maxnum = max(maxnum,arr[i]);
   }

   cout<<maxnum;
   return 0;
}