//peak of mountain problem from leetcode 

#include<iostream>
#include<vector>
using namespace std ;

    int findPeakIndex(vector<int> arr){
        int s = 0;
        int e = arr.size()-1;
        int mid = s+(e-s)/2;

        while(s<e){
            if(arr[mid] < arr[mid+1]){
                //right in right 
                s = mid+1;
            }
            else{
                e = mid;
            }
            mid = s+(e-s)/2;

        }
        return s;

        
    }
int main(){
    vector<int> v{0,2,1,0};
    int peak = v[findPeakIndex(v)];
    cout<<"Peak Element is :- "<< peak<<endl;


return 0;
}