#include<bits/stdc++.h>
 
using namespace std;

int numberOfMatches(int n) {
		// Your code goes here
        int matche = 0;
        while(n>1){
            if(n%2==0){
                matche+=n/2;
                n = n/2;
            }
            else{
                matche+=n/2;
                n=(n+1)/2;
            }
        }
        return matche;
	}
 
int main(){
 
 
return 0;
 
}