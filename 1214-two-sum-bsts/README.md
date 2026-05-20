<h2><a href="https://leetcode.com/problems/two-sum-bsts/">1214. Two Sum BSTs</a></h2><h3>Medium</h3><hr><p>Given the roots of two binary search trees <code>root1</code> and <code>root2</code>, return <code>true</code> if and only if there is a node in the first tree and a node in the second tree whose values sum up to a given integer <code>target</code>.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<img alt="" src="https://assets.leetcode.com/uploads/2021/02/10/ex1.jpg" style="width: 500px; height: 211px;" />

<pre>
<strong>Input:</strong> root1 = [2,1,4], root2 = [1,0,3], target = 5
<strong>Output:</strong> true
<strong>Explanation:</strong> 2 + 3 = 5.
</pre>

<p><strong class="example">Example 2:</strong></p>

<img alt="" src="https://assets.leetcode.com/uploads/2021/02/10/ex2.jpg" style="width: 500px; height: 211px;" />

<pre>
<strong>Input:</strong> root1 = [0,-10,10], root2 = [5,1,7,0,2], target = 18
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in each tree is in the range <code>[1, 5000]</code>.</li>
	<li><code>-10^9 &lt;= Node.val, target &lt;= 10^9</code></li>
</ul>
