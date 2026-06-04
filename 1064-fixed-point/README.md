<h2><a href="https://leetcode.com/problems/fixed-point">1064. Fixed Point</a></h2><h3>Easy</h3><hr>

<p>Given an array <code>arr</code> of distinct integers sorted in ascending order, return the smallest index <code>i</code> that satisfies <code>arr[i] == i</code>.</p>

<p>If no such index exists, return <code>-1</code>.</p>

<p>A fixed point is an index whose value is equal to the index itself.</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> arr = [-10,-5,0,3,7]
<strong>Output:</strong> 3

<strong>Explanation:</strong>
arr[3] = 3
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> arr = [0,2,5,8,17]
<strong>Output:</strong> 0

<strong>Explanation:</strong>
arr[0] = 0
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> arr = [-10,-5,3,4,7,9]
<strong>Output:</strong> -1

<strong>Explanation:</strong>
There is no index i such that arr[i] = i.
</pre>

<p><strong>Constraints:</strong></p>

<ul>
    <li><code>1 <= arr.length < 10<sup>4</sup></code></li>
    <li><code>-10<sup>9</sup> <= arr[i] <= 10<sup>9</sup></code></li>
    <li><code>arr</code> is sorted in strictly increasing order.</li>
</ul>

<p><strong>Follow-up:</strong> Can you solve it in <code>O(log n)</code> time?</p>
