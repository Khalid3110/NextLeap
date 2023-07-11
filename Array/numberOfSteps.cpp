#include<bits/stdc++.h>
 
using namespace std;

int numberOfSteps(int num) {
		// Your code goes here
        int count = 0;

        if(num<1){
            return num;
        }
        while (num!=0)
        {
            if(num%2 == 0){
                num = num/2;
            }
            else{
                num = num-1;
            }
            
            ++count;
        }

        return count;
	}
 
int main(){
 
 
return 0;
 
}