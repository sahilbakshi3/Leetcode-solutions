<h2><a href="https://leetcode.com/problems/print-immutable-linked-list-in-reverse/">1265. Print Immutable Linked List in Reverse</a></h2><h3>Medium</h3><hr><p>You are given an immutable linked list, print out all values of each node in reverse with the help of the following interface:</p>

<pre>
interface ImmutableListNode {
    public void printValue(); // prints the value of this node.
    public ImmutableListNode getNext(); // returns the next node.
};
</pre>

<p>You are not allowed to modify the linked list. In other words, you must operate the linked list using only the APIs provided by the immutable list node.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> head = [1,2,3,4]
<strong>Output:</strong> [4,3,2,1]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> head = [0,-4,-1,3,-5]
<strong>Output:</strong> [-5,3,-1,-4,0]
</pre>

<p><strong>Constraints:</strong></p>

<ul>
	<li>The length of the linked list is between <code>[1, 1000]</code>.</li>
	<li>The value of each node in the linked list is between <code>[-1000, 1000]</code>.</li>
</ul>
