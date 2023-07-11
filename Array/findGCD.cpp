#include<bits/stdc++.h>
 
using namespace std;

int findGCD(vector<int>& nums) {
		// Your code goes here
        int max = nums[0];
        int min = nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max = nums[i];
            }
            
            if(nums[i]<min){
                min = nums[i];
            }
        }

        int greatnum = 1;
       for(int i=1;i<(max+min);i++){
           if((max%i==0)&&(min%i==0)){
               greatnum = i;
           }
       }
       return greatnum;
	}
 
int main(){
 
 
return 0;
 
}