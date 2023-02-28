// Unique element quetsion
#include <iostream>
#include <vector>

using namespace std;
// using the concept of XOR operator to find the unique number in the vector array
int findUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of array " << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "enter the elements " << endl;
    // taking the input
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    // created a new valriable unique element that stores the data given by the function find unique
    int uniqueElement = findUnique(arr);
    // printing the unique element
    cout << "unique element is " << uniqueElement << endl;

    return 0;
}