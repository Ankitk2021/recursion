#include <iostream>
using namespace std;
void reverseArr(int i , int arr[],int n){
    if(i>=n/2)return ;

    swap(arr[i],arr[n-i-1]);
    reverseArr(i+1,arr,n);
}
void swapArr(int i, int j, int arr[])
{
    if (i > j)
    {
        return;
    }
    swap(arr[i], arr[j]);
    i++;
    j--;
    swapArr(i, j, arr);
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    // Your code here

    int arr[6] = {1, 2, 3, 4, 5, 6};
    cout << "Before : ";
    print(arr, 6);
    cout << endl;


    // swapArr(0, 5, arr);
    reverseArr(0,arr,6);
    
    cout << "After : ";
    print(arr, 6);
    
    return 0;
}