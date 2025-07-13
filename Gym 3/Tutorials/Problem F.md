## Problem F: Phone Numbers

This problem asks us to determine the maximum number of phone numbers that can be formed given a set of digit cards. A phone number is defined by the pattern `8xxxxxxxxx`, meaning it must start with an '8' and be followed by nine other digits. We are given `n` cards, each containing a string of digits. We can use each digit on a card at most once.

### Solution
To solve this problem, first count the number of '8' digits in the concatenated string of all digit cards. Since each phone number requires exactly 11 digits (one '8' followed by nine other digits), the maximum number of phone numbers you can form is limited by both the number of '8's and the total number of complete 11-digit groups you can make from all available digits. Therefore, the answer is the minimum of the count of '8's and the total number of digits divided by 11.

