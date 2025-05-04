#include <iostream>
using namespace std;
void Icount(int n)
{
    if (n <= 0)
        return;
    Icount(n - 1);
    cout << n << " ";
}
int main()
{
    // Your code here
    int n;
    cout << "Enter no : " << endl;
    cin >> n;
    Icount(n);
    return 0;
}