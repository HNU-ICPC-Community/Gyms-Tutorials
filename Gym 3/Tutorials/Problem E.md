## Problem E: Time

This problem requires us to compare two time durations, each given in hours, minutes, and seconds.

### Solution
This problem requires us to compare two time durations, each given in hours, minutes, and seconds. The most straightforward way to compare such durations is to convert them into a single, consistent unit, such as total seconds. This eliminates the complexity of handling different units and allows for a simple numerical comparison.

Here\"s the conversion logic:
*   1 hour = 60 minutes
*   1 minute = 60 seconds
*   Therefore, 1 hour = 60 * 60 = 3600 seconds.

For each given duration (h, m, s):
1.  Calculate the total seconds: `total_seconds = h * 3600 + m * 60 + s`.

After converting both durations to total seconds, simply compare the two `total_seconds` values. If they are equal, print "Yes"; otherwise, print "No". The problem also specifies multiple test cases, so the solution should be structured to loop through `T` test cases, printing the result for each case in the specified format ("Case X: Yes/No").

It\"s important to use a data type that can hold the maximum possible total seconds. Given the constraints (hours, minutes, seconds up to 5000), the maximum total seconds would be `5000 * 3600 + 5000 * 60 + 5000`, which is `18,000,000 + 300,000 + 5000 = 18,305,000`. A `long long` in C++ is suitable for this purpose to prevent overflow, although `int` might also suffice depending on its maximum value on the system (typically 2*10^9, which is enough).

