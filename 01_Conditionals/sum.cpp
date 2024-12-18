#include<iostream>
using namespace std;

int main(){
    int n;
    int i = 1;
    int sum = 0;

    cout<<"Enter the value: "<<endl;
    cin>>n;

    while(i <= n){
        sum = sum + i;
        i++;
    }

    cout<<sum<<endl;
    
}