<h2><a href="https://leetcode.com/problems/guess-the-majority-in-a-hidden-array/">1538. Guess the Majority in a Hidden Array</a></h2><h3>Medium</h3><hr><p>You are given access to a hidden binary array through the <code>ArrayReader</code> API.</p>

<p>The API provides:</p>

<ul>
	<li><code>int query(int a, int b, int c, int d)</code></li>
	<li><code>int length()</code></li>
</ul>

<p>The query result is:</p>

<ul>
	<li><code>4</code> if all four values are equal</li>
	<li><code>2</code> if three values are equal and one is different</li>
	<li><code>0</code> if there are two 0s and two 1s</li>
</ul>

<p>Return any index belonging to the majority value in the hidden array.</p>

<p>If the number of 0s equals the number of 1s, return <code>-1</code>.</p>

<p>You may call <code>query()</code> at most <code>2 * n</code> times.</p>
