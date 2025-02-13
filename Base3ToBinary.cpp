#include <iostream>
#include <vector>

using namespace std;

// **Convert Decimal to Base-3 Representation**
vector<int> decimalToBase3(int n) {
    vector<int> base3;
    while (n > 0) {
        base3.push_back(n % 3);
        n /= 3;
    }
    reverse(base3.begin(), base3.end()); // Ensure correct order
    return base3;
}

// **Convert Base-3 Representation to Binary Encoding**
void base3ToBinaryEncoding(int n) {
    vector<int> base3 = decimalToBase3(n);

    int len = base3.size();
    vector<int> nonzeroBits(len, 0);
    vector<int> twosBits(len, 0);

    // Construct binary encoding
    for (int i = 0; i < len; i++) {
        if (base3[i] > 0) nonzeroBits[i] = 1;  // Mark all nonzero digits
        if (base3[i] == 2) twosBits[i] = 1;    // Mark digits that are exactly 2
    }

    // Print Base-3 Representation
    cout << "Base-3: ";
    for (int digit : base3) cout << digit;
    cout << endl;

    // Print Encoded Binary
    cout << "Binary Encoding: ";
    for (int bit : nonzeroBits) cout << bit;
    cout << " ";
    for (int bit : twosBits) cout << bit;
    cout << endl;
}

// **Main Function**
int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    base3ToBinaryEncoding(N);

    return 0;
}
