## Problem B: O-Sequence

The O-sequence is defined by numbers `N` such that `N % 3 == 0` or `N % 6 == 1`.

### Solution
The O-sequence is defined by numbers `N` such that `N % 3 == 0` or `N % 6 == 1`. Let's verify this pattern with the given examples:

*   `0`: `0 % 3 == 0` (True) -> "yes"
*   `2`: `2 % 3 == 2` (False), `2 % 6 == 2` (False) -> "no"
*   `7`: `7 % 3 == 1` (False), `7 % 6 == 1` (True) -> "yes"

This pattern accurately describes the O-sequence. Therefore, to check if a number `N` is in the O-sequence, we simply apply this condition.

