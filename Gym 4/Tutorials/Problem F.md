
# Problem F: Not-Incomplete

## Problem Explanation

In KUET, there are `X` weeks in each semester. The CSE-000 course has `Y` classes each week. `Z` weeks have already passed, and you have attended exactly `N` classes up until now. To sit for the exam, you need at least 60% attendance. You are a procrastinator and want to attend the minimum amount of classes for each of the remaining weeks.

We need to determine if it's possible to sit for the exam, and if so, print the minimum number of classes you need to attend for each of the remaining weeks. You cannot attend more than `Y` classes in a week.


## Solution Approach

First, calculate the total number of classes in the semester and the minimum number required for 60% attendance:

- Total classes: `TotalClasses = X * Y`
- Minimum required: `RequiredAttendance = (TotalClasses * 3 + 4) / 5` (this formula ensures rounding up for 60%)

Determine how many more classes are needed:

- Classes still needed: `ClassesNeeded = RequiredAttendance - N`
- Remaining weeks: `RemainingWeeks = X - Z`
- Maximum possible attendance in remaining weeks: `MaxPossibleAttendance = RemainingWeeks * Y`

**Decision:**

- If `ClassesNeeded > MaxPossibleAttendance`, print "No" (it's impossible).
- Otherwise, print "Yes" and distribute the required classes over the remaining weeks.

**Distribution Strategy:**

- Start from the last week and assign as many classes as possible (up to `Y` per week), until all required classes are assigned.
- For each week, assign `min(Y, remaining)` classes, where `remaining` is the number of classes still needed.
- Output the number of classes for each week in order.

This approach ensures you attend the minimum number of classes each week, never exceeding the weekly limit, and guarantees the attendance requirement is met if possible.

**Time Complexity:**
O(X), where X is the number of weeks, since we iterate through the remaining weeks to distribute classes.

