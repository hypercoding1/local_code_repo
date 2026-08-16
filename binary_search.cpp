#include <iostream>

#include <vector>
using namespace std;

int main(){
    vector<int> nums={-1,0,3,4,5,9};   // sorted array
    int target=12;
    int st=0;
    int end=nums.size()-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(target>nums[mid]){
            st=mid+1;
        }
        else if 
        (target<nums[mid]){
            end=mid-1;
        }else{
            cout<<mid;
            break;
        }
    } cout<<"v";
return 0;
}