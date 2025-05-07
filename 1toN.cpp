#include <iostream>
using namespace std;

void iPrint(int i, int n){
    if(i<0){
        return;
    }

    iPrint( i-1,n);
    cout << i << " ";
}
void dPrint(int i, int n)
{

    if (n < i)
        return;
    cout << n << " ";
    dPrint(i, n - 1);
}

void lines()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}
int main()
{
    int n = 10;
    dPrint(5, n);
    lines();
    iPrint(n,5);


    lines();
    return 0;
}