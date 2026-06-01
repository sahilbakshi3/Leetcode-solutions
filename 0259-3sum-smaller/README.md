<h2><a href="https://leetcode.com/problems/3sum-smaller">259. 3Sum Smaller</a></h2><h3>Medium</h3><hr>

<p>Given an integer array <code>nums</code> of length <code>n</code> and an integer <code>target</code>, return the number of index triplets <code>i</code>, <code>j</code>, <code>k</code> such that <code>0 &lt;= i &lt; j &lt; k &lt; n</code> and <code>nums[i] + nums[j] + nums[k] &lt; target</code>.</p>

<p>You need to count all valid triplets whose sum is strictly less than the given target.</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [-2,0,1,3], target = 2
<strong>Output:</strong> 2
<strong>Explanation:</strong>
The valid triplets are:
[-2,0,1] = -1
[-2,0,3] = 1

Both sums are less than 2.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [], target = 0
<strong>Output:</strong> 0
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [0], target = 0
<strong>Output:</strong> 0
</pre>

<p><strong>Constraints:</strong></p>

<ul>
    <li><code>0 &lt;= nums.length &lt;= 3500</code></li>
    <li><code>-100 &lt;= nums[i] &lt;= 100</code></li>
    <li><code>-100 &lt;= target &lt;= 100</code></li>
</ul>

<p><strong>Follow-up:</strong> Could you solve it in <code>O(n²)</code> time complexity?</p>
