#include <iostream>
using namespace std;

void solve(int &a)
{
    a = a + 10;
    cout<<a<<endl;
    return;
}

int main()
{
    int a = 10;
    int b = 5;
    int &x = a;
    int &y = b;
    x++;
    y++;
    solve(a);

    cout << x + y << endl;
    cout << a;
}