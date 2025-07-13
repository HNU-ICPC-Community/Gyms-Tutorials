## Problem D: Angry Za3bola

### Explanation

Given three numbers `a`, `b`, and `c`, we need to insert either `+` or `-` operators between them to maximize the result of the expression. The expression will be in the form `a op1 b op2 c`.

### Idea

There are two positions where operators can be inserted, and for each position, there are two choices (`+` or `-`). This gives a total of `2 * 2 = 4` possible expressions:
1. `a + b + c`
2. `a + b - c`
3. `a - b + c`
4. `a - b - c`

We need to calculate the result of each of these four expressions and find the maximum among them. Since the numbers are relatively small (`-10^6 <= a, b, c <= 10^6`), the results will fit within standard integer types.

Let's list the possible combinations and their results:
- `a + b + c`
- `a + b - c`
- `a - b + c`
- `a - b - c`

We can simply compute all four and take the maximum. This is an `O(1)` solution as it involves a fixed number of arithmetic operations.