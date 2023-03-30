//transpose  = = = rows colum ban jati hai and colum rows ban jati hai 

#include<iostream>
using namespace std ;
void transpose(int arr[3][3],int r,int c,int transposeArr[3][3]){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            transposeArr[j][i] = arr[i][j];
        
        }
        
    }

}
void printArray(int arr[3][3],int r, int c){

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

}
int main(){
    int arr[3][3];
    int col = 3;
    int row = 3;
    //taking input from the user 
    cout<<"Taking input from the user "<<endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        
        }
        
    }
    cout<<"Done taking the input now showing the input "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        
        }
        cout<<endl;

        
    }
    cout<<"now performing transpose"<<endl;
    int transposeArr[3][3];
    transpose(arr,row,col,transposeArr);
    cout<<"After transpose array is :- "<<endl;
    printArray(transposeArr,row,col);

    

return 0;
}

