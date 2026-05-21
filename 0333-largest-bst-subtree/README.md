<h2><a href="https://leetcode.com/problems/largest-bst-subtree/">333. Largest BST Subtree</a></h2><h3>Medium</h3><hr><p>Given the root of a binary tree, return <em>the size of the largest subtree that is also a Binary Search Tree (BST)</em>.</p>

<p>A <strong>Binary Search Tree (BST)</strong> is a tree in which:</p>

<ul>
	<li>The left subtree contains only nodes with values less than the node's value.</li>
	<li>The right subtree contains only nodes with values greater than the node's value.</li>
	<li>Both left and right subtrees must also be BSTs.</li>
</ul>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<img alt="" src="https://assets.leetcode.com/uploads/2021/03/12/largest1-tree.jpg" style="width: 300px; height: 243px;" />

<pre>
<strong>Input:</strong> root = [10,5,15,1,8,null,7]
<strong>Output:</strong> 3
<strong>Explanation:</strong>
The largest BST subtree is:
    5
   / \
  1   8
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> root = [4,2,7,2,3,5,null,2,null,null,null,null,null,1]
<strong>Output:</strong> 2
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[0, 10^4]</code>.</li>
	<li><code>-10^4 &lt;= Node.val &lt;= 10^4</code></li>
</ul>
