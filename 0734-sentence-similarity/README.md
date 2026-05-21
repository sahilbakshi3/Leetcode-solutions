<h2><a href="https://leetcode.com/problems/sentence-similarity/">734. Sentence Similarity</a></h2><h3>Easy</h3><hr><p>Given two sentences <code>sentence1</code> and <code>sentence2</code>, return <code>true</code> if the two sentences are similar.</p>

<p>Two sentences are similar if:</p>

<ul>
	<li>They have the same length.</li>
	<li>For each pair of corresponding words:
	<ul>
		<li>the words are equal, or</li>
		<li>the words are similar according to the given pairs.</li>
	</ul>
	</li>
</ul>

<p>Similarity is:</p>

<ul>
	<li><strong>Symmetric</strong>: if <code>(a,b)</code> is similar, then <code>(b,a)</code> is similar.</li>
	<li><strong>Not transitive</strong>: if <code>(a,b)</code> and <code>(b,c)</code> are similar, it does not imply <code>(a,c)</code>.</li>
</ul>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
sentence1 = ["great","acting","skills"]
sentence2 = ["fine","drama","talent"]
similarPairs = [["great","fine"],["acting","drama"],["skills","talent"]]

<strong>Output:</strong> true
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
sentence1 = ["great"]
sentence2 = ["great"]
similarPairs = []

<strong>Output:</strong> true
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong>
sentence1 = ["great"]
sentence2 = ["doubleplus","good"]
similarPairs = []

<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= sentence1.length, sentence2.length &lt;= 1000</code></li>
	<li><code>0 &lt;= similarPairs.length &lt;= 2000</code></li>
	<li><code>1 &lt;= sentence1[i].length, sentence2[i].length &lt;= 20</code></li>
	<li><code>similarPairs[i].length == 2</code></li>
</ul>
