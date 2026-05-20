<h2><a href="https://leetcode.com/problems/minimum-cost-to-connect-sticks/">1167. Minimum Cost to Connect Sticks</a></h2><h3>Medium</h3><hr><p>You have some number of sticks with positive integer lengths. These lengths are given as an array <code>sticks</code>.</p>

<p>You can connect any two sticks of lengths <code>x</code> and <code>y</code> into one stick by paying a cost of <code>x + y</code>. You must connect all the sticks until there is only one stick remaining.</p>

<p>Return <em>the minimum cost</em> of connecting all the given sticks into one stick in this way.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> sticks = [2,4,3]
<strong>Output:</strong> 14
<strong>Explanation:</strong>
1. Connect sticks 2 and 3 for a cost of 5. Now sticks = [4,5].
2. Connect sticks 4 and 5 for a cost of 9. Total cost = 14.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> sticks = [1,8,3,5]
<strong>Output:</strong> 30
<strong>Explanation:</strong>
Connect sticks 1 and 3 (cost 4), then 4 and 5 (cost 9), then 8 and 9 (cost 17).
Total cost = 4 + 9 + 17 = 30.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> sticks = [5]
<strong>Output:</strong> 0
<strong>Explanation:</strong> Only one stick exists, so no cost is needed.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= sticks.length &lt;= 10^4</code></li>
	<li><code>1 &lt;= sticks[i] &lt;= 10^4</code></li>
</ul>
