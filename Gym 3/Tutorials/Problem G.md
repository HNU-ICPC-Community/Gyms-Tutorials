## Problem G: The Good Judge

This problem involves finding the minimum number of operations to make the greatest common divisor (GCD) of two arrays, `A` and `B`, equal. An operation consists of choosing an integer `x` and multiplying all elements of an array by `x`.

### Solution
This problem involves finding the minimum number of operations to make the greatest common divisor (GCD) of two arrays, `A` and `B`, equal. An operation consists of choosing an integer `x` and multiplying all elements of an array by `x`.

Let `G_A` be the GCD of array `A` and `G_B` be the GCD of array `B`. If we multiply all elements of array `A` by `x_A`, the new GCD of `A` becomes `G_A * x_A`. Similarly, for array `B`, the new GCD becomes `G_B * x_B`.

Our goal is to find the minimum number of operations such that `G_A * x_A = G_B * x_B`.

First, calculate the initial GCDs of arrays `A` and `B`.
`G_A = gcd(a_1, a_2, ..., a_n)`
`G_B = gcd(b_1, b_2, ..., b_n)`

Now, we analyze the relationship between `G_A` and `G_B`:

**Case 1: `G_A == G_B`**
If the initial GCDs are already equal, no operations are needed. The answer is 0.

**Case 2: `G_A != G_B`**
We need to make them equal. This can be done by multiplying one or both arrays by some integer(s).

*   **Subcase 2.1: One GCD is a multiple of the other.**
    *   If `G_B` is a multiple of `G_A` (i.e., `G_B % G_A == 0`), we can multiply array `A` by `G_B / G_A`. This makes the new GCD of `A` equal to `G_B`. Only 1 operation is needed.
    *   Similarly, if `G_A` is a multiple of `G_B` (i.e., `G_A % G_B == 0`), we can multiply array `B` by `G_A / G_B`. This makes the new GCD of `B` equal to `G_A`. Only 1 operation is needed.

*   **Subcase 2.2: Neither GCD is a multiple of the other.**
    If `G_A` is not a multiple of `G_B` and `G_B` is not a multiple of `G_A`, we need to perform operations on both arrays. The simplest way to make them equal is to multiply `A` by `G_B` and `B` by `G_A`. This makes both new GCDs equal to `G_A * G_B`. This requires 2 operations.

Therefore, the minimum number of operations is:
*   0 if `G_A == G_B`
*   1 if one is a multiple of the other
*   2 otherwise

To implement GCD, you can use the Euclidean algorithm.

