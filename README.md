# Base3-Base2Encoding
This project encodes the Base 3 representation of N as two binary strings.
More specifically, given N,  we find a base 3 representation that is k digits long, which we encode in binary as a string 2*k digits long where the first k digits tell you which indices are non-zero and the last k digits tell you which indices represent 2.

Example: Input N = 55 -> Base3(N) = 201 -> Encoded(201) = 101 100

Explanation:  
- `Base3(55) = 201` (3-digit representation)  
- `Encoded(201) = 101 100`  
- **101** → Non-zero positions (1s mark where digits are nonzero)  
- **100** → Indicates where the digit is **2**

Note: In this example, Base2(55) = 110 111   while Encoded(Base3(55)) = 101 100,   so there is no change to the binary representation, but for higher N, this encoding actually increases the length of Ns binary representation, but introduces a different distribution of 0s and 1s that may optimize huffman encoding

  
## License  
This project is open-source under the **MIT License**.
