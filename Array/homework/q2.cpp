#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> num;
    int n;
    cout << "Enter the number of elements to add to the vector: ";
    cin >> n;
    cout << "Taking input from the user" << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cout << "Enter element " << i << ": ";
        cin >> element;
        num.push_back(element);
    }
    cout << "Input taken" << endl;

    // loop to iterate to the array
    for (int i = 0; i < num.size(); i++)
    {
        // second for loop to check for j loop
        for (int j = 0; j < num.size(); j++)
        {
            // checking if the number is less than 0 or not
            if (num[i] < 0)
            {
                cout<<"Value of i is "<<num[i]<<endl;
                cout<<"Value of J is "<<num[j]<<endl;
                swap(num[i], num[j]);
            }
        }
    }
    // loop to print the element of the array

    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}