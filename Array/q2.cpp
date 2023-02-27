//we are given a array with elements so change all the value of elemets to 1


#include<iostream>
using namespace std ;
int main(){

    int arr[5] = {1,3,5,7,9};

    for (int i = 0; i < 5; i++)
    {
        arr[i] = 1;
        cout<<arr[i]<<endl;
    }
    //using sizeof to find the size  of the array 
    cout<<"Elements in array "<<sizeof(arr)/4;
    

return 0;
}