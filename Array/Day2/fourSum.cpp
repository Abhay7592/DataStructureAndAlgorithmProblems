#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr{10, 20, 30, 40,50,60};
    vector<int> ans;
    int sum = 100;

    for (int i = 0; i < arr.size(); i++)
    {
        int element1 = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            int element2 = arr[j];

            for (int k = j + 1; k < arr.size(); k++)
            {
                int element3 = arr[k];

                for (int p = k + 1; p < arr.size(); p++)

                {
                    int element4 = arr[p];

                    cout<<"("<<element1<<","<<element2<<","<<element3<<","<<element4<<")"<<endl;
                    if (element1 + element2 + element3 + element4 == sum)
                    {
                        ans.push_back(element1);
                        ans.push_back(element2);
                        ans.push_back(element3);
                        ans.push_back(element4);
                    }
                }
            }
        }
    }

for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}