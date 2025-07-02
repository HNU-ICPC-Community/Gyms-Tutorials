## Problem F: Kickoff

### Explanation

We have `n` participants, and `n` is divisible by 3. We need to form teams of exactly 3 participants. Each participant `i` has solved `a_i` problems. A team gets a discount (pays 2000 EGP instead of 3000 EGP) if all three of its members have solved at least one problem. The goal is to minimize the total cost paid by the community.

### Idea

To minimize the total cost, we want to maximize the number of teams that receive the discount. A team receives a discount if all three members have solved at least one problem. This means we should prioritize forming discount teams using participants who have solved 1 or more problems.

Let's categorize participants into two groups:
1. Participants who have solved 0 problems (`a_i = 0`).
2. Participants who have solved 1 or more problems (`a_i >= 1`).

To maximize discount teams, we should try to form teams entirely from participants in group 2. If we have enough participants in group 2 to form a team, and all three have `a_i >= 1`, then this team will get a discount.

Consider the participants who have solved 0 problems. If any team includes a participant who has solved 0 problems, that team will *not* get a discount, regardless of how many problems the other two members solved. Therefore, to minimize cost, we should try to form as many discount teams as possible from participants who have solved at least one problem.

Let `count_zero` be the number of participants who solved 0 problems, and `count_non_zero` be the number of participants who solved at least 1 problem.

The total number of teams will be `n / 3`.

We want to form as many teams as possible with 3 `count_non_zero` participants. Each such team costs 2000 EGP.

If we have `count_non_zero` participants, we can form `floor(count_non_zero / 3)` teams of 3 non-zero participants. These teams will get the discount.

The remaining participants will be `count_non_zero % 3` non-zero participants and `count_zero` zero-problem participants. These remaining participants must be grouped into teams of 3. Any team formed with a zero-problem participant will cost 3000 EGP.

Let's sort the `a_i` values. It's more beneficial to use participants with `a_i >= 1` for discount teams. We should pair up participants with `a_i = 0` with participants who have `a_i >= 1` only if we cannot form a full discount team.

The optimal strategy is to sort the participants by the number of problems solved. Then, greedily form teams of 3. If we can form a team where all 3 members have solved at least one problem, we do so to get the discount. Otherwise, we form a regular team. This can be simplified:

1. Count the number of participants who solved 0 problems (`zeros`).
2. Count the number of participants who solved 1 or more problems (`non_zeros`).

We want to form as many teams as possible with 3 `non_zeros` participants. Each such team costs 2000 EGP.

If `non_zeros >= 3`:
   We can form `floor(non_zeros / 3)` discount teams. The cost for these teams is `floor(non_zeros / 3) * 2000`.
   Remaining `non_zeros_rem = non_zeros % 3`.
   Remaining `zeros_rem = zeros`.

If `non_zeros < 3`:
   No discount teams can be formed from only `non_zeros` participants. All teams will cost 3000 EGP.
   The total cost will be `(n / 3) * 3000`.

Let's reconsider. The key is that a team gets a discount *if and only if* all three members solved at least one problem. This means a team with even one member who solved 0 problems will not get a discount.

So, we should try to form as many teams as possible using only participants who solved at least one problem. Let `num_discount_teams` be the number of teams we can form where all 3 members have `a_i >= 1`. This is `non_zeros // 3`.

The cost from these teams is `num_discount_teams * 2000`.

The remaining participants are `non_zeros % 3` participants who solved at least one problem, and `zeros` participants who solved 0 problems. The total number of remaining participants is `(non_zeros % 3) + zeros`.

These remaining participants must form `((non_zeros % 3) + zeros) / 3` teams. Since any of these teams will necessarily include at least one participant who solved 0 problems (unless `zeros` is 0 and `non_zeros % 3` is also 0, which means all participants formed discount teams), these teams will cost 3000 EGP each.

So, the number of full-price teams is `(n / 3) - num_discount_teams`.

Total cost = `(num_discount_teams * 2000) + ((n / 3) - num_discount_teams) * 3000`.

This logic seems correct. We maximize the number of discount teams by only considering participants who solved at least one problem for those teams. Any participant who solved 0 problems will force their team to be full-price. So, we should form as many 3-person teams as possible from the `non_zeros` group. The remaining `non_zeros` participants (0, 1, or 2) will be grouped with the `zeros` participants to form full-price teams. Since `n` is divisible by 3, the total number of participants will always form an exact number of 3-person teams. The total number of teams is `n/3`.

Example walkthrough: `n=6`, `a = [0, 2, 3, 1, 0, 5]`
`zeros = 2` (from `a[0]=0, a[4]=0`)
`non_zeros = 4` (from `a[1]=2, a[2]=3, a[3]=1, a[5]=5`)

`num_discount_teams = non_zeros // 3 = 4 // 3 = 1`.
Cost from discount teams = `1 * 2000 = 2000`.

Total teams = `n / 3 = 6 / 3 = 2`.
Number of full-price teams = `total_teams - num_discount_teams = 2 - 1 = 1`.
Cost from full-price teams = `1 * 3000 = 3000`.

Total cost = `2000 + 3000 = 5000`. This matches the example.

This approach seems robust.

