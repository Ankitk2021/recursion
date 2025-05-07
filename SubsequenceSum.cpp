#include <iostream>
#include<vector>
using namespace std;
void print(vector<int> v){
    for(int e : v){
        cout << e << " ";
    }
    cout<<endl;
}
bool notPrinted = true;
void subSumAny(int index,int arr[],int n , vector<int> ds, int sum,int k){

    if(index==n){
        if(sum==k && notPrinted){
            print(ds);
            notPrinted = false;
        }
        return;
    }
    //take
    ds.push_back(arr[index]);
    sum += arr[index];
    subSumAny(index+1,arr,n,ds,sum,k);

    //not take 
    ds.pop_back();
    sum -= arr[index];
    subSumAny(index+1,arr,n,ds,sum,k);
    

}

void subSum(int index,int arr[],int n , vector<int> ds, int sum,int k){

    if(index==n){
        if(sum==k){
            print(ds);
            notPrinted = false;

        }
        return;
    }
    //take
    ds.push_back(arr[index]);
    sum += arr[index];
    subSum(index+1,arr,n,ds,sum,k);

    //not take 
    ds.pop_back();
    sum -= arr[index];
    subSum(index+1,arr,n,ds,sum,k);
    

}

bool printAnyOneSub(int index,int arr[],int n , vector<int> ds, int sum,int k){

    if(index==n){
        if(sum==k){
            print(ds);
            return true;
        }else{
            return false;
        }
    }
      
    //take
    ds.push_back(arr[index]);
    sum+= arr[index];
    if(printAnyOneSub(index+1,arr,n,ds,sum,k)==true) return true;

    //not take

    ds.pop_back();
    sum-= arr[index];
    if(printAnyOneSub(index+1,arr,n,ds,sum,k)==true) return true;

   return false;

}

int countSub(int index,int arr[],int n , vector<int> ds, int sum,int k){
    if(index==n){
        if(sum==k){
            return 1;
        }else{
            return 0;
        }
    }

    //take

    ds.push_back(arr[index]);
    sum+= arr[index];
   int l =  countSub(index+1,arr,n,ds,sum,k);

    //not take
    ds.pop_back();
    sum-=arr[index];

    int r =  countSub(index+1,arr,n,ds,sum,k);

    return l+r;

}


int main() {
// Your code here

  int arr[3] = {1,2,1};
  vector<int> ds;
  subSum(0,arr,3,ds,0,2);
  cout<<"Printing any one sub sequence : "<< endl;
  printAnyOneSub(0,arr,3,ds,0,2);
  cout<<"Count of subarray having sum 2 is \n";
  int ans = countSub(0,arr,3,ds,0,2);
  cout << ans;
  return 0;
}