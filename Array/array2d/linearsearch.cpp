#include<iostream>
using namespace std ;

bool checkNum(int arr[3][3],int row,int col,int key){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j< col; j++)
        {
            if (arr[i][j]==key)
            {
                return true ;
                
            }
            
        }
        
    }
    return false;

    

    
}
int main(){
int arr[3][3];
int col = 3;
int row = 3;

//taking input from the user 
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        cin>>arr[i][j];
    }
    
}
cout<<"Input operation taken succesfully "<<endl;

int key ;
cout<<"enter the numnber that you want to check"<<endl;
cin>>key;


if(checkNum(arr,row,col,key)){
    cout<<"found"<<endl;
}
else{
    cout<<"not found"<<endl;
}


return 0;
}