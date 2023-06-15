#include <iostream>
using namespace std;

int printSumRowwise(int arr[3][3], int rows, int cols)
{
    cout<<"Printing sum row Wise :- "<<endl;

    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << "The sum row " << sum << endl;
    }
}
int printSumColumWise(int arr[3][3],int rows, int cols){
    cout<<"printing sum column wise"<<endl;
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << "The sum column " << sum << endl;
    }
}
int main()
{
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    // taking input from the user
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
        cout<<endl;
    }
    cout << "input taken succesfully" << endl;

    printSumRowwise(arr,rows,cols);

    printSumColumWise(arr,rows,cols);

    return 0;
}