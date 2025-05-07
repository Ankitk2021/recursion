#include <iostream>
using namespace std;
int fibb(int n){
    if(n <=0) return 0;
    if(n==1) return 1;

   return fibb(n-2) + fibb(n-1);
}
int main() {
// Your code here
int ans = fibb(3);
cout << ans << endl;
  return 0;
}