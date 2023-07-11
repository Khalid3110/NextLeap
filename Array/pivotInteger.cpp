#include<bits/stdc++.h>
 
using namespace std;

int pivotInteger(int n) {
		// Your code goes here
        int total = (n * (n + 1)) / 2;
        int sum = 0;
        
        for(int i = 1; i <= n; i++) {
            sum += i;
            
            if(sum == (total - sum + i)) {
                return i;
            }
        }
        return -1;
	}
 
int main(){
 
 
return 0;
 
}