#include<iostream>
using namespace std;

int subproandsum(int n){

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

    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    cout<<subproandsum(n)<<endl;

    cout<<"Every things are ok";
    return 0;
}