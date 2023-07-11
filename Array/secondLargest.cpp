#include<bits/stdc++.h>
 
using namespace std;

int secondLargest(vector<int>& nums) {
		// Your code goes here

		int firstlar;
		int seclar;

        if(nums[0]>nums[1]){
            firstlar=nums[0];
            seclar=nums[1];
        }
        else{
            firstlar=nums[1];
            seclar=nums[0];
        }

		for(int i=2;i<nums.size();i++){
			if(nums[i]>firstlar){
				seclar = firstlar;
				firstlar = nums[i];
			}
            else if(nums[i]>seclar && nums[i]!=firstlar){
                seclar = nums[i];
            }
		}
		return seclar;
		
	}
 
int main(){
 
 
return 0;
 
}