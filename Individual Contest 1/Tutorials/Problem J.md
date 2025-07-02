## Problem J: 7assona

### Explanation

Given three positive numbers, we need to determine if at least two of them are equal. If they are, print "YES"; otherwise, print "NO".

### Idea

This is a simple comparison problem. We are given three numbers, let's call them `a`, `b`, and `c`. We need to check if any pair among them is equal. There are three possible pairs:
1. `a` and `b` are equal (`a == b`)
2. `b` and `c` are equal (`b == c`)
3. `a` and `c` are equal (`a == c`)

If any of these conditions are true, then at least two numbers are equal, and we should print "YES". Otherwise, if none of these conditions are true, it means all three numbers are distinct, and we should print "NO".

Alternatively, we can put the three numbers into a set (or a frequency map) and check the size of the set. If the size of the set is less than 3, it means there are duplicate numbers, and thus at least two numbers are equal. Since the numbers are small (between 1 and 20), a frequency map or sorting would also work. However, direct comparisons are the most straightforward.

