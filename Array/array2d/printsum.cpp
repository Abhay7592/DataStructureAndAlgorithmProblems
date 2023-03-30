//print sum row wise 
#include<iostream>
using namespace std ;

void printRowWiseSum(int arr[3][3],int col, int rows){
    cout<<"printing row-wise sum "<<endl;
    
    for (int i = 0; i < rows; i++)
    {
        //we have initiated sum here because evertime we enter the loop we have a new sum variable 
        int sum =0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
    }
    
}

int main(){
int arr[3][3];
int col=3;
int row = 3;
int sum = 0 ;

//taking in the input 
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        cin>>arr[i][j];

    }
    
}
cout<<"Input taken succesfully "<<endl;

//printing the output normal row wise 
 cout<<"output is row wise "<<endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
    cout << endl;
    cout << "succesfully dispalyed the content of the array " << endl;

    printRowWiseSum(arr,col,row);
//trying to print the row wise sum 
// cout<<"trying to print the row sum "<<endl;

// for (int i = 0; i < row; i++)
// {
//     for (int j = 0; j < col; j++)
//     {
//         sum = sum+ arr[i][j];
//     }
//     cout<<sum<<endl;
    
// }


return 0;
}