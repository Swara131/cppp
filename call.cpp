#include <iostream>
using namespace std;

void swap(int a, int b) {
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << "After swapping inside function: " << a << " " << b << endl;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    swap(x, y);

    cout << "After swapping in main: " << x << " " << y;

    return 0;
}