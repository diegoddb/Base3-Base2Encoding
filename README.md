#Base3-Base3SplitEncoding

This project encodes the N by decomposing the Base 3 representation of N into two binary strings.

⚠ Note: This is not the direct Base 2 representation of N. Instead, this encoding transforms the Base 3 representation into a structured binary format using flags for 1s and 2s in the Base 3 Representation. 

Overview

Given an integer N, we:  
	1.	Compute its Base 3 representation (which has k digits).  
	2.	Encode it as a 2k-bit binary string, where:  
	•	The first k bits indicate positions where digits are non-zero.  
	•	The last k bits indicate positions where the digit is 2.  

Example 1

Input:  N = 55
Base 3: 2001
Encoded: 0001 1000

Explanation  
	•	Base3(55) = 2001 (4-digit representation)  
	•	Base2Decomposition(2001) = 0001 1000  
	•	0001 → Marks non-zero positions  
	•	1000 → Marks positions where the digit is 2

Binary Representation Comparison

Base2(55) = 110 111
Encoded(Base3(55)) = 0001 1000

Analysis

This encoding increases the length of N’s binary representation but changes the distribution of 0s and 1s, which may improve efficiency for secondary compression techniques such as Huffman Encoding or Run-Length Encoding.

Example 2 (Skewing 0s to 1s Ratio)

Base2(170) = 1010 1010       (Ratio of 0s to 1s: 4/4 = 1.00)
Encoded(170) = 00000 10011   (Ratio of 0s to 1s: 7/3 = 2.33)

This demonstrates how the encoding skews the bit distribution, which may offer advantages in specific encoding schemes.

How to Run

This code was written in C++ (g++-14). To compile and run:

g++ Base3ToBinaryEncode.cpp -o encode  
./encode  

g++ Base3ToBinaryDecode.cpp -o decode  
./decode  

Future Work  
	•	Investigating how this encoding impacts compression ratios for Huffman Encoding, Run Length Encoding.  
	•	Exploring a function f(x) such that f(base3tobase2encoding(n)) minimizes the output length.  
 		Specifically, defining a secondary encoding step that will efficently compress this distribution
   		ie Mathematically find range of possible permutations of 0s,1s (for one, only even length strings are in range)
     		, analyze things like the frequency in terms of runs of 0s,1s 
       		and analyze the values which are out of range or impossible to get 
	 	For example, Base3ToBinaryEncode(n)= 11 11 is impossible, base3(n) cant have 1s and 2s in the same location
	 	or any odd length string is impossible in our encoding. 

License

This project is open-source under the MIT License.
