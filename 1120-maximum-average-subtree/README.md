<h2><a href="https://leetcode.com/problems/maximum-average-subtree/">1120. Maximum Average Subtree</a></h2><h3>Medium</h3><hr><p>Given the <code>root</code> of a binary tree, return <em>the maximum average value of any subtree of that tree</em>. Answers within <code>10<sup>-5</sup></code> of the actual answer will be accepted.</p>

<p>The <strong>average value</strong> of a subtree is the sum of its values divided by the number of nodes.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<img alt="" src="https://assets.leetcode.com/uploads/2021/03/09/rhe1-tree.jpg" style="width: 400px; height: 145px;" />

<pre>
<strong>Input:</strong> root = [5,6,1]
<strong>Output:</strong> 6.00000
<strong>Explanation:</strong>
For the node with value 5, the average is (5 + 6 + 1) / 3 = 4.
For the node with value 6, the average is 6 / 1 = 6.
For the node with value 1, the average is 1 / 1 = 1.
So the maximum average is 6.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> root = [0,null,1]
<strong>Output:</strong> 1.00000
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[1, 10^4]</code>.</li>
	<li><code>0 &lt;= Node.val &lt;= 10^5</code></li>
</ul>
