# 11. Container With Most Water

- **Platform:** LeetCode
- **Difficulty:** Medium
- **Topics:** Array, Two Pointers, Greedy
- **Problem Link:** [LeetCode 11](https://leetcode.com/problems/container-with-most-water/description/)

## Problem Description
Given an integer array `height`, where each element represents the height of a vertical line, find two lines that together with the x-axis form a container capable of holding the maximum amount of water. Return the maximum amount of water the container can store.

## Approach
1. Initialize two pointers: one at the beginning (`left`) and one at the end (`right`) of the array.
2. Calculate the area formed by the two lines using:
   - `width = right - left`
   - `height = min(height[left], height[right])`
   - `area = width × height`
3. Update the maximum area found so far.
4. Move the pointer pointing to the shorter line inward, since the shorter line limits the container's height.
5. Repeat until the two pointers meet.

## Complexity
- **Time Complexity:** O(n) — each pointer moves at most `n` times.
- **Space Complexity:** O(1) — only a few extra variables are used.