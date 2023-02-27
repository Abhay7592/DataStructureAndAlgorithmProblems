//take 5 elements input in a array and print thier double 
// ex 1 ,2 , 4, 5 input and output 2,4,8,10



#include<iostream>
using namespace std ;
int main(){
    int arr[5] = {1,3,5,7,9};
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]*2<<' '<<endl;
    }
    cout<<"Task succesfully completed ";

    

return 0;
}