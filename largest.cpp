#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a > b)
        cout << "Largest = " << a;
    else
        cout << "Largest = " << b;

    return 0;
}