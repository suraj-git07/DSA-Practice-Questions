#include<iostream>
using namespace std;


void search(int arr[],int target){
    // basically i just have to find the correct start and end
   
    int low = 0;
    int high = 0;

    while(target > arr[high]){

        low = high +1;
        high = 2*(high +1);

    }

    cout<<low<<" "<<high<<endl;; 

    while(low<= high){
        int mid =(low + high)/2;

        if (arr[mid] == target)
        {
            cout<<mid<<endl;
            return ;
        }
        else if (arr[mid]<target)
        {
            low = mid + 1;
        }
        else{
            high = mid -1;
        }   
    }
   

}






int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,15,17,18,19,20,21,22,23,24,25,30};
    search(arr,23);
   return 0;
}