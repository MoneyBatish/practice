#include <iostream>
#include <vector>

using namespace std;

int numDecodingsHelper(const string& digits, int index) {
    if (index == digits.length()) {
        return 1;
    }
    if (digits[index] == '0') {
        return 0;
    }
    int count = numDecodingsHelper(digits, index + 1);
    
    // Recursive case 2: consider decoding the current and next digit as a single character
    if (index < digits.length() - 1) {
        int twoDigits = (digits[index] - '0') * 10 + (digits[index + 1] - '0');
        
        // Check if the two-digit number can be decoded
        if (twoDigits >= 10 && twoDigits <= 26) {
            count += numDecodingsHelper(digits, index + 2);
        }
    }
    
    return count;
}

int numDecodings(const string& digits) {
    return numDecodingsHelper(digits, 0);
}

int main() {
    string digits;
    cout << "Enter the digits: ";
    cin >> digits;
    
    int result = numDecodings(digits);
    cout << "Number of possible decodings: " << result << endl;
    
    return 0;
}
