#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age>=18){
        cout<<"You are an adult";
    }else if(age<=15 && age>10){
        cout<<"You are millenial";

    }else{
        cout<<"You are not an adult";
    }
}