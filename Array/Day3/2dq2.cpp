#include<iostream>
using namespace std ;
int main(){
    int arr[4][3];
    int rows = 4 ;
    int cols=3;

    //takng input in 2d array 
    for (int i = 0; i < rows; i++)
    {
        for (int  j = 0; j < cols; j++)
        {
            cin>>arr[i][j];

        }
        
    }
    //printimg out in row wise 
    cout<<"Printing array row wise"<<endl;
    for (int  i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j];

        }
        cout<<endl;
    }

    //printimg out in row wise 
    cout<<"Printing array column wise"<<endl;
    for (int  i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols+1; j++)
        {
            cout<<arr[j][i];

        }
        cout<<endl;
    }
    
    



return 0;
}