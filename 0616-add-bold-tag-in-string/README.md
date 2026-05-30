<h2><a href="https://leetcode.com/problems/add-bold-tag-in-string/">616. Add Bold Tag in String</a></h2><h3>Medium</h3><hr><p>Given a string <code>s</code> and an array of strings <code>words</code>, add bold tags <code>&lt;b&gt;</code> and <code>&lt;/b&gt;</code> around substrings in <code>s</code> that match any word in <code>words</code>.</p>

<p>The rules are:</p>

<ul>
	<li>If two bold regions overlap, merge them.</li>
	<li>If two bold regions are consecutive, merge them.</li>
	<li>Use the minimum number of bold tags possible.</li>
</ul>

<p>Return the resulting string.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
s = "abcxyz123"
words = ["abc","123"]

<strong>Output:</strong>
"&lt;b&gt;abc&lt;/b&gt;xyz&lt;b&gt;123&lt;/b&gt;"
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
s = "aaabbcc"
words = ["aaa","aab","bc"]

<strong>Output:</strong>
"&lt;b&gt;aaabbc&lt;/b&gt;c"
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 1000</code></li>
	<li><code>1 &lt;= words.length &lt;= 100</code></li>
	<li><code>1 &lt;= words[i].length &lt;= 100</code></li>
</ul>
