//find the pivot element in a array 
#include<iostream>
using namespace std ;

int pivotElement(int arr[],int size){
    int s = 0;
    int e = size;
    int mid = s +(e-s)/2;

    while (s<=e)
    {
        if (mid+1<= size &&arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if (mid-1>= 0 && arr[mid-1]>arr[mid])
        {
            return mid-1;
        }
        else if (arr[s]>arr[mid])
        {
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        
        mid = s +(e-s)/2;
    }
    return e;
    
}

int main(){
    int arr[]={3,4,5,6,7,8,1,2};
    int size = 7;
    int Element = arr[pivotElement(arr,size)];
    cout<<"Pivot element is :- "<<Element<<endl;

return 0;
}