#include<bits/stdc++.h>
 
using namespace std;

int sumOfMultiples(int n) {
		// Your code goes here
        int sumdigit = 0;
        for(int i=1;i<=n;i++){
            if((i%3==0)||(i%5==0)||(i%7==0)){
                sumdigit +=i;
            }
        }
        return sumdigit;
	}
 
int main(){
 
 
return 0;
 
}