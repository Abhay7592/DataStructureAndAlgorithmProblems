#include <iostream>
using namespace std;
int main()
{
    // declare a 2D array
    int arr[3][3];

    // initialidation
    int brr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {6, 7, 8}};
    // cout<<brr[2][2];

    // row wise print
    cout<<"Row wise printing "<<endl;
    // outer loop
    for (int i = 0; i < 3; i++)
    {
        // for evey row we need to print value in rach coloum
        for (int j = 0; j < 3; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    //coulumn wise printing 
    cout<<"column wise printing"<<endl;
    for (int i = 0; i < 3; i++)
    {
        // for evey row we need to print value in rach coloum
        for (int j = 0; j < 3; j++)
        {
            cout << brr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}