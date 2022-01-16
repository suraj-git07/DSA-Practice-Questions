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

   int idx[100];
   for (int i = 0; i < 100; i++)
   {
       idx[i] = 0;
   }

//    for (int i = 0; i < n; i++)
//    {
//        idx[arr[i]]++;
//    }

//    int ele = false;
//    for (int i = 0; i < 100; i++)
//    {
//        if (idx[i]>1)
//        {
//             ele = i;
//             break;
//        }
       
//    }

//    if (ele == false)
//    {
//        cout<<"No ele is repeating";
//        return 0;
//    }
   

   
//    int rep_idx;
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i]==ele)
//        {
//           rep_idx = i;
//           break;
//        }
       
//    }
   
//    cout<<rep_idx;
   

   // __________________________________________________________diff approach____________________________

   int min_idx = INT_MAX;
   
   for (int i = 0; i < n; i++)
   {
       if (idx[arr[i]]!= 0)
       {
           min_idx  = min(min_idx,idx[arr[i]]);
       }

       else{
           idx[arr[i]] = i;
       }
       
   }

   if(min_idx == INT_MAX){
       cout<<-1;
   }
   else{
       cout<<min_idx<<endl;
   }
   
   
   return 0;
}