#include<iostream>
 
using namespace std;

bool isThree(int n) {
		// Your code goes here
        int count = 0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                count++;
            }
        }
        if(count==3){
            return true;
        }
        else{
            return false;
        }
	}
 
int main(){
 
 
return 0;
 
}