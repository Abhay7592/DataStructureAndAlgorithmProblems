#include<iostream>
using namespace std ;
int main(){
    int arr[3][3];
    //taking input in this array 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    //showing the output row wise
    cout<<"The output is :-- "<<endl;
      for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //column wise access the element 
    cout<<"column wise output"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    

    

return 0;
}