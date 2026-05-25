<h2><a href="https://leetcode.com/problems/valid-word-abbreviation/">408. Valid Word Abbreviation</a></h2><h3>Easy</h3><hr><p>Given a non-empty string <code>word</code> and an abbreviation <code>abbr</code>, return <code>true</code> if the abbreviation matches the given word, otherwise return <code>false</code>.</p>

<p>An abbreviation can replace non-adjacent, non-empty substrings with their lengths.</p>

<p>Rules:</p>

<ul>
	<li>Numbers cannot have leading zeros.</li>
	<li>Numbers represent how many characters to skip in the original word.</li>
</ul>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> word = "internationalization", abbr = "i12iz4n"
<strong>Output:</strong> true
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> word = "apple", abbr = "a2e"
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= word.length &lt;= 20</code></li>
	<li><code>1 &lt;= abbr.length &lt;= 10</code></li>
	<li><code>word</code> consists of lowercase English letters.</li>
	<li><code>abbr</code> consists of lowercase English letters and digits.</li>
</ul>
