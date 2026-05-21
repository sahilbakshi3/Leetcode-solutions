<h2><a href="https://leetcode.com/problems/perform-string-shifts/">1427. Perform String Shifts</a></h2><h3>Easy</h3><hr><p>You are given a string <code>s</code> and an array <code>shift</code> where <code>shift[i] = [direction, amount]</code>.</p>

<ul>
	<li><code>direction = 0</code> means shift the string to the left.</li>
	<li><code>direction = 1</code> means shift the string to the right.</li>
</ul>

<p>A left shift by 1 removes the first character of the string and appends it to the end.</p>

<p>A right shift by 1 removes the last character of the string and inserts it at the beginning.</p>

<p>Return <em>the final string after all operations</em>.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = "abc", shift = [[0,1],[1,2]]
<strong>Output:</strong> "cab"
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = "abcdefg",
shift = [[1,1],[1,1],[0,2],[1,3]]

<strong>Output:</strong> "efgabcd"
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 100</code></li>
	<li><code>1 &lt;= shift.length &lt;= 100</code></li>
	<li><code>shift[i].length == 2</code></li>
</ul>
