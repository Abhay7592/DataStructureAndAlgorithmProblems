// tic tak toe game logic in 2d array

#include <iostream>
using namespace std;
int main()
{
    // A row is a horizontal alignment of data, while a column is vertica
    //  the first [3]dispay the rows and the second [3]display the colums
    int arr[3][3];
    int col = 3;
    int row = 3;
    // giving input row wise
    cout << "Please give the input " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "input taken succesfully" << endl;
    // displaying the input in the terminal
    cout << "output is row wise " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
    cout << "succesfully dispalyed the content of the array " << endl;

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

    return 0;
}