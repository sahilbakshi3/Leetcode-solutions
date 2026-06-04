<h2><a href="https://leetcode.com/problems/sort-array-by-absolute-value">3667. Sort Array By Absolute Value</a></h2><h3>Easy</h3><hr>

<p>You are given an integer array <code>nums</code>.</p>

<p>Rearrange the elements of <code>nums</code> in non-decreasing order of their absolute values.</p>

<p>Return any rearranged array that satisfies this condition.</p>

<p>The absolute value of an integer <code>x</code> is defined as:</p>

<ul>
    <li><code>x</code> if <code>x >= 0</code></li>
    <li><code>-x</code> if <code>x < 0</code></li>
</ul>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [3,-1,-4,1,5]
<strong>Output:</strong> [-1,1,3,-4,5]

<strong>Explanation:</strong>

Absolute values:
[3,1,4,1,5]

Sorted absolute values:
[1,1,3,4,5]

One valid arrangement is:
[-1,1,3,-4,5]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [-100,100]
<strong>Output:</strong> [-100,100]

<strong>Explanation:</strong>

Both elements have absolute value 100.
Any order is acceptable.
</pre>

<p><strong>Constraints:</strong></p>

<ul>
    <li><code>1 <= nums.length <= 100</code></li>
    <li><code>-100 <= nums[i] <= 100</code></li>
</ul>
