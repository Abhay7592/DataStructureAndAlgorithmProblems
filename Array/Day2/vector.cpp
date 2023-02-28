#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // create a vector
    vector<int> arr;
    int ans = sizeof(arr) / sizeof(int);
    // cout<<ans<<endl;
    // cout<<arr.size()<<endl;
    // cout<<arr.capacity()<<endl;

    // Inserting the element in a vector array
    arr.push_back(20);
    arr.push_back(21);

    // printing the element for the vector array
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;

    // popback is used for removing the last element of the vector array
    arr.pop_back();
    // using for loop to print the array
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}