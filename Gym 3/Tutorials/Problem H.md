## Problem H: Split the String

This problem asks us to find the number of ways to split a given string `S` into two non-empty substrings, `A` and `B`, such that both `A` and `B` are palindromes. A palindrome is a string that reads the same forwards and backward.

### Solution
Instead of checking every substring for being a palindrome directly, we can use a more efficient approach based on the properties of palindromes. For a string to be a palindrome, at most one character can have an odd frequency (for odd-length palindromes), and all characters must have even frequencies (for even-length palindromes).

We can preprocess the string to keep track of the number of characters with odd frequencies for every prefix and suffix. For each possible split point, if both the prefix and suffix have at most one character with an odd frequency, then both can be rearranged into palindromes.

The solution involves:
1. Iterating through the string from left to right, maintaining the count of characters with odd frequencies for each prefix.
2. Iterating from right to left, maintaining the same count for each suffix.
3. For each split point, if both the prefix and suffix have at most one odd frequency, increment the answer.

This approach is efficient and works in linear time, making it suitable for large strings.

