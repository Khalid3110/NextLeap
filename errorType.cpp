#include<iostream>
using namespace std;

class Hero{

    public:
    int age;
    string name;
    Hero(string name, int age){
        this->name = name;
        this->age = age;
    }

    void print(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age;
    }
};

int main(){

    // cin>>x;
    // cout<<x;

    // int a = 10;
    // int res = a/0;

    // cout<<res;

    // int arr[5];
    // cout<<arr[-5];


    // int x = 10;
    // int y = 70;

    // x = x+y;
    // cout<<x<<" "<<y<<endl;
    // y = x-y;
    // cout<<x<<" "<<y<<endl;
    // x = x-y;

    // cout<<x<<" "<<y<<endl;


    // add two number without using + sign
    // int a = 5;
    // int b = 6;

    // int sum = a-(-b);
    // cout<<sum;

    Hero h("Khan",20);

    h.print();




    
    return 0;
}