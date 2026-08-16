#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums={-1,1,0,-3,3};
    vector<int> ans;
    int n =nums.size();
    int product;
    for(int i=0;i<n;i++){
        product=1;
        for(int j=0;j<n;j++){
            if(i==j){  //you can continue here also it skip and and check j<n..
                j++;}   // if(i!=j) and ans[i]=product also..
            if(j<n){
        product =product*nums[j]; }
            } ans.push_back(product);
    } for(int val:ans){
        cout<<val<<" ";
    }
    return 0;
}
