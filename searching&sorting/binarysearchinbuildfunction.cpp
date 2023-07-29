#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;
int main(){
    
    int arr[] = {1,2,3,4,5,6,7};
    int size = 7;
    int target;
    cout<<"Enter the target value:"<<endl;
    cin>>target;

    if (binary_search(arr,arr+size,target))
    {
        cout<<"Found"<<endl;

    }
    else{
        cout<<"Not Found"<<endl;
    }
    

    
   

    //this is for vector
    // vector<int> v{1,2,3,4,5,6}; 
    // int target;
    //  cout<<"Enter the number to find "<<endl;
    // cin>>target;
    // if (binary_search(v.begin(),v.end(),target))
    // {
    //     cout<<"Found"<<endl;
    // }
    // else{
    //     cout<<"Not Found"<<endl;
    // }
    


return 0;
}