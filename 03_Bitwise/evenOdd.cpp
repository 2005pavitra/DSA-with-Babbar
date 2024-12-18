#include <iostream>
using namespace std;

int main()
{
   int number;
   cout<<"Enter the number"<<endl;
   cin>>number;

   if(number&1){
    cout<<"The number is odd";
   }else{
    cout<<"The number is even";
   }
   cout<<endl;
}
