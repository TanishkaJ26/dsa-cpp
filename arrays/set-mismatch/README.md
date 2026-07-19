# 645. Set Mismatch

- **Platform:** LeetCode
- **Difficulty:** Easy
- **Topics:** Array, Hash Table
- **Problem Link:** [LeetCode 645](https://leetcode.com/problems/set-mismatch/)

## Problem Description
You have a set of integers `s` that originally contained all the numbers from `1` to `n`. Due to an error, one number was duplicated, causing another number to be missing.

Given an integer array `nums` representing the corrupted set, return an array containing:
- The duplicated number.
- The missing number.

Return the answer in the form `[duplicate, missing]`.

## Approach
1. Traverse the array and use each value to mark its corresponding index as visited by making it negative.
2. For every number:
   - Compute its corresponding index using `abs(num) - 1`.
   - If the value at that index is already negative, the current number is the duplicate.
   - Otherwise, mark that index as visited by making it negative.
3. Traverse the array again.
4. The index whose value is still positive corresponds to the missing number.
5. Return the duplicate and missing numbers.

## Complexity
- **Time Complexity:** O(n) — the array is traversed twice.
- **Space Complexity:** O(1) — no extra data structures are used (excluding the output array).