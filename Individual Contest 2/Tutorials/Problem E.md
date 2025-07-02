## Problem E: Coins

### Problem Understanding

This problem asks whether a target value `n` can be formed using a given number of coins of three denominations: 1, 10, and 100. We are given `a` coins of value 1, `b` coins of value 10, and `c` coins of value 100. We need to determine if it's possible to combine these coins to achieve *exactly* the value `n`.

### Key Idea

This problem can be solved using a greedy approach. To maximize our chances of reaching the target value `n`, we should always try to use the largest denomination coins first. This is because higher denomination coins are less flexible in forming exact amounts. By using as many 100-value coins as possible, then as many 10-value coins as possible, we leave the remaining amount to be covered by 1-value coins, which are the most flexible.

The steps are as follows:

1.  **Prioritize 100-value coins**: Calculate the maximum number of 100-value coins (`num_100_used`) that can be used without exceeding the target `n` and without exceeding the available `c` coins. This is `min(c, n / 100)`.
2.  **Update remaining `n`**: Subtract the value contributed by the 100-value coins from `n`.
3.  **Prioritize 10-value coins**: Similarly, calculate the maximum number of 10-value coins (`num_10_used`) that can be used from the remaining `n` and available `b` coins. This is `min(b, n / 10)`.
4.  **Update remaining `n`**: Subtract the value contributed by the 10-value coins from `n`.
5.  **Check 1-value coins**: After using the maximum possible 100-value and 10-value coins, the remaining value of `n` must be formed using only 1-value coins. If this remaining `n` is less than or equal to the available `a` coins, then it's possible to form the exact value `n`. Otherwise, it's not.
