#include<bits/stdc++.h>
 
using namespace std;

int secondSmallest(vector<int>& nums) {
		// Your code goes here
        int firstsmall;
		int secsmall;

        if(nums[0]<nums[1]){
            firstsmall=nums[0];
            secsmall=nums[1];
        }
        else{
            firstsmall=nums[1];
            secsmall=nums[0];
        }

		for(int i=2;i<nums.size();i++){
			if(nums[i]<firstsmall){
				secsmall = firstsmall;
				firstsmall = nums[i];
			}

            else if(nums[i]<secsmall && nums[i]!=firstsmall){
                secsmall = nums[i];
            }
		}
		return secsmall;
	}
 
int main(){
 
 
return 0;
 
}