# Problem C: Game series

## Problem Explanation

This problem describes a two-game football series between two teams: "Archimedians F.C." and "Pythagoreans F.C.". The winner of the series is determined by the total goals scored across both games. If the total goals are tied, a third tiebreaker game is needed.

We are given the scores for two games and need to determine which team wins the series or if a tiebreaker is required.

## Solution Approach

The solution involves calculating the total goals for each team across both games and then comparing these totals to determine the winner or a draw.

**Algorithm:**
1. Read the scores for the first game: `A1` and `P1`.
2. Read the scores for the second game: `A2` and `P2`.
3. Calculate the total goals for "Archimedians F.C.": `TotalA = A1 + A2`.
4. Calculate the total goals for "Pythagoreans F.C.": `TotalP = P1 + P2`.
5. Compare `TotalA` and `TotalP`:
    *   If `TotalA > TotalP`, print `A`.
    *   If `TotalP > TotalA`, print `P`.
    *   If `TotalA == TotalP`, print `D`.

**Time Complexity:**
O(1) - The program performs a constant number of arithmetic operations and comparisons.
