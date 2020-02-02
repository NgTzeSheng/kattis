// By writing out some workings for the first sample input and output, we realise the following:
// We only need the last (m - n) characters of the cipher text + plaintext to get our final answer.

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n, m;
    cin >> n >> m;
    
    int loop = m - n;
    
    string text = "";
    
    string plaintext, ciphertext;
    cin >> plaintext >> ciphertext;
    
    for (int i = 0; i < loop; i++) {
        int a = int(plaintext[plaintext.size() - i - 1]) % 97;      // Here we convert the last char of plaintext to int
        int b = int(ciphertext[ciphertext.size() - i - 1]) % 97;    // Here we convert the last char of cipher to int
        char k = char( ((26 + (b - a)) % 26) + 97 );                // Here we calculate the resulting char (decipher)
        plaintext = k + plaintext;                                  // We append the deciphered char to the start of plaintext
    }                                                               // to be used again in the calculations of further chars
    
    cout << plaintext;
    
    return 0;
}
