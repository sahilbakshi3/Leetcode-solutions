<h2><a href="https://leetcode.com/problems/array-transformation/">1243. Array Transformation</a></h2><h3>Easy</h3><hr><p>Given an initial array <code>arr</code>, transform it daily according to the following rules:</p>

<ul>
	<li>If an element is smaller than both neighbors, increment it by <code>1</code>.</li>
	<li>If an element is larger than both neighbors, decrement it by <code>1</code>.</li>
	<li>The first and last elements never change.</li>
</ul>

<p>Return <em>the final array after it stabilizes</em>.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> arr = [6,2,3,4]
<strong>Output:</strong> [6,3,3,4]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,6,3,4,3,5]
<strong>Output:</strong> [1,4,4,4,4,5]
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>3 &lt;= arr.length &lt;= 100</code></li>
	<li><code>1 &lt;= arr[i] &lt;= 100</code></li>
</ul>
