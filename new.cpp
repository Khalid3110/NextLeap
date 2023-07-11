#include<iostream>
#include<string.h>

using namespace std;

int main(){

    string str = "How are you";

    int a = 1234;


    cout<<"String is "<<str<<" and Interger is "<<a<<endl;
    cout<<sizeof(a);
    cout<<endl<<sizeof(str);
    cout<<endl<<to_string(a)<<endl;
    cout<<sizeof(a);

    return 0;
}