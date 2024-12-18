#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int i; 
    int n;
    for (i=1; i<n; i++){
        int min = 1;

        int j; 
        for(j=i+1; j<=n;j++){
            if( arr[j] < arr[min]){
                arr[j]= min;
            };
        }
    }
}