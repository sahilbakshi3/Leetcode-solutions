<h2><a href="https://leetcode.com/problems/insert-into-a-sorted-circular-linked-list/">708. Insert into a Sorted Circular Linked List</a></h2><h3>Medium</h3><hr><p>Given a node from a sorted circular linked list, write a function to insert a value <code>insertVal</code> into the list such that it remains sorted.</p>

<p>The given node can be a reference to <strong>any</strong> node in the list and not necessarily the smallest value.</p>

<p>If there are multiple suitable places for insertion, you may insert the value anywhere.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<img alt="" src="https://assets.leetcode.com/uploads/2021/03/14/example1.png" style="width: 500px; height: 118px;" />

<pre>
<strong>Input:</strong> head = [3,4,1], insertVal = 2
<strong>Output:</strong> [3,4,1,2]
<strong>Explanation:</strong>
After insertion, the circular list remains sorted.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> head = [], insertVal = 1
<strong>Output:</strong> [1]
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> head = [1], insertVal = 0
<strong>Output:</strong> [1,0]
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= Number of Nodes &lt;= 5 * 10^4</code></li>
	<li><code>-10^6 &lt;= Node.val, insertVal &lt;= 10^6</code></li>
</ul>
