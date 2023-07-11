#include<bits/stdc++.h>
 
using namespace std;

int findLargestElement(vector<int>& nums) {
     // Your code goes here

     int max = nums[0];

     for(int i=0;i<nums.size();i++){
       if(nums[i]>max){
         max = nums[i];
       }
     }
     return max;
   }
 
int main(){
 
 
return 0;
 
}