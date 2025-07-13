## Problem G: Balloons Factory (Hard version)

### Explanation

This is a harder version of Problem C. We are given `n` teams with problem-solving times `a_i`, and Midoriya can make at most `m` delivery runs. The goal is to find the minimum possible value of the *maximum waiting time* among all teams. When Midoriya makes a trip at time `t`, he delivers to all teams that solved a problem at `a_i <= t` and haven't been served yet, such that their waiting time (`t - a_i`) does not exceed the current maximum allowed waiting time `W`.

### Idea

This problem has a monotonic property that suggests binary search on the answer. If a maximum waiting time `W` is achievable with `m` trips, then any `W' > W` is also achievable with `m` or fewer trips. This allows us to binary search for the minimum `W`.

Let's define a `check(W)` function that determines if it's possible to deliver all balloons within `m` trips, given a maximum allowed waiting time `W`.

Inside `check(W)`:
1. Sort the `a_i` times in ascending order. This is crucial for the greedy approach.
2. Initialize `trips = 0` and `current_index = 0`.
3. While `current_index < n`:
    a. Increment `trips`.
    b. Let `start_time = a[current_index]`. This is the time the current unserved team solved the problem.
    c. The latest time Midoriya can deliver to this team without exceeding `W` is `delivery_time = start_time + W`.
    d. Now, we greedily cover as many subsequent teams as possible in this trip. Iterate `current_index` forward: while `current_index < n` and `a[current_index] <= delivery_time`, increment `current_index`. (The condition `delivery_time - a[current_index] <= W` is implicitly satisfied for all `a[current_index]` in this range because `a[current_index] >= start_time`, so `delivery_time - a[current_index] <= (start_time + W) - start_time = W`).
4. After the loop, return `trips <= m`.

Binary search range for `W`:
- The minimum possible `W` is 0 (if all teams can be served at their `a_i` time, which is unlikely unless `m=n`).
- The maximum possible `W` can be `max(a_i) - min(a_i)` or simply `10^9` (the maximum possible `a_i`). A safe upper bound would be `10^9`.

Algorithm:
1. Sort the input array `a`.
2. Set `low = 0`, `high = 10^9` (or `a[n-1] - a[0]` if `n > 0`, but `10^9` is safer as `a_i` can be large).
3. Initialize `ans = high`.
4. While `low <= high`:
    a. `mid = low + (high - low) / 2`.
    b. If `check(mid)` is true (meaning `mid` is a possible maximum waiting time):
        i. `ans = mid`.
        ii. Try for a smaller `W`: `high = mid - 1`.
    c. Else (`check(mid)` is false):
        i. `mid` is too small, need a larger `W`: `low = mid + 1`.
5. Print `ans`.

Sorting takes `O(N log N)`. The `check` function takes `O(N)` time. The binary search performs `log(MaxW)` iterations. So, the total time complexity will be `O(N log N + N log MaxW)`, which simplifies to `O(N log MaxW)` since `N log N` is usually smaller than `N log MaxW` given `MaxW` can be `10^9`. This should be efficient enough for `N = 10^5`.

