#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums={1,2,3,4};
   int n =nums.size();
    vector<int> prefix(n);
    vector<int> surfix(n);
    vector<int> ans(n);
    // for prefix vector 
    prefix[0]=1;
    for(int i=1;i<n;i++){
        prefix[i]=nums[i-1]*prefix[i-1];
    }
    // for surfix vector 
    surfix[n-1]=1;
    for(int j=n-2;j>=0;j--){
        surfix[j]=nums[j+1]*surfix[j+1];
    }
    // for ans vector 
    for(int k=0;k<n;k++){
        ans[k]=prefix[k]*surfix[k];
    }
    for(int val:ans){
        cout<<val<<" ";
    }
    return 0;
}

