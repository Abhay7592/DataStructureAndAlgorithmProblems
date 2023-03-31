/*This code is an implementation of the Dutch National Flag algorithm, which is used to sort an array containing three types of elements. 
In this particular case, the array "nums" contains only 0s, 1s, and 2s. The goal is to sort the array in such a way that all the 0s come 
first, followed by all the 1s, and finally, all the 2s.
The code uses three pointers: l, m, and h, to keep track of the positions of the 0s, 1s, and 2s, respectively. Initially, l is set to 0, 
m is set to 0, and h is set to the index of the last element in the array.
The while loop runs until m is less than or equal to h. During each iteration of the loop, the value of nums[m] is checked.
If nums[m] is 0, it is swapped with the element at nums[l], and both l and m are incremented by 1. This ensures that all the 0s are moved 
to the beginning of the array.
If nums[m] is 1, m is simply incremented by 1. This is because all the 1s are already in the middle of the array.
If nums[m] is 2, it is swapped with the element at nums[h], and h is decremented by 1. This ensures that all the 2s are moved to the end 
of the array.
At the end of the loop, the array will be sorted in the required order.
Overall, this algorithm has a time complexity of O(n) and a space complexity of O(1), making it very efficient for sorting arrays with a 
small number of distinct values.*/

#include<iostream>
#include<vector>
using namespace std ;


int main(){
    vector<int> nums{2,0,2,1,1,0};
    int s=0 , m=0 , h=nums.size()-1;

    while (m<=h)
    {
        if (nums[m]==0)
        {
            swap(nums[s],nums[m]);
            s++;
            m++;
        }
        else if (nums[m]==1){
            m++;

        }
        else{
            swap(nums[m],nums[h]);
            
            h--;
            
        }
        
        
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";

    }
    


return 0;
}