<h2><a href="https://leetcode.com/problems/leftmost-column-with-at-least-a-one/">1428. Leftmost Column with at Least a One</a></h2><h3>Medium</h3><hr><p>A row-sorted binary matrix means that all elements are <code>0</code> or <code>1</code> and each row of the matrix is sorted in non-decreasing order.</p>

<p>You are given a row-sorted binary matrix <code>binaryMatrix</code> where:</p>

<ul>
    <li><code>0</code> represents an empty cell.</li>
    <li><code>1</code> represents a filled cell.</li>
</ul>

<p>You cannot access the matrix directly. Instead, the matrix is accessed through a <code>BinaryMatrix</code> interface:</p>

<ul>
    <li><code>BinaryMatrix.get(row, col)</code> returns the value of the matrix at <code>(row, col)</code>.</li>
    <li><code>BinaryMatrix.dimensions()</code> returns the dimensions of the matrix as <code>[rows, cols]</code>.</li>
</ul>

<p>Return <em>the leftmost column index with at least a</em> <code>1</code> <em>in it</em>. If such an index does not exist, return <code>-1</code>.</p>

<p>You may assume all calls to <code>BinaryMatrix.get</code> are valid.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> matrix = [[0,0],[1,1]]
<strong>Output:</strong> 0
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> matrix = [[0,0],[0,1]]
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> matrix = [[0,0],[0,0]]
<strong>Output:</strong> -1
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
    <li><code>rows == binaryMatrix.dimensions()[0]</code></li>
    <li><code>cols == binaryMatrix.dimensions()[1]</code></li>
    <li><code>1 &lt;= rows, cols &lt;= 100</code></li>
    <li><code>0 &lt;= matrix[i][j] &lt;= 1</code></li>
    <li><code>matrix[i]</code> is sorted in non-decreasing order.</li>
</ul>

<p>&nbsp;</p>

<strong>Follow-up:</strong> Could you solve this problem with less than <code>1000</code> calls to <code>BinaryMatrix.get</code>?
