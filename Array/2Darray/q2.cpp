#include<iostream>
using namespace std ;
int main(){
    // int arr[4][3];

    // //Input
    // //Taking row wise input 
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin>>arr[i][j];
    //     }
        
    // }
    // cout<<"input taken row wise "<<endl;


    // cout<<"printing row wise "<<endl;

    // //printing the row wiseoutput
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<arr[i][j]<<" ";

    //     }
    //     cout<<endl;

        
    // }
    //     cout<<"printing cloumn wise "<<endl;

    // ///printing the output column wise 
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout<<arr[j][i]<<" ";

    //     }
    //     cout<<endl;
        
        
    // }


    //column wise 
    int brr[3][3];

    //Input
    //Taking row wise input 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>brr[j][i];
        }
        
    }
    cout<<"input taken columnwise "<<endl;


    cout<<"printing row wise "<<endl;

    //printing the row wiseoutput
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<brr[i][j]<<" ";

        }
        cout<<endl;

        
    }
        cout<<"printing cloumn wise "<<endl;

    ///printing the output column wise 
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