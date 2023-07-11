#include<bits/stdc++.h>
 
using namespace std;

vector<int> removeDuplicates(vector<int>& nums) {
		// Your code goes here
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                ans.push_back(nums[i]);
            }
        }
        return ans;
	}
 
int main(){
 
 
return 0;
 
}