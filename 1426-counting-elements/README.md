<h2><a href="https://leetcode.com/problems/counting-elements/">1426. Counting Elements</a></h2><h3>Easy</h3><hr><p>Given an integer array <code>arr</code>, count how many elements <code>x</code> there are such that <code>x + 1</code> is also in <code>arr</code>.</p>

<p>If there are duplicates in <code>arr</code>, count them separately.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,2,3]
<strong>Output:</strong> 2
<strong>Explanation:</strong>
1 is counted because 2 exists.
2 is counted because 3 exists.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,1,3,3,5,5,7,7]
<strong>Output:</strong> 0
<strong>Explanation:</strong>
No element x has x + 1 present.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,1,2]
<strong>Output:</strong> 2
<strong>Explanation:</strong>
Both 1s are counted because 2 exists.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= arr.length &lt;= 1000</code></li>
	<li><code>0 &lt;= arr[i] &lt;= 1000</code></li>
</ul>
