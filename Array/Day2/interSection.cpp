// Intercetion of two vector array
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // first vector row
    vector<int> arr{1, 2, 3, 4, 5, 6, 8};
    // second vector row
    vector<int> brr{3, 4, 10};
    // intercetion vector variable
    vector<int> ans;
    // for loop for for the first vector array (arr)
    for (int i = 0; i < arr.size(); i++)
    {
        // creating a new variable element to store the value of arr[i]
        int element = arr[i];
        // iteratuing from the next vector arr brr
        for (int j = 0; j < brr.size(); j++)
        {
            // checking for the the condition that if the element in arr and brr are same then push it in new vector array ANS
            if (element == brr[j])
            {
                brr[j]=-1;
                ans.push_back(element);
            }
        }
    }

    // printing the array and checking the results
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i]<<' ';
    }

    return 0;
}