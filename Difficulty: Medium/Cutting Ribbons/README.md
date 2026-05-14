# Cutting Ribbons

## Problem
You are given an integer array `ribbons` where ribbons[i] represents the length of the ith ribbon, and an integer `k`.

You may cut ribbons into smaller integer-length pieces.

Return the maximum possible integer length so that you can obtain at least `k` ribbons of the same length.

---

## Approach

This problem uses **Binary Search on Answer**.

### Key Observation
If a ribbon length `x` is possible, then all smaller lengths are also possible.

So we can binary search on the answer.

For every candidate length:
- Count how many pieces can be formed
- If count >= k:
  - length is valid
  - try larger length
- Else:
  - reduce search space

---

## Time Complexity

O(n log M)

- `n` = number of ribbons
- `M` = maximum ribbon length

---

## Space Complexity

O(1)

---
