#include<iostream>
using namespace std ;
//linear search
bool find(int arr[],int size, int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            //cout<<"Found"<<endl;
            return true;
        
        }
    }
    return false;
    
}
int main(){
int arr []={1,3,5,7,9};
int size = 5;
int key;
cout<<"Enter the key to find"<<endl;
cin>>key;

if (find(arr,size,key))
{
    cout<<"found";
}
else{
    cout<<"Not found";
}






return 0;
}