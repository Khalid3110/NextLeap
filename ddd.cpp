#include<iostream>
#include<vector>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;

    vector<int> temp;

    while(num){
            temp.push_back(num%10);
            num/=10;
        }

    for(int i=0;i<temp.size();i++){
        cout<<temp[i];
    }
    return 0;
}