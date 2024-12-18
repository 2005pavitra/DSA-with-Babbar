#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch ='A' + n - i - j + 1;
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}
