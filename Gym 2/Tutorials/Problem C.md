## Problem C: Iridescent Iguanas

### Problem Understanding

This problem asks us to identify the three "best" iguanas out of `N` iguanas. Each iguana has two attributes: `scales` (`a_i`) and `colors` (`b_i`). The problem defines a specific criterion for comparing two iguanas: Iguana `I` is "better" than Iguana `J` if the ratio of `I`'s scales to `J`'s scales (`a_I / a_J`) is greater than the ratio of `I`'s colors to `J`'s colors (`b_I / b_J`). If these ratios are equal, the iguana with the higher ID is considered better.

Mathematically, the comparison `a_I / a_J > b_I / b_J` can be rewritten to avoid floating-point numbers and division, which can introduce precision issues. Multiplying both sides by `a_J * b_J` (which are positive, so the inequality direction doesn't change) gives us `a_I * b_J > a_J * b_I`. This is a common technique in competitive programming for comparing ratios.

### Key Idea

1.  **Comparison Metric**: The core of this problem is defining a custom comparison function based on the given criteria. For two iguanas `i1` and `i2`:
    *   `i1` is better than `i2` if `i1.scales * i2.colors > i2.scales * i1.colors`.
    *   If `i1.scales * i2.colors == i2.scales * i1.colors`, then `i1` is better than `i2` if `i1.id > i2.id` (higher ID is better for ties).

2.  **Data Structure**: We need to store the `id`, `scales`, and `colors` for each iguana. A `struct` or `class` is suitable for this.

3.  **Sorting**: Once we have all iguanas with their attributes, we can sort them using our custom comparison function. The problem asks for the top three, so after sorting in descending order of "betterness", the first three iguanas in the sorted list will be our answer.