#include<iostream>
#include <limits.h>

using namespace std ;
int main(){
int maxi = INT_MIN;
int min = INT_MAX;
int arr[]={1,2,3,4,5,60,99,100,23,44,23};

for (int i = 0; i < 11; i++)
{
    if (arr[i]>maxi)
    {
        maxi = arr[i];
    }
    
}
cout<<"maximum number is "<<maxi<<endl;

for (int i = 0; i < 11; i++)
{
    if (arr[i]<min)
    {
        min = arr[i];
    }
    
}
cout<<"manimum number is "<<min<<endl;

return 0;
}