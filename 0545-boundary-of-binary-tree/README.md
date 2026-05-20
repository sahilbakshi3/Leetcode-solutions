<h2><a href="https://leetcode.com/problems/boundary-of-binary-tree/">545. Boundary of Binary Tree</a></h2><h3>Medium</h3><hr><p>The <strong>boundary</strong> of a binary tree is the concatenation of:</p>

<ol>
	<li>The root node</li>
	<li>The left boundary</li>
	<li>The leaf nodes from left to right</li>
	<li>The reversed right boundary</li>
</ol>

<p>The <strong>left boundary</strong> is defined as:</p>

<ul>
	<li>The path from the root's left child to the left-most node.</li>
	<li>At each node, if a left child exists, go left; otherwise go right.</li>
	<li>The left-most leaf is not included.</li>
</ul>

<p>The <strong>right boundary</strong> is defined as:</p>

<ul>
	<li>The path from the root's right child to the right-most node.</li>
	<li>At each node, if a right child exists, go right; otherwise go left.</li>
	<li>The right-most leaf is not included.</li>
</ul>

<p>Return <em>the values of the boundary nodes in anti-clockwise order</em>.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<img alt="" src="https://assets.leetcode.com/uploads/2021/02/19/boundary1.jpg" style="width: 300px; height: 300px;" />

<pre>
<strong>Input:</strong> root = [1,null,2,3,4]
<strong>Output:</strong> [1,3,4,2]
</pre>

<p><strong class="example">Example 2:</strong></p>

<img alt="" src="https://assets.leetcode.com/uploads/2021/02/19/boundary2.jpg" style="width: 500px; height: 347px;" />

<pre>
<strong>Input:</strong> root = [1,2,3,4,5,6,null,null,null,7,8,9,10]
<strong>Output:</strong> [1,2,4,7,8,9,10,6,3]
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[1, 10^4]</code>.</li>
	<li><code>-1000 &lt;= Node.val &lt;= 1000</code></li>
</ul>
