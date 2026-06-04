<h2><a href="https://leetcode.com/problems/closest-binary-search-tree-value">270. Closest Binary Search Tree Value</a></h2><h3>Easy</h3><hr>

<p>Given the <code>root</code> of a binary search tree (BST) and a <code>target</code> value, return the value in the BST that is closest to the target.</p>

<p>If there are multiple answers, print the smallest value.</p>

<p>A node value is considered closer if its absolute difference from the target is smaller.</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
root = [4,2,5,1,3]
target = 3.714286

<strong>Output:</strong>
4

<strong>Explanation:</strong>

|4 - 3.714286| = 0.285714
|3 - 3.714286| = 0.714286

4 is closer to the target.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
root = [1]
target = 4.428571

<strong>Output:</strong>
1
</pre>

<p><strong>Constraints:</strong></p>

<ul>
    <li>The number of nodes in the tree is in the range <code>[1, 10<sup>4</sup>]</code>.</li>
    <li><code>0 <= Node.val <= 10<sup>9</sup></code></li>
    <li><code>-10<sup>9</sup> <= target <= 10<sup>9</sup></code></li>
    <li>The tree is a valid binary search tree.</li>
</ul>

<p><strong>Follow-up:</strong> Could you solve it in <code>O(h)</code> time, where <code>h</code> is the height of the BST?</p>
