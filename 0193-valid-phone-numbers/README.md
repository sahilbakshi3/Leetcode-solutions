# 193. Valid Phone Numbers

## Problem Statement

Given a text file `file.txt` that contains a list of phone numbers (one per line), print all valid phone numbers.

You may assume a valid phone number must appear in one of the following formats:

```text
xxx-xxx-xxxx
(xxx) xxx-xxxx
```

where `x` is a digit.

### Example

#### Input (`file.txt`)

```text
987-123-4567
123 456 7890
(123) 456-7890
```

#### Output

```text
987-123-4567
(123) 456-7890
```

## Approach

Use `grep` with an extended regular expression to match only the two valid phone number formats:

1. `xxx-xxx-xxxx`
2. `(xxx) xxx-xxxx`

Lines that do not match either format are ignored.

## Solution

```bash
grep -E '^(\([0-9]{3}\) |[0-9]{3}-)[0-9]{3}-[0-9]{4}$' file.txt
```

## Regex Breakdown

```regex
^(\([0-9]{3}\) |[0-9]{3}-)[0-9]{3}-[0-9]{4}$
```

| Pattern | Meaning |
|----------|---------|
| `^` | Start of line |
| `\([0-9]{3}\) ` | Matches `(123) ` |
| `|` | OR |
| `[0-9]{3}-` | Matches `123-` |
| `[0-9]{3}-` | Matches next 3 digits and hyphen |
| `[0-9]{4}` | Matches last 4 digits |
| `$` | End of line |

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

where `n` is the number of lines in the file.

## Tags

`Shell` `Regex` `grep`
