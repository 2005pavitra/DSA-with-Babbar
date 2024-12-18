#include<iostream>
using namespace std;

int main(){
    float C;
    cout<<"Enter the temperature in C"<<endl;
    cin>>C;

    float fah = (C*9/5 + 32);
    cout<<"The temperature in faherenheight is "<< fah<<endl;
}