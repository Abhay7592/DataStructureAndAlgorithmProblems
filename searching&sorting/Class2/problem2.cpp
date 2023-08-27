//reversed and sorted array{3,4,5,6,7,8,9,1,2}

#include<iostream>
#include<vector>
using namespace std ;

int pivot(vector<int> v){
    int s = 0;
    int e = v.size()-1;
    int mid = s+(e-s)/2;

    while (s<e)
    {
        if (v[mid]>v[mid+1])
        {
            return mid;
        }
        else if (v[mid]<v[mid-1])
        {
            return mid-1;
        }
        else if (v[s] > v[mid])  // Corrected condition, it should be v[s] > v[mid]
        {
            e = mid-1;
        }
        else {
            s = mid + 1;
        }
        
        mid = s+(e-s)/2;
    }
    return mid;
}

int main(){

    vector<int> v{3,4,5,6,7,8,9,10,1,2};
    int findPivot = pivot(v);
    cout<<"The pivot element in reversed and sorted array is :- "<<v[findPivot];

return 0;
}