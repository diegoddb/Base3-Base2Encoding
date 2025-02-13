#include <iostream>
#include <vector>
#include <algorithm>  // For reverse()

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

// **Convert Base-3 Representation to Sparse Binary Encoding**
void base3ToSparseBinary(int n) {
    vector<int> base3 = decimalToBase3(n);

    int len = base3.size();
    vector<int> onesBits(len, 0);
    vector<int> twosBits(len, 0);

    // Construct sparse binary encoding
    for (int i = 0; i < len; i++) {
        if (base3[i] == 1) onesBits[i] = 1;  // Mark only 1s
        if (base3[i] == 2) twosBits[i] = 1;  // Mark only 2s
    }

    // Print Base-3 Representation
    cout << "Base-3: ";
    for (int digit : base3) cout << digit;
    cout << endl;

    // Print Binary Encoding
    cout << "Binary Encoding: ";
    for (int bit : onesBits) cout << bit;
    cout << " ";
    for (int bit : twosBits) cout << bit;
    cout << endl;
}

// **Main Function**
int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    base3ToSparseBinary(N);

    return 0;
}
