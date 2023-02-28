//Pair sum 
#include<iostream>
#include<vector>


using namespace std ;
int main(){

    vector<int> arr{10,20,30,60,70};
    vector<int> ans;
    int sum;
    for (int i = 0; i < arr.size(); i++)

    {   

        int element=arr[i];
        for (int j = i+1; j < arr.size(); j++)
        {
            cout<<"("<<element<<","<<arr[j]<<")"<<endl;
            sum=element+arr[j];
            if (sum==80)
            {
                ans.push_back(element);
                ans.push_back(arr[j]);
            }
            

        }
        
    }
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    


return 0;
}