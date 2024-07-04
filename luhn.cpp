#include <bits/stdc++.h>
using namespace std;

bool iscardvalid(const string& number) {
    int sum = 0;
    bool dig_2= false;

    for (int i = number.length() - 1; i >= 0; --i) {
        int digit = number[i] - '0';

        if (dig_2) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit;
        dig_2 = !dig_2;
    }

    return sum % 10 == 0;
}

int main() {
    string cardNumber;
    cout << "Enter a credit card number: ";
    cin >> cardNumber;

    if (iscardvalid(cardNumber)) {
        cout << "Valid credit card "<< endl;
    } else {
        cout << "Invalid credit card."<<endl;
    }

    return 0;
}