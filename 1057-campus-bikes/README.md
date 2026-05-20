<h2><a href="https://leetcode.com/problems/campus-bikes/">1057. Campus Bikes</a></h2><h3>Medium</h3><hr><p>On a campus represented as a 2D grid, there are <code>n</code> workers and <code>m</code> bikes, with <code>n &lt;= m</code>.</p>

<p>You are given two arrays <code>workers</code> and <code>bikes</code> where:</p>

<ul>
	<li><code>workers[i] = [x<sub>i</sub>, y<sub>i</sub>]</code> is the position of the <code>i-th</code> worker.</li>
	<li><code>bikes[j] = [x<sub>j</sub>, y<sub>j>]</code> is the position of the <code>j-th</code> bike.</li>
</ul>

<p>Assign a bike to each worker using the following rules:</p>

<ol>
	<li>Choose the worker-bike pair with the shortest Manhattan distance.</li>
	<li>If there are multiple pairs with the same distance, choose the pair with the smallest worker index.</li>
	<li>If there is still a tie, choose the pair with the smallest bike index.</li>
</ol>

<p>Return <em>the answer array</em> <code>answer</code> <em>where</em> <code>answer[i]</code> <em>is the index of the bike assigned to the</em> <code>i-th</code> <em>worker.</em></p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> workers = [[0,0],[2,1]], bikes = [[1,2],[3,3]]
<strong>Output:</strong> [1,0]
<strong>Explanation:</strong>
Worker 1 is closest to Bike 0 with distance 2, so Worker 1 gets Bike 0.
Worker 0 gets the remaining Bike 1.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> workers = [[0,0],[1,1],[2,0]], bikes = [[1,0],[2,2],[2,1]]
<strong>Output:</strong> [0,2,1]
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == workers.length</code></li>
	<li><code>m == bikes.length</code></li>
	<li><code>1 &lt;= n &lt;= m &lt;= 1000</code></li>
	<li><code>workers[i].length == bikes[j].length == 2</code></li>
	<li><code>0 &lt;= x<sub>i</sub>, y<sub>i</sub>, x<sub>j</sub>, y<sub>j</sub> &lt; 1000</code></li>
	<li>All worker and bike positions are unique.</li>
</ul>
