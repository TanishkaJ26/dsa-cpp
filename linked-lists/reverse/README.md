# 206. Reverse Linked List

- **Platform:** LeetCode
- **Difficulty:** Easy
- **Topics:** Linked List, Recursion
- **Problem Link:** https://leetcode.com/problems/reverse-linked-list/description/

## Problem Description
Given the head of a singly linked list, reverse the list and return the reversed list.

For example, a linked list `1 -> 2 -> 3 -> 4 -> 5` becomes `5 -> 4 -> 3 -> 2 -> 1`.

## Approach
1. Initialize two pointers: `prev = nullptr` and `curr = head`.
2. Traverse the linked list using the `curr` pointer.
3. Store the next node of `curr` in a temporary pointer.
4. Reverse the link by making `curr->next` point to `prev`.
5. Move `prev` to `curr` and `curr` to the stored next node.
6. Continue until `curr` becomes `nullptr`.
7. Return `prev` as the new head of the reversed linked list.

## Complexity
- **Time Complexity:** O(n) — Each node is visited exactly once.
- **Space Complexity:** O(1) — Only a constant amount of extra space is used.