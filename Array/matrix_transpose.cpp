#include<iostream>
using namespace std;
int main(){
    
    int n;  // since square matrix
    cin>>n;
    int mat[n][n];

    for(int i=0;i<n;i++){
        for(int j = 0; j<n;j++){
            cin>>mat[i][j];
        }
    }

    // transpose code;

    // swapping just the upper triangle in a square matrix
    for (int i = 0; i < n-1; i++)  // no req of last row
    {
        for (int j = i+1; j<n; j++) 
        {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
        
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j = 0; j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    
   return 0;
}