<h2><a href="https://leetcode.com/problems/valid-word-square/">422. Valid Word Square</a></h2><h3>Easy</h3><hr><p>Given an array of strings <code>words</code>, return <code>true</code> if it forms a valid word square.</p>

<p>A sequence of words forms a valid word square if the <code>kth</code> row and column read the exact same string, where <code>0 &lt;= k &lt; max(numRows, numColumns)</code>.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> words = ["abcd","bnrt","crmy","dtye"]
<strong>Output:</strong> true
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> words = ["abcd","bnrt","crm","dt"]
<strong>Output:</strong> true
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> words = ["ball","area","read","lady"]
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= words.length &lt;= 500</code></li>
	<li><code>1 &lt;= words[i].length &lt;= 500</code></li>
	<li><code>words[i]</code> consists of lowercase English letters.</li>
</ul>
