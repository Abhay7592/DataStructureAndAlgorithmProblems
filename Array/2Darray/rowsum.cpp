#include <iostream>
using namespace std;

void printRowWiseSum(int arr[][3],int rows , int cols){

    // int a = 3;
    // int b = 3;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0 ;
        for (int j = 0; j < 3; j++)
        {
            sum = sum+arr[i][j];

        }
        cout<<sum<<endl;
    }
    

}
void printColWiseSum(int arr[][3],int rows,int cols){
    for (int i = 0; i < 3; i++)
    {
        int sum = 0 ;
        for (int j = 0; j < 3; j++)
        {
            sum = sum+arr[j][i];

        }
        cout<<sum<<endl;
    }

}


int main()

{
    int arr[3][3];
    int sum = 0;
    int cols = 3;
    int rows = 3;

    // taking input from the user
    cout << "STDIN" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cin >> arr[i][j];
        }
    }
    cout<<"Printing the array "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout << "Input taken now will calculate the sum " << endl;

    cout<<"priniting row wise sum"<<endl;
    printRowWiseSum(arr,rows,cols);
    cout<<"Printing column wise sum "<<endl;
    printColWiseSum(arr,rows,cols);
    // // logic for sum
    // for (int i = 0; i < 3; i++)
    // {
    //     // int sum = 0;
    //     for (int j = 0; i < 3; j++)
    //     {
    //         sum = sum + arr[i][j];
    //     }
    //     cout << "Row sum is " << sum;
    // }

    // // cout<<"Row sum is "<<sum;

    return 0;
}