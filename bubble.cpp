#include<iostream
#include <vector>
using namespace std;

int main(){
    vector<int> nums={7,8,2,10,1};
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    } for(int val:nums){
        cout<<val<<" ";
    }
    return 0;
}
