// To find max and min in a 2D array

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//function to find the maximun number in the array 
int getMax(int arr[3][3], int rows, int col)
{
    int maxi = INT_MIN;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}
//function to find the minimum number in the array 
int getMin(int arr[3][3],int rows,int col){

    int Mini = INT_MAX;

    for (int i = 0; i < rows; i++)
    {
        for (int  j = 0; j < col; j++)
        {
            if (arr[i][j]<Mini)
            {
                Mini = arr[i][j];
            }
            
        }
        
    }
    return Mini;

    
}
int main()
{
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
    cout<<"Maximum number is ";

    cout<<getMax(arr,row,col)<<endl;
    cout<<"Minimum number is ";
    cout<<getMin(arr,row,col)<<endl;


    

    return 0;
}