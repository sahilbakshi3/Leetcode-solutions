<h2><a href="https://leetcode.com/problems/divide-chocolate/">1231. Divide Chocolate</a></h2><h3>Hard</h3><hr><p>You have one chocolate bar that consists of some chunks. Each chunk has its own sweetness given by the array <code>sweetness</code>.</p>

<p>You want to share the chocolate with your <code>k</code> friends, so you need to cut the chocolate into <code>k + 1</code> pieces using <code>k</code> cuts. Each piece consists of some consecutive chunks.</p>

<p>Being generous, you will eat the piece with the <strong>minimum total sweetness</strong> and give the other pieces to your friends.</p>

<p>Find the maximum possible sweetness of the piece you can get.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> sweetness = [1,2,3,4,5,6,7,8,9], k = 5
<strong>Output:</strong> 6
<strong>Explanation:</strong> You can divide the chocolate into [1,2,3], [4,5], [6], [7], [8], [9].
The sweetness of the minimum piece is 6.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> sweetness = [5,6,7,8,9,1,2,3,4], k = 8
<strong>Output:</strong> 1
<strong>Explanation:</strong> There is only one way to cut the chocolate into 9 pieces.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> sweetness = [1,2,2,1,2,2,1,2,2], k = 2
<strong>Output:</strong> 5
<strong>Explanation:</strong> You can divide the chocolate into [1,2,2], [1,2,2], [1,2,2].
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
    <li><code>0 &lt;= k &lt; sweetness.length</code></li>
    <li><code>1 &lt;= sweetness.length &lt;= 10<sup>4</sup></code></li>
    <li><code>1 &lt;= sweetness[i] &lt;= 10<sup>5</sup></code></li>
</ul>

<p>&nbsp;</p>

<strong>Follow-up:</strong> Can you solve this problem using <code>Binary Search</code> on the answer?
