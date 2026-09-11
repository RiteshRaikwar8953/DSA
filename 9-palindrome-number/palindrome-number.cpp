class Solution {
public:
bool isPalindrome(int x) {
    // Negative numbers are not palindromes
    if (x < 0) return false;
    
    long long rev = 0; // Use long long to prevent overflow during reversal
    int original = x;  // Save the original value
    
    while (x > 0) {
        rev = rev * 10 + (x % 10);
        x /= 10; // Fixed: update x
    }
    
    return original == rev;
}
};