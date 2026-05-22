<h2><a href="https://leetcode.com/problems/maximum-distance-in-arrays/">624. Maximum Distance in Arrays</a></h2><h3>Medium</h3><hr>

<p>You are given <code>m</code> arrays where each array is sorted in ascending order.</p>

<p>Your task is to pick two integers from two different arrays (one integer from each array) and calculate the distance between them.</p>

<p>The distance between two integers <code>a</code> and <code>b</code> is defined as:</p>

<pre>
|a - b|
</pre>

<p>Return the maximum distance possible.</p>

<p><strong>Important:</strong> The two integers must come from different arrays.</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
Input: arrays = [[1,2,3],[4,5],[1,2,3]]
Output: 4

Explanation:
Pick 1 from first array
Pick 5 from second array

|1 - 5| = 4
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
Input: arrays = [[1],[1]]
Output: 0
</pre>

<p><strong>Constraints:</strong></p>

<ul>
    <li><code>m == arrays.length</code></li>
    <li><code>2 <= m <= 10^5</code></li>
    <li><code>1 <= arrays[i].length <= 500</code></li>
    <li><code>-10^4 <= arrays[i][j] <= 10^4</code></li>
    <li>Each array is sorted in ascending order.</li>
</ul>

---

# Brute Force Approach

Try every possible pair of arrays.

For every pair:
- pick minimum from one array
- pick maximum from another array
- compute distance

Since arrays are sorted:
- first element = minimum
- last element = maximum

## Algorithm
For every pair `(i, j)` where `i != j`:

```cpp
abs(arrays[i][0] - arrays[j].back())
abs(arrays[j][0] - arrays[i].back())
