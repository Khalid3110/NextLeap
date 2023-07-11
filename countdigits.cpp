#include<iostream>
using namespace std;

int countdigits(int n){

    int count = 0;
    int temp = n;

    while(n!=0){
        int rem = n%10;
        if(temp%rem==0){
            count++;
        }
        n = n/10;
    }
    return count;
}

int main(){

    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;

    cout<<countdigits(n)<<endl;

    return 0;
}