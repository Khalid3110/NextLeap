#include<iostream>
using namespace std;

int gcd(int arr[],int n){

    int max = arr[0];
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        
        if(arr[i]<min){
            min = arr[i];
        }
    }

    if(max%min == 0){
        return min;
    }
    else{
        return 1;
    }
}

int main()
{   

    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<gcd(arr,n)<<endl;

    return 0;
} 


