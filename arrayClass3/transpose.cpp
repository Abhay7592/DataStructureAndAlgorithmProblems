#include<iostream>
using namespace std ;
int main(){
int arr[3][3];
int rows = 3;
int cols =3;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cin>>arr[i][j];
    }
    
    
}
cout<<"Transposing the matrix"<<endl;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        swap(arr[i][j],arr[j][i]);
    }
    
}
cout<<"Printing the transpose matrix "<<endl;

for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    
}

return 0;
}