<h2><a href="https://leetcode.com/problems/sort-transformed-array">360. Sort Transformed Array</a></h2><h3>Medium</h3><hr>

<p>Given a sorted integer array <code>nums</code> and three integers <code>a</code>, <code>b</code>, and <code>c</code>, apply a quadratic function of the form <code>f(x) = ax² + bx + c</code> to each element <code>x</code> in the array.</p>

<p>Return the transformed array in sorted order.</p>

<p>The input array is already sorted in ascending order. Your task is to produce the sorted transformed values efficiently.</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [-4,-2,2,4], a = 1, b = 3, c = 5
<strong>Output:</strong> [3,9,15,33]

<strong>Explanation:</strong>
f(-4) = 1(-4)² + 3(-4) + 5 = 9
f(-2) = 1(-2)² + 3(-2) + 5 = 3
f(2) = 1(2)² + 3(2) + 5 = 15
f(4) = 1(4)² + 3(4) + 5 = 33

Sorted transformed array = [3,9,15,33]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [-4,-2,2,4], a = -1, b = 3, c = 5
<strong>Output:</strong> [-23,-5,1,7]
</pre>

<p><strong>Constraints:</strong></p>

<ul>
    <li><code>1 &lt;= nums.length &lt;= 200</code></li>
    <li><code>-100 &lt;= nums[i], a, b, c &lt;= 100</code></li>
    <li><code>nums</code> is sorted in ascending order.</li>
</ul>

<p><strong>Follow-up:</strong> Can you solve it in <code>O(n)</code> time?</p>
