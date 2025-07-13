## Problem H: Amusement Park Adventure

### Problem Understanding

This problem is about helping Carlitos, an amusement park enthusiast, determine how many rides he can enjoy. The constraint is Carlitos' height (`H`) and the minimum height requirements (`A_i`) for each ride. We are given the total number of rides (`N`) in the park, Carlitos' height, and a list of minimum height requirements for each of the `N` rides. The task is to count how many rides Carlitos can go on, which means counting how many rides have a minimum height requirement less than or equal to Carlitos' height.

### Key Idea

The problem is a straightforward counting problem. For each ride, we simply need to compare Carlitos' height (`H`) with the ride's minimum height requirement (`A_i`). If `H >= A_i`, then Carlitos can go on that ride, and we increment a counter. After checking all `N` rides, the final value of the counter will be the answer.
