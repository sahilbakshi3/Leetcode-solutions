# 192. Word Frequency

## Problem Statement

Write a bash script to calculate the frequency of each word in a text file `words.txt`.

Assumptions:

- `words.txt` contains only lowercase letters and spaces.
- Words consist only of lowercase letters.
- Words are separated by one or more whitespace characters.
- Output should be sorted by descending frequency.

### Example

#### Input

```text
the day is sunny the the
the sunny is is
```

#### Output

```text
the 4
is 3
sunny 2
day 1
```

## Approach

The solution uses a Unix pipeline:

1. Convert spaces into newlines so that each word appears on its own line.
2. Sort the words alphabetically.
3. Count occurrences using `uniq -c`.
4. Sort by frequency in descending order.
5. Reorder the output columns to match the required format.

## Solution

```bash
cat words.txt | tr -s ' ' '\n' | sort | uniq -c | sort -rn | awk '{print $2, $1}'
```

## Complexity Analysis

- **Time Complexity:** O(n log n)
  - Dominated by the sorting operations.
- **Space Complexity:** O(n)

where `n` is the total number of words.

## Tags

`Shell` `Unix Pipes` `awk` `sort` `uniq`
