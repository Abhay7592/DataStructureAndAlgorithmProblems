#include<iostream>
#include<vector>

using namespace std ;
int main(){

vector <int> arr{3,5,10,100,77,69};

cout<<"Enter the target value : "<<endl;
int key ;
cin>>key;

while (arr.size())
{
    int i = 0;
    if (arr[i] == key)
    {
        cout<<"Element found"<<endl;
        i++;
        break;
    
    }
    else{
        cout<<"element not found"<<endl;

    }
    
}




return 0;
}