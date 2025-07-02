### Explanation

Midoriya needs to deliver balloons to `n` teams. Each team `i` solves their problem at time `a_i`. Midoriya can make a delivery run at any time `t`. When he makes a run, he delivers to all teams that have solved their problem by time `t` and haven't been served yet. The constraint is that the waiting time for any team (`t - a_i`) must not exceed `k` minutes. We need to find the minimum number of times Midoriya has to go out to deliver balloons.

### Idea

This problem can be solved using a greedy approach. Sort the `a_i` times in ascending order. Midoriya should make a delivery run as late as possible to cover as many teams as possible, without exceeding the `k` minute waiting time for the first unserved team.

Algorithm:
1. Sort the `a_i` times in ascending order.
2. Initialize `runs = 0` and `current_index = 0`.
3. While `current_index < n`:
    a. Increment `runs`.
    b. Let `delivery_time = a[current_index] + k`. This is the latest time Midoriya can make a run to serve the team at `a[current_index]` without exceeding `k` minutes of waiting time.
    c. Now, greedily cover as many subsequent teams as possible. Iterate `current_index` forward: while `current_index < n` and `a[current_index] <= delivery_time`, increment `current_index`.
4. After the loop, `runs` will contain the minimum number of delivery runs.

Example: `n = 5, k = 3`, `a = [1, 2, 3, 4, 5]`
Sorted `a = [1, 2, 3, 4, 5]`

Initial: `runs = 0`, `current_index = 0`

Run 1:
  `runs = 1`
  `delivery_time = a[0] + k = 1 + 3 = 4`
  Teams covered: `a[0]=1`, `a[1]=2`, `a[2]=3`, `a[3]=4`. (since `1<=4`, `2<=4`, `3<=4`, `4<=4`)
  `current_index` becomes 4.

Run 2:
  `current_index = 4 < 5`
  `runs = 2`
  `delivery_time = a[4] + k = 5 + 3 = 8`
  Teams covered: `a[4]=5`. (since `5<=8`)
  `current_index` becomes 5.

Loop ends as `current_index = 5`.
Result: `runs = 2`.

This greedy strategy works because by serving the earliest unserved team as late as possible (i.e., at `a[current_index] + k`), we maximize the number of subsequent teams that can be included in the same run, thus minimizing the total number of runs.

Time complexity: Sorting takes `O(N log N)`. The greedy loop iterates through the sorted array once, taking `O(N)` time. So, the total time complexity is `O(N log N)`.
