#include<iostream>
using namespace std ;
int main(){
    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;


    int arr[6]={2,0,2,1,1,0};
    for (int i = 0; i < 6 ; i++)
    {
        if (arr[i] == 0)
        {
            count_0++;
        }
        else if (arr[i] == 1 )
        {
            count_1 ++;

        }
        else if (arr[i] == 2)
        {
            count_2 ++;

        }
        else{
            cout<<"invalid input"<<endl;
        }
        
        
        
    }
    
   for (int i = 0; i < count_0; i++)
   {
    cout<<"0";
   }
   for (int i = 0; i < count_1; i++)
   {
    cout<<"1";
   }
   for (int i = 0; i < count_2; i++)
   {
    cout<<"2";
   }
   
    
    

return 0;
}