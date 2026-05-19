<h2><a href="https://leetcode.com/problems/maximum-average-subarray-ii/">644. Maximum Average Subarray II</a></h2><h3>Hard</h3><hr><p>You are given an integer array <code>nums</code> consisting of <code>n</code> elements, and an integer <code>k</code>.</p>

<p>Find a contiguous subarray whose <strong>length is greater than or equal to</strong> <code>k</code> that has the maximum average value and return this value.</p>

<p>Any answer with a calculation error less than <code>10<sup>-5</sup></code> will be accepted.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,12,-5,-6,50,3], k = 4
<strong>Output:</strong> 12.75000
<strong>Explanation:</strong> The subarray [12, -5, -6, 50] has the maximum average value:
(12 - 5 - 6 + 50) / 4 = 12.75
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [5], k = 1
<strong>Output:</strong> 5.00000
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
    <li><code>n == nums.length</code></li>
    <li><code>1 &lt;= k &lt;= n &lt;= 10<sup>4</sup></code></li>
    <li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
</ul>

<p>&nbsp;</p>

<strong>Follow-up:</strong> Can you solve this problem in <code>O(n)</code> time complexity for each binary search iteration?
