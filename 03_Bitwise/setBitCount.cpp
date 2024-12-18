#include <iostream>
using namespace std;

int main()
{
    int number =7;
    // cout << "Enter the number" << endl;
    // cin >> number;
    int setBitCount = 0;

    while (!number == 0)
    {

        int bit = (number & 1);
        if (bit & 1)
        {
            setBitCount++;
        }
            number = (number >> 1);
    }
    cout << "SetBitCount for the number is " << setBitCount << endl;
}
