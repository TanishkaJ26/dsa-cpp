# 15. 3Sum

- **Platform:** LeetCode
- **Difficulty:** Medium
- **Topics:** Array, Two Pointers, Sorting
- **Problem Link:** https://leetcode.com/problems/3sum/description/

## Problem Description
Given an integer array `nums`, return all the unique triplets `[nums[i], nums[j], nums[k]]` such that:

- `i != j`
- `i != k`
- `j != k`
- `nums[i] + nums[j] + nums[k] == 0`

The solution set must not contain duplicate triplets.

## Approach
1. Sort the input array.
2. Iterate through the array and fix one element at a time.
3. Skip duplicate values for the fixed element to avoid repeated triplets.
4. Use two pointers (`left` and `right`) to find two numbers whose sum equals the negative of the fixed element.
5. If the current sum is smaller than the target, move the left pointer forward.
6. If the current sum is greater than the target, move the right pointer backward.
7. When a valid triplet is found, store it and skip duplicate values for both pointers.
8. Continue until all unique triplets have been found.

## Complexity
- **Time Complexity:** O(n²) — Sorting takes O(n log n), and the two-pointer search for each element takes O(n).
- **Space Complexity:** O(1) — Excluding the output list, only constant extra space is used.