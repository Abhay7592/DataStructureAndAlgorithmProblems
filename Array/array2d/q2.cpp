#include <iostream>
using namespace std;
int main()
{
    // col wise input

    int arr[3][3];
    int col = 3;
    int row = 3;

    cout << "Please give the input " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[j][i];
        }
    }

    cout << "output is colum wise " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[j][i] << " ";
        }
    }
    cout << endl;
    cout << "succesfully dispalyed the content of the array " << endl;
     cout<<"output is row wise "<<endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
    cout << "succesfully dispalyed the content of the array " << endl;

    return 0;
}