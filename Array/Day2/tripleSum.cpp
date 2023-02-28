//Pair sum 
#include<iostream>
#include<vector>


using namespace std ;
int main(){

    vector<int> arr{10,20,30,40};
    vector<int> ans;
    int sum;
    for (int i = 0; i < arr.size(); i++)

    {   

        int element=arr[i];
        for (int j = i+1; j < arr.size(); j++)
        {
            //cout<<"("<<element<<","<<arr[j]<<")"<<endl;

            for (int k = j+1; k < arr.size(); k++)
            {
            sum=element+arr[j]+arr[k];
            cout<<"("<<element<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
            if (sum==80)
            {
                ans.push_back(element);
                ans.push_back(arr[j]);
                ans.push_back(arr[k]);
            }
            }
            
            
            

        }
        
    }
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    


return 0;
}