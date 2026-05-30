<h2><a href="https://leetcode.com/problems/remove-interval/">1272. Remove Interval</a></h2><h3>Medium</h3><hr><p>You are given a sorted list of disjoint intervals <code>intervals</code>, where each interval is represented as <code>[a, b)</code>.</p>

<p>You are also given an interval <code>toBeRemoved = [x, y)</code>.</p>

<p>Return the resulting intervals after removing all numbers in <code>toBeRemoved</code> from the set represented by <code>intervals</code>.</p>

<p>The output should remain sorted and disjoint.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
intervals = [[0,2],[3,4],[5,7]]
toBeRemoved = [1,6]

<strong>Output:</strong>
[[0,1],[6,7]]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
intervals = [[0,5]]
toBeRemoved = [2,3]

<strong>Output:</strong>
[[0,2],[3,5]]
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= intervals.length &lt;= 10^4</code></li>
	<li><code>intervals[i].length == 2</code></li>
	<li><code>-10^9 &lt;= intervals[i][0] &lt; intervals[i][1] &lt;= 10^9</code></li>
</ul>
