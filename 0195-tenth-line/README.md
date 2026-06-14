# 195. Tenth Line

## Problem

Given a text file `file.txt`, print just the 10th line of the file.

### Example

Assume that `file.txt` has the following content:

Line 1  
Line 2  
Line 3  
Line 4  
Line 5  
Line 6  
Line 7  
Line 8  
Line 9  
Line 10

Output:

Line 10

### Notes

- If the file contains fewer than 10 lines, nothing should be printed.
- Try to solve the problem using standard Unix command-line tools.

## Solution

Using `sed`:

```bash
sed -n '10p' file.txt
