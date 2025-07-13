## Problem A: What is Kaito's dilemma?

### Explanation

KaitoKid wants to select a group of his friends such that the bitwise AND of their assigned integer values (`a_i`) results in a specific target value `x`. The goal is to maximize the number of friends in this group. If no such group can be formed (i.e., no single friend or combination of friends can satisfy the condition), the output should be -1.

### Idea

The core of this problem lies in the properties of the bitwise AND operation. For a set of numbers `b_1, b_2, ..., b_k`, their bitwise AND `(b_1 & b_2 & ... & b_k)` will result in `x` only if every number `b_i` in the set has all the bits set that are also set in `x`. In other words, for each `b_i`, the condition `(b_i & x) == x` must hold. If `(b_i & x) != x`, then `b_i` has a 0 at a position where `x` has a 1, and thus the final bitwise AND of the group will also have a 0 at that position, making it impossible to achieve `x`.

Therefore, the first step is to filter the given `n` friends. We only consider friends whose `a_i` value satisfies `(a_i & x) == x`. Any friend whose `a_i` value does not satisfy this condition cannot be part of the group, as their inclusion would make it impossible to achieve the target `x`.

After filtering, if no friends remain, it means no group can be formed, and we should output -1. Otherwise, all remaining friends satisfy the `(a_i & x) == x` condition. If we take all these filtered friends, their bitwise AND will necessarily be `x`. This is because each individual `a_i` has all the bits of `x` set, and the bitwise AND operation will preserve these common set bits. Since we want to maximize the number of friends, we should include all friends who satisfy the filtering condition.

Thus, the solution is to count how many friends `a_i` satisfy `(a_i & x) == x`. This count will be the maximum number of friends KaitoKid can take. If this count is 0, output -1.