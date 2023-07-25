#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int target)
{

    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        int element = arr[mid];

        if (element == target)
        {
            return mid;
        }
        else if (target<element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = (start+end)/2;


        
    }
    return -1;
}

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 9;
    int target;
    cout << "Enter the target value" << endl;
    cin >> target;

    int indexOftarget = binary_search(arr, size, target);

    if (indexOftarget == -1)
    {
        cout << "element not found " << endl;
    }
    else
    {
        cout << "element found at index"<<indexOftarget << endl;
    }

    return 0;
}