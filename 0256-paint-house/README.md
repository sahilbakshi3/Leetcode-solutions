<h2><a href="https://leetcode.com/problems/paint-house/">256. Paint House</a></h2><h3>Medium</h3><hr><p>There are <code>n</code> houses in a row, each can be painted with one of three colors: red, blue, or green.</p>

<p>The cost of painting each house with a certain color is represented by an <code>n x 3</code> cost matrix <code>costs</code>.</p>

<ul>
	<li><code>costs[i][0]</code> is the cost of painting house <code>i</code> red.</li>
	<li><code>costs[i][1]</code> is the cost of painting house <code>i</code> blue.</li>
	<li><code>costs[i][2]</code> is the cost of painting house <code>i</code> green.</li>
</ul>

<p>No two adjacent houses can have the same color.</p>

<p>Return <em>the minimum cost to paint all houses</em>.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> costs = [[17,2,17],[16,16,5],[14,3,19]]
<strong>Output:</strong> 10
<strong>Explanation:</strong>
Paint house 0 blue = 2
Paint house 1 green = 5
Paint house 2 blue = 3
Total cost = 10
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> costs = [[7,6,2]]
<strong>Output:</strong> 2
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= costs.length &lt;= 100</code></li>
	<li><code>costs[i].length == 3</code></li>
	<li><code>1 &lt;= costs[i][j] &lt;= 20</code></li>
</ul>
