<h2><a href="https://leetcode.com/problems/single-row-keyboard/">1165. Single-Row Keyboard</a></h2><h3>Easy</h3><hr><p>There is a special keyboard with all keys in a single row.</p>

<p>Given a string <code>keyboard</code> of length <code>26</code> indicating the layout of the keyboard, and a string <code>word</code>, return <em>the time it takes to type</em> <code>word</code>.</p>

<p>The finger initially starts at index <code>0</code>.</p>

<p>To move from index <code>i</code> to index <code>j</code>, the time taken is <code>|i - j|</code>.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> keyboard = "abcdefghijklmnopqrstuvwxyz", word = "cba"
<strong>Output:</strong> 4
<strong>Explanation:</strong>
Move from index 0 to index 2 = 2
Move from index 2 to index 1 = 1
Move from index 1 to index 0 = 1
Total = 4
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> keyboard = "pqrstuvwxyzabcdefghijklmno", word = "leetcode"
<strong>Output:</strong> 73
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>keyboard.length == 26</code></li>
	<li><code>keyboard</code> contains each lowercase English letter exactly once.</li>
	<li><code>1 &lt;= word.length &lt;= 10^4</code></li>
	<li><code>word[i]</code> is a lowercase English letter.</li>
</ul>
