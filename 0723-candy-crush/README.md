<h2><a href="https://leetcode.com/problems/candy-crush">723. Candy Crush</a></h2><h3>Medium</h3><hr>

<p>This question is about implementing a simplified version of the Candy Crush game.</p>

<p>You are given an <code>m x n</code> integer matrix <code>board</code> where <code>board[i][j]</code> represents the type of candy at position <code>(i, j)</code>.</p>

<p>A candy can be crushed if there are three or more candies of the same type adjacent horizontally or vertically.</p>

<p>The crushing process works as follows:</p>

<ol>
    <li>Identify all candies that should be crushed.</li>
    <li>Crush them simultaneously.</li>
    <li>After crushing, candies above fall down to fill the empty spaces.</li>
    <li>Repeat the process until the board becomes stable.</li>
</ol>

<p>Return the board after it becomes stable.</p>

<p><strong>Note:</strong> Multiple groups can be crushed simultaneously, and newly formed groups after gravity should also be crushed.</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
board =
[
 [110,5,112,113,114],
 [210,211,5,213,214],
 [310,311,3,313,314],
 [410,411,412,5,414],
 [5,1,512,3,3],
 [610,4,1,613,614],
 [710,1,2,713,714],
 [810,1,2,1,1],
 [1,1,2,2,2],
 [4,1,4,4,1014]
]

<strong>Output:</strong>
[
 [0,0,0,0,0],
 [0,0,0,0,0],
 [0,0,0,0,0],
 [110,0,0,0,114],
 [210,0,0,0,214],
 [310,0,0,113,314],
 [410,0,0,213,414],
 [610,211,112,313,614],
 [710,311,412,613,714],
 [810,411,512,713,1014]
]
</pre>

<p><strong>Constraints:</strong></p>

<ul>
    <li><code>3 <= m, n <= 50</code></li>
    <li><code>1 <= board[i][j] <= 2000</code></li>
</ul>
