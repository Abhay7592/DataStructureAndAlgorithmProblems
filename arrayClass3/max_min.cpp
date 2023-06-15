#include<iostream>
#include <limits.h>
using namespace std ;

int InputFunc(int arr[3][3],int rows, int cols){
    cout<<"taking input from the user "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>arr[i][j];
        }
        
    }
   
    
}
int outputFunc(int arr[3][3],int rows, int cols){
    cout<<"Showing the output "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
   
    
}
int getMax(int arr[3][3],int rows, int cols){
    int maxi = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j]>maxi)
            {
                maxi = arr[i][j];
            }
            
        }
        
    }
    return maxi;
    
}
int getMin(int arr[3][3],int rows, int cols){
    int mani = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j]<mani)
            {
                mani = arr[i][j];
            }
            
        }
        
    }
    return mani;
    
}


int main(){
int arr[3][3];
int rows = 3;
int cols = 3;



InputFunc(arr,rows,cols);
outputFunc(arr,rows,cols);
cout<<"The maximum number is "<<getMax(arr,rows,cols)<<endl;
cout<<"The minimum number is "<<getMin(arr,rows,cols)<<endl;




return 0;
}