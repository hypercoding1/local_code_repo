#include <iostream>

#include <vector>

using namespace std;
 
  int binary(vector<int>&nums, int target){
      int n =nums.size();
    int st=0;
    int end=n-1;

    while(st<=end){

    int mid=(st+end)/2;
    if(target<nums[mid]){
        end=mid-1;
    }
    else if(target>nums[mid]){
        st=mid+1;
    }
    else{
        return mid;
    } 
} return -1;
  }

int main(){
    vector<int> nums={-1,0,3,4,5,9};
    int target=9;
    cout<<binary(nums,target)<<" ";
    return 0;
}