#include<bits/stdc++.h>
 
using namespace std;

int findSmallest(vector<int>& nums) {
		// Your code goes here
        int min = nums[0];

        for(int i=0;i<nums.size();i++){
        if(nums[i]<min){
            min = nums[i];
        }
        }
        return min;
	}
 
int main(){
 
 
return 0;
 
}