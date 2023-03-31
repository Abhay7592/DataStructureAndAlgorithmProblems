/*Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the 
same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.
Example 1:
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:
Input: nums = [2,0,1]
Output: [0,1,2]
Constraints:
n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.*/
//this is not in place solution 
#include <iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int> nums{2,0,2,1,1,0};
        // sort(nums.begin(),nums.end());-->not to be used in this problem as its said not to use build in fucnction
    int countZero = 0;
    int countOne = 0;
    int countSecond = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            countZero++;
        }
        else if (nums[i] == 1)
        {
            countOne++;
        }
        else
        {
            countSecond++;
        }
    }
    int i = 0;
    while (countZero--)
    {
        nums[i] = 0;
        i++;
    }
    while (countOne--)
    {
        nums[i] = 1;
        i++;
    }
    while (countSecond--)
    {
        nums[i] = 2;
        i++;
    }
    

   for (int i = 0; i < nums.size(); i++)
   {
    cout<<nums[i]<<" ";
   }
    
    return 0;
}