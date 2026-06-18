# 194. Transpose File

## Problem Statement

Given a text file `file.txt`, transpose its content.

You may assume that:

- Each row has the same number of columns.
- Each field is separated by a single space `' '`.

### Example

#### Input (`file.txt`)

```text
name age
alice 21
ryan 30
```

#### Output

```text
name alice ryan
age 21 30
```

## Approach

The idea is to read the file row by row and build each transposed row incrementally.

Using `awk`:

- Iterate through every field in the current row.
- For the first row, initialize the transposed rows.
- For subsequent rows, append the current field to its corresponding transposed row.
- Finally, print all constructed rows.

## Solution

```bash
awk '
{
    for (i = 1; i <= NF; i++) {
        if (NR == 1)
            res[i] = $i;
        else
            res[i] = res[i] " " $i;
    }
}
END {
    for (i = 1; i <= NF; i++)
        print res[i];
}' file.txt
```

## Explanation

For the input:

```text
name age
alice 21
ryan 30
```

The intermediate arrays become:

```text
res[1] = "name alice ryan"
res[2] = "age 21 30"
```

Printing them produces:

```text
name alice ryan
age 21 30
```

## Complexity Analysis

- **Time Complexity:** O(m × n)
- **Space Complexity:** O(m × n)

where:

- `m` = number of rows
- `n` = number of columns

## Tags

`Shell` `awk` `String Manipulation` `Matrix Transpose`
