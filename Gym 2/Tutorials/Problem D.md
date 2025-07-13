## Problem D: XP Challenge

### Problem Understanding

Iggy the iguana starts with `N` initial XP. She faces `M` dinosaurs, each with a certain amount of XP (`a_i`). Iggy has two types of attacks:

1.  **"Thumb spike"**: Deals `P1` damage and costs `P2` of Iggy's XP. This attack can be used at most once per dinosaur.
2.  **"Charge"**: Deals `Q1` damage and costs `Q2` of Iggy's XP. This attack can be used an unlimited number of times.

The goal is to determine if Iggy can defeat all `M` dinosaurs without her own XP dropping to zero or below. If she can, output "YES"; otherwise, output "NO".

### Key Idea

The core of this problem is to minimize the total XP cost for Iggy to defeat all dinosaurs. Since Iggy must defeat *all* dinosaurs, we can consider each dinosaur independently and find the minimum XP cost to defeat it. Then, we sum up these minimum costs and compare the total with Iggy's initial XP (`N`).

For each dinosaur with `a_i` XP, Iggy has two strategies to defeat it:

1.  **Use "Thumb spike" once, then "Charge" attacks**: If Iggy uses the "thumb spike" attack, the dinosaur's remaining XP becomes `max(0, a_i - P1)`. The cost for this is `P2`. Then, Iggy needs to deal `remaining` damage using "charge" attacks. The number of "charge" attacks needed would be `ceil(remaining / Q1)`. Each "charge" attack costs `Q2`. So, the total cost for this strategy is `P2 + ceil(remaining / Q1) * Q2`.
    *   Note on `ceil(X / Y)`: In integer arithmetic, `ceil(X / Y)` can be calculated as `(X + Y - 1) / Y` for positive `X` and `Y`.

2.  **Only use "Charge" attacks**: Iggy can choose to not use the "thumb spike" attack at all for a particular dinosaur. In this case, she needs to deal `a_i` damage using only "charge" attacks. The number of "charge" attacks needed would be `ceil(a_i / Q1)`. The total cost for this strategy is `ceil(a_i / Q1) * Q2`.

For each dinosaur, Iggy will choose the strategy that results in the minimum XP cost. We sum up these minimum costs for all `M` dinosaurs to get `total_cost`. Finally, if `total_cost < N`, Iggy can escape, and we print "YES"; otherwise, "NO".