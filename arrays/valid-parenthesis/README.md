# 20. Valid Parentheses

- **Platform:** LeetCode
- **Difficulty:** Easy
- **Topics:** Arrays(Stack)
- **Problem Link:** [LeetCode 20](https://leetcode.com/problems/valid-parentheses/description/)

## Problem Description

Given a string s containing only (, ), {, }, [ and ], return true if every opening bracket is closed by the same type of bracket in the correct order; otherwise return false.

## Approach

1. Create character array and initialize top=-1.
2. Traverse the string, push every opening bracket into an array-based stack, and for each closing bracket verify it matches the top opening bracket; if not return false, otherwise pop it, and finally return true if the stack is empty.
3. After tranversal if top==-1 then all the brackets are matched.

## Complexity

- Time Complexity: O(n)
- Space Complexity: O(n) — array used as stack.