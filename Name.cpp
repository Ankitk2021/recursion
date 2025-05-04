#include <iostream>
using namespace std;
void name(int n)
{
    if(n==0){
        return;
    };

    cout << "Ankit" << endl;
    name(n-1);

}
int main()
{
    // Your code here
    int n;
    cout << "Enter no : " << endl;
    cin >> n;
    name(n);
    return 0;
}