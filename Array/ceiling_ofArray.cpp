#include<iostream>
using namespace std;

void ceiling(int arr[],int n,int value){
    int low = 0;
    int high = n-1;

    while(low<= high){
        int mid =(low + high)/2;
        // cout<<low<<" "<<high<<" "<<mid<<endl;

        if (arr[mid] == value)
        {
            cout<<arr[mid]<<endl;
            return ;
        }
        else if (arr[mid]<value)
        {
            low = mid + 1;
        }
        else{
            high = mid -1;
        }   
    }
    
    if (low>n-1)
    {
        cout<<"ceiling not exist"<<endl;
        return ;
    }

    else{
        cout<<arr[low]<<endl;
        return ;
    }
    


}



int main(){
    int arr[] = {1,2,5,9,12,13};
    ceiling(arr,6,0);
   return 0;
}