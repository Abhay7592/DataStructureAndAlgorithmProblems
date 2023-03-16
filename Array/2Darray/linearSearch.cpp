#include<iostream>
using namespace std ;

bool linearSearch(int arr[][3],int num){
   

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j]==num)
            {
                return true;

            }
            
            
        }
        
    }
    return false;
    

}


int main(){
    int arr[3][3];
    cout<<"Taking input from the user :"<<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
            
        }
        
    }
    cout<<"What number you want to search in Array "<<endl;
    
    int num;
    cin>>num;
    bool key = linearSearch(arr,num);
    if(key){
        cout<<"Number Found"<<endl;
    }
    else{
        cout<<"Number not found"<<endl;
    }

    

return 0;
}