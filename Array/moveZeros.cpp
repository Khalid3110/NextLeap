#include<bits/stdc++.h>
 
using namespace std;

vector<int> moveZeros(vector<int>& nums) {
		// Your code goes here
		int j = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] != 0) {
				swap(nums[j], nums[i]); // Partitioning the array
				j++;
			}
    	}
		return nums;
	}
 
int main(){
 
 
return 0;
 
}