#include<iostream>
using namespace std ;
int main(){
int arr[9]={0,0,1,0,1,1,1,0,0};
int zero = 0;
int one = 0;
//traversing in the array 
for (int i = 0; i < 9; i++)
{
    //if zero found increment variable zero
    if (arr[i]==0)
    {
        zero++;

    }
    //if one found increment variable one 
    else if (arr[i]==1)
    {
        one++;
    }
    
    
}
cout<<"The number of zero are:"<<zero<< " and the number of one's are "<<one<<endl;



return 0;
}