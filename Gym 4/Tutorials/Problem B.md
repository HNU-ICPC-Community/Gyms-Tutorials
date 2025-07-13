# Problem B: Phone numbers

## Problem Explanation

The problem asks us to take a given phone number, represented as a sequence of `n` digits, and divide it into groups of either two or three digits. We need to output one such valid division, with groups separated by a single character (e.g., a hyphen). If multiple valid divisions exist, any one of them is acceptable.

## Solution Approach

This problem can be solved using a greedy approach. Since we only need to find *any* valid division, we can iterate through the phone number and form groups. We prioritize forming groups of two digits. If, at any point, forming a two-digit group would leave a single digit at the end (which cannot form a group of two or three), we form a three-digit group instead.

**Algorithm:**
1. Read the integer `n` and the phone number string.
2. Initialize an empty string or list to store the formatted phone number.
3. Iterate through the phone number string from left to right using an index `i`.
4. In each iteration, check the remaining number of digits: `remaining_digits = n - i`.
5. If `remaining_digits` is 4, it means we have two options: two groups of two digits (2+2) or one group of three and one group of one (3+1). Since a single digit is not allowed, we must form two groups of two. So, take the next two digits as a group.
6. If `remaining_digits` is 3, take the next three digits as a group.
7. Otherwise (if `remaining_digits` is 2 or more than 4), take the next two digits as a group.
8. Append the formed group to our result. If it's not the first group, append a hyphen before it.
9. Increment the index `i` by the number of digits taken in the current group.
10. Repeat until all digits are processed.
11. Print the formatted phone number.

**Example Walkthrough (n=7, phone_number="1198733")**
*   Initial: `n=7`, `phone_number= 1198733"`
*   **Iteration 1:**
    *   `i = 0`, `remaining_digits = 7`. Not 4 or 3. Take 2 digits: "11". Result: "11". `i` becomes 2.
*   **Iteration 2:**
    *   `i = 2`, `remaining_digits = 5`. Not 4 or 3. Take 2 digits: "98". Result: "11-98". `i` becomes 4.
*   **Iteration 3:**
    *   `i = 4`, `remaining_digits = 3`. Take 3 digits: "733". Result: "11-98-733". `i` becomes 7.
*   All digits processed. Final output: "11-98-733".

**Time Complexity:**
O(`n`) - We iterate through the phone number string once, performing constant time operations for each digit. `n` is the number of digits in the phone number.
