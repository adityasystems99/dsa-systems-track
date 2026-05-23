# Notes

## Initial Idea
Use two loops and check every pair.

Complexity:
O(n²)

## Better Approach
Use unordered_map.

Store:
value -> index

For every element:
1. Find complement
2. Check if complement exists
3. If yes, return indices

## Important Observation

target = nums[i] + nums[j]

Therefore:

complement = target - nums[i]

## Mistakes I Made
- Forgot to check map before insertion
- Returned values instead of indices

## Complexity

Time: O(n)
Space: O(n)

## Pattern
Hashing / Lookup optimization