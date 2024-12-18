#include<iostream>
using namespace std;

void solve(int val){
    val = val + 10;
    return;
}

int main(){
    int val = 10;
    solve(val);
    cout<<val<<endl;
}