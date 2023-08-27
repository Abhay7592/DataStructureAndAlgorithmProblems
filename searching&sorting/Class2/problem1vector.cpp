#include<iostream>
#include<vector>
using namespace std ;

int findpivot(vector<int> v ){
    int s = 0;
    int e = v.size()-1;
    int mid = s+(e-s)/2;

    while (s<=e)
    {
        if (mid+1< v.size() && v[mid]>v[mid+1])
        {
            return mid;
        }
        else if (mid-1 >= 0 && v[mid-1]>v[mid])
        {
            return mid-1 ;

        }
        else if (v[s]>v[mid])
        {
            e = mid-1;//searching in left side 
        }
        else{
            s = mid+1;//searching in right side 
        }
        mid = s+(e-s)/2;
        
    }
    return -1;
}

int main(){
    vector<int> v{8,2,3,4,5,6,7,1,2};
    int pivot = findpivot(v);
    cout<<v[pivot];


return 0;
}