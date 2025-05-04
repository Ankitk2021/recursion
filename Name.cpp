#include <iostream>
using namespace std;

void Name(int i , int n){
    if(i > n) return;
    cout << "Ankit Kumar \n";
    Name(i+1,n);
}
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
    Name(1,n);
    return 0;
}