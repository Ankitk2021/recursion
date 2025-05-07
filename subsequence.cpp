#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
  
}

void subSeq(int idx, int arr[], vector<int> ans, int n)
{
    // base
    if (idx >= n)
    {
        print(ans, ans.size());
        return;
    }

    // take
    ans.push_back(arr[idx]);
    subSeq(idx + 1, arr, ans, n);

    // not take
    ans.pop_back();
    subSeq(idx + 1, arr, ans, n);
}
int main()
{
    // Your code here

    int arr[3] = {3, 1, 2};
    vector<int> ans;
    subSeq(0, arr, ans, 3);

    cout << "No of subSequence : " << ans.size();
    return 0;
}