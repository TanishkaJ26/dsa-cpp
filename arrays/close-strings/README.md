# 1657. Determine if Two Strings Are Close

- **Platform:** LeetCode
- **Difficulty:** Medium
- **Topics:** Array
- **Problem Link:** [LeetCode 1657](https://leetcode.com/problems/determine-if-two-strings-are-close/description/)

## Problem Description
Given two strings word1 and word2, return true if one can be transformed into the other using any number of character swaps and frequency-preserving character transformations (swapping the identities of existing characters), otherwise return false.

## Approach
1. Check the length of both the strings and see whether both have same length.
2. Count the frequency of both the strings using two arrays freq1 and freq2.
3. Verify through iterating whether both the strings contains the same character.
4. Sort both frequency arrays and compare frequency distributions.

## Complexity
- Time Complexity: O(n) — sorting 26 elements is constant time.
- Space Complexity: O(1) — 26-size arrays.
