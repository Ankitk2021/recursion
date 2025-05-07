#include <iostream>
using namespace std;

int fSum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return (n + fSum(n - 1));
}
int main()
{
    // Your code here
    int ans = fSum(5);
    cout << "Sum : " << ans << endl;
    return 0;
}