#include<iostream>
using namespace std;
int main(){
    
    int n,m;  // since square matrix
    cin>>n>>m;
    int mat[n][m];

    for(int i=0;i<n;i++){
        for(int j = 0; j<m;j++){
            cin>>mat[i][j];
        }
    }

    int value;
    cin>>value;
 
    // here since our matrix is sorted  
    //(start with right upper end  , if we use lower rules)
    // value > currvalue  move down
    // value < currvalue move left
    
    int r = 0 , c = m-1;
    while(r<n && c >=0){
        if (mat[r][c]==value)
        {
            cout<<"found at "<<r<<" "<<c<<" pos";
            return 0;
        }
        if (mat[r][c]>value)
        {
            c--;
        }

        else{
            r++;
        }
        
        
    }

    cout<<"value not found";
    
   return 0;
}