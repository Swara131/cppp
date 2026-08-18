#include <iostream>
using namespace std;

int main() {
    int n, original, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n > 0) {
        digit = n % 10;
        sum = sum + digit * digit * digit;
        n = n / 10;
    }

    if (sum == original)
        cout << "Number is Armstrong";
    else
        cout << "Number is not Armstrong";

    return 0;
}