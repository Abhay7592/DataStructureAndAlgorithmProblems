#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int> v, int target)
{
    int s = 0;
    int e = v.size() -1;
    int mid = s + (s - e) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (v[mid] == target)
        {
            //ans stored 
            ans = mid;
            //left search
            e = mid - 1;
        }
        else if (target > v[mid])
        {
            //right search if the target variable is greater than the middle elemement 
            s = mid + 1;
        }
        else if (target < v[mid])
        {
            //left search if the target variable is greater than the middle elemement 

            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    vector<int> v{1,1,1,1,1,1,1,1,1, 3, 4, 4, 4, 4, 6, 7};

    int target;
    cout<<"Enter the element that you want to search for the first occurence:"<<endl;
    cin>>target;

    int indexOfFirstOcc = firstOccurence(v, target);

    cout << "Ans is " << indexOfFirstOcc << endl;
    return 0;
}