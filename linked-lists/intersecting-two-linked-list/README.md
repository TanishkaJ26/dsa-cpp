# 160. Intersection of Two Linked Lists

- **Platform:** LeetCode
- **Difficulty:** Easy
- **Topics:** Linked List, Two Pointers
- **Problem Link:** https://leetcode.com/problems/intersection-of-two-linked-lists/description/

## Problem Description
Given the heads of two singly linked lists, return the node at which the two lists intersect.

If the two linked lists do not intersect, return `nullptr`.

The linked lists must retain their original structure after the function returns.

## Approach
1. Initialize two pointers, `ptrA` at the head of the first list and `ptrB` at the head of the second list.
2. Traverse both linked lists using the two pointers.
3. When `ptrA` reaches the end of the first list, move it to the head of the second list.
4. When `ptrB` reaches the end of the second list, move it to the head of the first list.
5. Continue moving both pointers one node at a time.
6. If the lists intersect, both pointers will eventually meet at the intersection node.
7. If the lists do not intersect, both pointers will eventually become `nullptr`.
8. Return the meeting node.

## Complexity
- **Time Complexity:** O(n + m) — Each pointer traverses both linked lists at most once.
- **Space Complexity:** O(1) — Only two pointers are used.