#include<iostream>
using namespace std ;

void printroWWiseSum(int arr[][3],int rows,int cols){

        for (int i = 0; i < rows; i++)
        
        {
            int sum = 0 ;
            for (int j = 0; j<cols; j++)
            {
                sum = sum + arr[i][j];
            }
           cout<<sum<<" ";
 
        }
        
    }






int main(){
int arr[3][3]={
{1,2,3},
{2,3,4},
{5,6,1}};
int rows=3;
int cols=3;

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

    printroWWiseSum(arr,rows,cols);

return 0;
}