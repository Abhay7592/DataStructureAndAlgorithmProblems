#include<iostream>
using namespace std ;
int main(){
    //declare 2D array
    int arr[3][3];
    //initilization 
    int brr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
        };

cout<<"Printing row wise"<<endl;

//rowwise printing 
for (int i = 0; i <3 ; i++)
{
    //for every row , we need to print value in each column
    for (int j = 0; j < 3; j++)
    {
        cout<<brr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"Printing column wise"<<endl;
//columnwise printing 
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout<<brr[j][i]<<" ";
    }
    cout<<endl;
}


return 0;
}


//Notes:- formula for accesing a specific elememnt in a 2D array is (c*i+j) 
//where c= num of coloums , R= num of rows, i - ith row ,j- jth col

