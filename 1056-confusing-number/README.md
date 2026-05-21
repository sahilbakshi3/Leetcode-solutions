<h2><a href="https://leetcode.com/problems/confusing-number/">1056. Confusing Number</a></h2><h3>Easy</h3><hr><p>A <strong>confusing number</strong> is a number that when rotated <code>180</code> degrees becomes a different number with each digit remaining valid.</p>

<p>The valid digit rotations are:</p>

<ul>
	<li><code>0 → 0</code></li>
	<li><code>1 → 1</code></li>
	<li><code>6 → 9</code></li>
	<li><code>8 → 8</code></li>
	<li><code>9 → 6</code></li>
</ul>

<p>Digits <code>2,3,4,5,7</code> are invalid.</p>

<p>Return <code>true</code> if <code>n</code> is a confusing number, otherwise return <code>false</code>.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 6
<strong>Output:</strong> true
<strong>Explanation:</strong>
6 rotates to 9 which is different from 6.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 11
<strong>Output:</strong> false
<strong>Explanation:</strong>
11 rotates to 11.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> n = 89
<strong>Output:</strong> true
<strong>Explanation:</strong>
89 rotates to 68.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= n &lt;= 10^9</code></li>
</ul>
