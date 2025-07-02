## Problem B: Preferred Valley

### Problem Understanding

This problem asks us to find the height of the highest valley bottom in a terrain that is guaranteed to have a "W" shape. A "W" shape implies there are exactly two local minima (valley bottoms). A point `h[i]` is considered a valley bottom if its height is strictly less than both its immediate neighbors (`h[i-1]` and `h[i+1]`). We are given `N` height values, and we need to identify these two valley bottoms and then output the greater of their heights.

### Key Idea

1.  **Identifying Valley Bottoms**: A valley bottom is characterized by being lower than both its left and right neighbors. So, for each point `h[i]` (excluding the first and last points, as they only have one neighbor), we check if `h[i] < h[i-1]` AND `h[i] < h[i+1]`. If both conditions are true, `h[i]` is a valley bottom.

2.  **Guaranteed Two Valleys**: The problem statement guarantees that the terrain forms a "W" shape, which means there will always be exactly two valley bottoms. This simplifies the problem as we don't need to handle cases with fewer or more than two valleys.

3.  **Finding the Highest Bottom**: Once we identify the two valley bottoms, we simply compare their heights and output the larger one.