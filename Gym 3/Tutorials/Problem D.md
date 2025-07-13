## Problem D: Substring Reverse

This problem asks whether string `s` can be transformed into string `t` by reversing exactly one substring of `s`. Both strings `s` and `t` are of the same length and consist of lowercase Latin letters.

### Solution
This problem asks whether string `s` can be transformed into string `t` by reversing exactly one substring of `s`. Both strings `s` and `t` are of the same length and consist of lowercase Latin letters.

First, a crucial observation is that if `s` can be transformed into `t` by reversing a substring, then all characters *outside* that reversed substring must be identical in `s` and `t`. This means we can find the differing characters and their indices.

Let\'s outline the steps:
1.  Iterate through both strings `s` and `t` simultaneously and collect the indices where `s[i]` is not equal to `t[i]`. Store these indices in a `vector<int>`.
2.  If the `diff_indices` vector is empty, it means `s` and `t` are already identical. In this case, we can consider an empty substring reversal (or any single character reversal that doesn\'t change the string), so the answer is "YES".
3.  If `diff_indices` is not empty, we need to check if the substring defined by these differing characters, when reversed, matches the corresponding part of `t`.
    *   The start of the potential substring to reverse is `diff_indices[0]` (the first index where characters differ).
    *   The end of the potential substring to reverse is `diff_indices.back()` (the last index where characters differ).
4.  Create a temporary copy of `s`. Reverse the substring of this copy from `diff_indices[0]` to `diff_indices.back()` (inclusive). The `reverse` algorithm can be used for this.
5.  Compare this modified copy of `s` with `t`. If they are identical, then the answer is "YES"; otherwise, it\'s "NO".

Consider edge cases:
*   If `s` and `t` have different lengths (though the problem states they are the same length, it\'s good practice to consider this for robustness).
*   If there are differing characters, but they don\'t form a contiguous block, or if reversing them doesn\'t match `t`. For example, if `s = "abcde"` and `t = "abxye"`, the differing characters are at indices 2 and 3. Reversing `s[2..3]` (`"cd"` to `"dc"`) would give `"abdce"`, which is not `t`. The solution handles this by only considering the first and last differing indices as the bounds of the substring to reverse.

