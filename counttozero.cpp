#include<iostream>
using namespace std;

int zerocount(int n){

    int count = 0;

    while (n!=0)
    {
        if(n%2 == 0){
            n = n/2;
        }
        else{
            n = n-1;
        }
        
        count++;
    }

    return count;
    
}

int main()
{
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;

    int result = zerocount(n);

    cout<<result<<endl;

    return 0;
} 
