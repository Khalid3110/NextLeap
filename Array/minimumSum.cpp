#include<bits/stdc++.h>
 
using namespace std;

int minimumSum(int num) {
		// Your code goes here
        string s = to_string(num);
        sort(s.begin(), s.end());
        return stoi(s.substr(0, 1) + s.substr(2, 1)) +
            stoi(s.substr(1, 1) + s.substr(3, 1));
	}
 
int main(){
 
 
return 0;
 
}