## Problem E: We need Balloons

### Explanation

The traditional RGB color system uses three colors (red, green, blue), each with values from 0 to 255, giving a total of `256 * 256 * 256 = 256^3` distinct colors. Rady introduced a new color system where red has values from 0 to `R`, green from 0 to `G`, and blue from 0 to `B`. We need to find the total number of distinct colors Rady's system can produce.

### Idea

This is a simple combinatorics problem. If red can take `R+1` distinct values (from 0 to `R`), green can take `G+1` distinct values (from 0 to `G`), and blue can take `B+1` distinct values (from 0 to `B`), then the total number of distinct color combinations is the product of the number of distinct values for each color component.

Total distinct colors = `(R + 1) * (G + 1) * (B + 1)`.

The constraints `0 <= R, G, B <= 10^9` mean that the result can be very large, so a `long long` in C++ (or equivalent in other languages) should be used to store the result.
