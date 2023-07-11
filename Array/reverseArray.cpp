#include<bits/stdc++.h>
 
using namespace std;

vector <int> reverseArray(vector <int> &arr) {
     int s=0;
     int e=arr.size()-1;
    //  while(s<e){
    //    swap(arr[s],arr[e]);
    //    s++;
    //    e--;
    //  }
    vector<int>ans;
    for(int i=e; i>=s; i--){
      ans.push_back(arr[i]);
    }
    return ans;
   }
 
int main(){
 
 
return 0;
 
}