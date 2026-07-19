# 167. Two Sum II - Input Array Is Sorted

- **Platform:** LeetCode
- **Difficulty:** Medium
- **Topics:** Array, Two Pointers
- **Problem Link:** [LeetCode 167](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)

## Problem Description
Given a 1-indexed array of integers `numbers` sorted in non-decreasing order, find two numbers such that they add up to a given `target`. Return their 1-based indices as an array `[index1, index2]`. Exactly one valid solution exists, and the same element cannot be used twice.

## Approach
1. Initialize two pointers:
   - `start` at the beginning of the array.
   - `end` at the last element.
2. Calculate the sum of the elements at both pointers.
3. If the sum equals the target, return the 1-based indices.
4. If the sum is less than the target, move the `start` pointer to the right.
5. If the sum is greater than the target, move the `end` pointer to the left.
6. Continue until the required pair is found.

## Complexity
- **Time Complexity:** O(n) — each pointer traverses the array at most once.
- **Space Complexity:** O(1) — only a few extra variables are used.