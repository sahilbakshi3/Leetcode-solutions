<h2><a href="https://leetcode.com/problems/find-leaves-of-binary-tree/">366. Find Leaves of Binary Tree</a></h2><h3>Medium</h3><hr><p>Given the <code>root</code> of a binary tree, collect a tree's nodes as if you were doing this:</p>

<ol>
	<li>Collect all the leaf nodes.</li>
	<li>Remove all the leaf nodes.</li>
	<li>Repeat until the tree is empty.</li>
</ol>

<p>Return <em>a list of lists where each inner list contains the values of the removed nodes</em>.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<img alt="" src="https://assets.leetcode.com/uploads/2021/03/16/remleaves-tree.jpg" style="width: 500px; height: 268px;" />

<pre>
<strong>Input:</strong> root = [1,2,3,4,5]
<strong>Output:</strong> [[4,5,3],[2],[1]]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> root = [1]
<strong>Output:</strong> [[1]]
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[1, 100]</code>.</li>
	<li><code>-100 &lt;= Node.val &lt;= 100</code></li>
</ul>
