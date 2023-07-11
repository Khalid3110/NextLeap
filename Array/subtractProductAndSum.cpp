#include<iostream>
 
using namespace std;

int subtractProductAndSum(int n) {
		// Your code goes here
		int multi = 1;
		int sum = 0;

		while (n!=0)
		{
			int rem = n%10;

			multi *= rem;
			sum += rem;

			n = n/10;
		}

		int diff = multi - sum;
		return diff;

	}
 
int main(){
 
 
return 0;
 
}