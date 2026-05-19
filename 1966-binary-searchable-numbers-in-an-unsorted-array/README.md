<h2><a href="https://leetcode.com/problems/binary-searchable-numbers-in-an-unsorted-array/">1966. Binary Searchable Numbers in an Unsorted Array</a></h2><h3>Medium</h3><hr><p>You are given a <strong>0-indexed</strong> integer array <code>nums</code>.</p>

<p>An element <code>nums[i]</code> is considered <strong>binary searchable</strong> if it can always be found by a binary search algorithm regardless of the pivot selections.</p>

<p>The binary search algorithm works as follows:</p>

<ul>
    <li>If the current sequence is empty, return <code>false</code>.</li>
    <li>Otherwise, randomly choose an element from the sequence as the pivot.</li>
    <li>If the pivot equals the target, return <code>true</code>.</li>
    <li>If the pivot is less than the target, recursively search the right subarray.</li>
    <li>If the pivot is greater than the target, recursively search the left subarray.</li>
</ul>

<p>Return <em>the number of binary searchable elements in</em> <code>nums</code>.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,3,2]
<strong>Output:</strong> 1
<strong>Explanation:</strong>
Only 1 is binary searchable because:
- 3 can be eliminated if 2 is chosen as pivot.
- 2 can be eliminated if 3 is chosen as pivot.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [2,1,3,5,4,6]
<strong>Output:</strong> 2
<strong>Explanation:</strong>
Only 3 and 6 are guaranteed to be found regardless of pivot choices.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
    <li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
    <li><code>1 &lt;= nums[i] &lt;= 10<sup>5</sup></code></li>
    <li>All the integers in <code>nums</code> are distinct.</li>
</ul>

<p>&nbsp;</p>

<strong>Follow-up:</strong> Can you solve it in <code>O(n)</code> time complexity?
