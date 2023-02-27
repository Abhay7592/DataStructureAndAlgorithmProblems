#include<iostream>
using namespace std ;
int main(){
int arr[] = {1,2,3,4,5,6,7,8,9,10};
int size = 10;

for (int i = 1; i <= size; i++)
{
    cout<<arr[size-i]<<' ';
}

return 0;
}