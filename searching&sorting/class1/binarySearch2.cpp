#include<iostream>
using namespace std ;
int binarySearch(int arr[], int size, int target){
    int start = 0 ;
    int end = size-1;
    int mid = start +((end-start)/2);

    

    while(start <= end){

        int element = arr[mid];
        if (element == target)
        {
            return mid;//element found the return index 
        }
        else if (target< element)
        {
            //search in left
            end = mid -1 ;
        }
        else
        {
            //search in right
            start = mid+1;

        }
        // if we use the below mid statement we can encounter the problem of integer overflow
        // mid = (start+end)/2;
        mid = start +((end-start)/2);//here we wont get the issue of interger overflow
    }
    //if the element is not found return -1
    return -1;


}

int main(){
    int arr[] = {2,4,6,8,10,12,16};
    int target ;
    cout<<"Enter the value you want to find"<<endl;
    cin>>target;

    int size = 7;

    int indexOftarget = binarySearch(arr,size,target);

    if(indexOftarget == -1){
        cout<<"Target not found"<<endl;
    }
    else{
        cout<<"Target found at "<<indexOftarget<< " index"<<endl;

    }

return 0;
}