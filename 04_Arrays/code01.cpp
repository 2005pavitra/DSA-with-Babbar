#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter the values of the array:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "The array elements are:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
