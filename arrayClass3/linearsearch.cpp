#include<iostream>
using namespace std ;

int InputFunc(int arr[3][3],int rows, int cols){
    cout<<"taking input from the user "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>arr[i][j];
        }
        
    }
   
    
}
int outputFunc(int arr[3][3],int rows, int cols){
    cout<<"Showing the output "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
   
    
}

bool linearSeacrh(int arr[3][3],int rows, int cols, int key){

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(arr[i][j] == key){
               return true;
            }
            
        }
        
    }

    return false;
    

}
int main(){
int arr[3][3];
int rows = 3;
int cols = 3;

InputFunc(arr,rows,cols);
outputFunc(arr,rows,cols);

cout<<"Give input of the number you want to find"<<endl;
int key ;
cin>>key;
if(linearSeacrh(arr,rows,cols,key)){
    cout<<"found"<<endl;

}
else{
    cout<<"not found"<<endl;

}


return 0;
}