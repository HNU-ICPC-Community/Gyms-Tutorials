## Problem C: Geometry Class

This problem involves basic trigonometry and geometry. We are given the sines of the three angles of a triangle (sin(A), sin(B), sin(C)) and need to find the largest angle in degrees, rounded to the nearest integer.

### Solution
To solve the problem, we first use the inverse sine function (`arcsin`) to get possible values for each angle from their sine values. Since `sin(x) = sin(180 - x)`, each sine value could correspond to two possible angles: `x` or `180 - x`. For a triangle, the sum of the angles must be 180 degrees.

1. Compute the three angles using `arcsin` (in degrees).
2. Check if their sum is 180. If so, these are the actual angles.
3. If not, for each angle, try replacing it with `180 - angle` and check if the sum becomes 180. Only one angle will need this adjustment.
4. Once the correct angles are found, select the largest and round it to the nearest integer.

This approach ensures the correct identification of the largest angle, considering the ambiguity of the inverse sine function.
