<h2><a href="https://leetcode.com/problems/remove-duplicates-from-an-unsorted-linked-list/">1836. Remove Duplicates From an Unsorted Linked List</a></h2><h3>Medium</h3><hr><p>Given the head of a linked list, find all the values that appear more than once in the list and delete the nodes that have any of those values.</p>

<p>Return the linked list after the deletions.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<img alt="" src="https://assets.leetcode.com/uploads/2021/01/04/linkedlist1.jpg" style="width: 450px; height: 67px;" />

<pre>
<strong>Input:</strong> head = [1,2,3,2]
<strong>Output:</strong> [1,3]
<strong>Explanation:</strong> 2 appears twice, so all nodes with value 2 are removed.
</pre>

<p><strong class="example">Example 2:</strong></p>

<img alt="" src="https://assets.leetcode.com/uploads/2021/01/04/linkedlist2.jpg" style="width: 450px; height: 74px;" />

<pre>
<strong>Input:</strong> head = [2,1,1,2]
<strong>Output:</strong> []
<strong>Explanation:</strong> Both values 1 and 2 appear more than once, so all nodes are removed.
</pre>

<p><strong class="example">Example 3:</strong></p>

<img alt="" src="https://assets.leetcode.com/uploads/2021/01/04/linkedlist3.jpg" style="width: 500px; height: 83px;" />

<pre>
<strong>Input:</strong> head = [3,2,2,1,3,2,4]
<strong>Output:</strong> [1,4]
<strong>Explanation:</strong> 2 and 3 appear multiple times, so all their nodes are removed.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the list is in the range <code>[1, 10^5]</code>.</li>
	<li><code>1 &lt;= Node.val &lt;= 10^5</code></li>
</ul>
