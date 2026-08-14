# 234. Palindrome Linked List

- **Platform:** LeetCode
- **Difficulty:** Easy
- **Topics:** Linked List
- **Problem Link:** https://leetcode.com/problems/palindrome-linked-list/description/

## Problem Description
Given the head of a singly linked list, return `true` if it is a palindrome or `false` otherwise.

A linked list is a palindrome if it reads the same forward and backward.

## Approach
1. Find the middle of the linked list using the slow and fast pointer technique.
2. Reverse the second half of the linked list.
3. Use two pointers to compare the first half and the reversed second half.
4. If any pair of values is different, return `false`.
5. If all corresponding values are equal, return `true`.
6. Optionally, reverse the second half again to restore the original linked list.

## Complexity
- **Time Complexity:** O(n) — Finding the middle, reversing the second half, and comparing the two halves each take O(n).
- **Space Complexity:** O(1) — Only a constant amount of extra space is used.