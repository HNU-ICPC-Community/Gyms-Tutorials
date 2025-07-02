## Problem A: Iguana Playground

### Problem Understanding

This problem asks us to determine if it's possible to form a larger rectangle of dimensions `P x Q` using two identical smaller rectangles of dimensions `M x N`. If it's possible, we need to output the area of the leftover pieces. Otherwise, we output 'IMPOSSIBLE'. The key here is that we can cut the smaller rectangles and rearrange the pieces. This implies we are primarily concerned with the total area and whether the dimensions `P` and `Q` can be formed by combining the `M` and `N` dimensions in certain ways.

### Key Idea

1.  **Total Area Check**: The total area available from two `M x N` rectangles is `2 * M * N`. The target rectangle has an area of `P * Q`. If `P * Q` is greater than `2 * M * N`, it's impossible to form the target rectangle, so we output 'IMPOSSIBLE'.

2.  **Dimension Check**: The problem statement implies that we can cut the rectangles and rearrange them. This means we can effectively combine the lengths. For example, if we want to form a `P x Q` rectangle, we need to check if `P` can be formed by `M` or `2M` and `Q` by `N` or `2N`, or vice versa. The solution code checks `(P <= 2 * M and Q <= N)` or `(P <= M and Q <= 2 * N)`. This covers the cases where one dimension of the target rectangle is at most twice the corresponding dimension of the small rectangle, and the other dimension is at most the corresponding dimension of the small rectangle. It also checks the swapped case `(Q <= 2 * M and P <= N)` or `(Q <= M and P <= 2 * N)`.