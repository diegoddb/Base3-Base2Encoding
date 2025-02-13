# Base3-Base2Encoding
This project encodes the Base 3 representation of N as two binary strings.

Given N,  we find a base 3 representation that is k digits long,  
we decompose this in binary as a string 2*k digits long where,  
the first k digits tell you which indices represent 1, and  
the last k digits tell you which indices represent 2.

Example: Input N = 55 -> Base3(N) = 2001 -> Encoded(2001) = 0001 1000

Explanation:  
- `Base3(55) = 2001` (3-digit representation)  
- `Base2Decomposition(2001) = 0001 1000`  
- **1001** → Non-zero positions (1s mark where digits are nonzero)  
- **1000** → Indicates where the digit is **2**

Summary:
In this example, Base2(55) = 110 111   
while the Encoded(Base3(55)) = 0001 1000,


Analysis:
In this example (as well as for higher N), the encoding increases the length of Ns binary representation but introduces a different distribution of 0s and 1s that may optimize other encodings such as Huffman Encoding, Run Length Encoding. See example 2 below that skews the ratio of 0s to 1s.

Example 2:
Base2(170) = 1010 1010          (Ratio of 0s to 1s: 4/4 = 1)
Encoded(Base3(170)) = 00000 10011 (Ratio of 0s to 1s: 7/3 = 2.33)


  
## License  
This project is open-source under the **MIT License**.
