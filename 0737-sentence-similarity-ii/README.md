<h2><a href="https://leetcode.com/problems/sentence-similarity-ii/">737. Sentence Similarity II</a></h2><h3>Medium</h3><hr><p>Given two sentences <code>sentence1</code> and <code>sentence2</code>, represented as arrays of strings, and an array of similar word pairs <code>similarPairs</code>, determine whether the two sentences are similar.</p>

<p>Two sentences are similar if:</p>

<ul>
	<li>They have the same length.</li>
	<li>For every index <code>i</code>, <code>sentence1[i]</code> and <code>sentence2[i]</code> are similar.</li>
</ul>

<p>Similarity properties:</p>

<ul>
	<li>A word is always similar to itself.</li>
	<li>Similarity is symmetric.</li>
	<li>Similarity is transitive.</li>
</ul>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
sentence1 = ["great","acting","skills"]

sentence2 = ["fine","drama","talent"]

similarPairs =
[["great","good"],
 ["fine","good"],
 ["acting","drama"],
 ["skills","talent"]]

<strong>Output:</strong> true
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= sentence1.length, sentence2.length &lt;= 1000</code></li>
	<li><code>0 &lt;= similarPairs.length &lt;= 2000</code></li>
	<li>All words consist of English letters.</li>
</ul>
