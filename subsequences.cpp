#include<iostream>
#include<vector>
using namespace std;

void func(int index, int arr[], vector<int> &ds, int len)
{
    if (index == len)
    {
        for (auto iter : ds)
        {
            cout << iter << " ";
        }
        cout << endl;
        return;
    }

    ds.push_back(arr[index]);
    func(index + 1, arr, ds, len);
    ds.pop_back();
    func(index + 1, arr, ds, len);
}

int main()
{
    int arr[3] = {1, 2, 3};
    vector<int> ds;
    func(0, arr, ds, 3); // Pass 0 as the initial index
    return 0;
}

