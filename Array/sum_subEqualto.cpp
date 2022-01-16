#include<iostream>
using namespace std;
int main(){
    int n;
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
       cin>>arr[i];
   }

   int S;
   cin>>S;

   int i = 0;
   int j = 0;
   int curr_sum = arr[0];

   while(i<n){
       
       if (curr_sum == S)
       {
           cout<<i<<" "<<j;
           break;
       }

       if (curr_sum <S)
       {
           j++;
           curr_sum+=arr[j];
       }

       else{
           curr_sum-=arr[i];
           i++;
       }

   }

   

   return 0;
}