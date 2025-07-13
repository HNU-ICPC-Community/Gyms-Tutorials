# Problem D: Banis and Cards

## Problem Explanation

Banis has `n` cards, numbered from 1 to `n`. He chooses a number `m` and wants to find the sum of all cards `x` such that `x % m == 0`. We are tasked with helping Banis solve this problem.


## Solution Approach

The problem asks us to find the sum of all multiples of `m` that are less than or equal to `n`. These multiples are `m, 2m, 3m, ..., km`, where `km <= n`. The largest multiple of `m` less than or equal to `n` is `m * floor(n/m)`. Let `k = floor(n/m)`.

So, we need to calculate the sum: `m + 2m + 3m + ... + km`.
This can be rewritten as: `m * (1 + 2 + 3 + ... + k)`.

The sum of the first `k` natural numbers (1 to `k`) is given by the formula `k * (k + 1) / 2`.

Therefore, the total sum is `m * (k * (k + 1) / 2)`.

**Algorithm:**
1. For each test case:
    a. Read `n` and `m`.
    b. Calculate `k = n / m` (integer division, which is equivalent to `floor(n/m)` for positive integers).
    c. Calculate the sum using the formula: `sum = m * (k * (k + 1) / 2)`.
    d. Print the `sum`.

**Time Complexity:**
O(1) per test case - Each test case involves a few arithmetic operations (division, multiplication, addition). Since there are `t` test cases, the total time complexity will be O(`t`). Given `t` can be up to 10^5, this constant time per test case is efficient enough.
