// In this we are trying to join two array into one 
//ex a={1,2,3,4,5} and b={6,7,8,9} the ans array should contain ans{1,2,3,4,5,6,7,8,9}
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int sizea = 5;
    int brr[] = {2, 4, 6, 8};
    int sizeb = 4;

    vector<int> ans;

    // pusing element of arr to vector ans
    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(arr[i]);
    }

    // pusing element of brr to vector ans
    for (int i = 0; i < sizeb; i++)
    {
        ans.push_back(brr[i]);
    }

    // now printing the elemets of vector (ANS)

    for (int i = 0; i < ans.size(); i++)
    {
        cout << arr[i] << endl;
    }
    cout << "operation completed";

    return 0;
}