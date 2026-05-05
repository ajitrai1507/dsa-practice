#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;

    if(num>0){
        cout<<"Number is positive";
    }else if(num==0){
        cout<<"Number is zero";
    }else if(num<0){
        cout<<"Number is negative";
    }else{
        cout<<"Please Enter a valid number";
    }
}