#include<iostream>
 
using namespace std;

int countDigits(int num) {
		// Your code goes here
        int count = 0;
        int temp = num;

        while(num!=0){
            int rem = num%10;
            if(temp%rem==0){
                count++;
            }
            num = num/10;
        }
        return count;
	}
 
int main(){
 
 
return 0;
 
}