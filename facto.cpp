#include <iostream>
using namespace std;
long facto(int n)
{
    if (n == 0)
        return 1;

    return (n * facto(n - 1));
}
int main()
{
    // Your code here

    long f = facto(5);
    cout << "facto : " << f << endl;
    return 0;
}