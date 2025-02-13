#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// **Convert Base-3 Representation to Decimal**
int base3ToDecimal(const vector<int>& base3) {
    int decimal = 0;
    int power = 1;  // 3^0 initially

    // Convert Base-3 to Decimal
    for (int i = base3.size() - 1; i >= 0; i--) {
        decimal += base3[i] * power;
        power *= 3;
    }
    return decimal;
}

// **Decode Sparse Binary Encoding to Decimal N**
int decodeBase3ToBinary(const string& binaryInput) {
    int len = binaryInput.length();

    // Validate input length (must be even)
    if (len % 2 != 0) {
        cerr << "Error: Input length must be even!" << endl;
        return -1;  // Return error code
    }

    int halfLen = len / 2;
    vector<int> base3(halfLen, 0);

    // Split into two halves
    string onesBits = binaryInput.substr(0, halfLen);
    string twosBits = binaryInput.substr(halfLen, halfLen);

    // Reconstruct Base-3 representation
    for (int i = 0; i < halfLen; i++) {
        if (onesBits[i] == '1') base3[i] = 1;
        if (twosBits[i] == '1') base3[i] = 2;
    }

    // Convert Base-3 to Decimal
    return base3ToDecimal(base3);
}

// **Main Function**
int main() {
    string binaryInput;

    cout << "Enter binary encoding: ";
    cin >> binaryInput;

    int N = decodeBase3ToBinary(binaryInput);

    if (N != -1) {
        cout << "Decoded N: " << N << endl;
    }

    return 0;
}
