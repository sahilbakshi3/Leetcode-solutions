<h2><a href="https://leetcode.com/problems/design-compressed-string-iterator/">604. Design Compressed String Iterator</a></h2><h3>Easy</h3><hr><p>Design and implement a data structure for a compressed string iterator.</p>

<p>The compressed string format is:</p>

```text
letter followed by a positive integer count
```

<p>For example:</p>

```text
"a2b3"
```

represents:

```text
"aabbb"
```

<p>Implement the <code>StringIterator</code> class:</p>

<ul>
	<li><code>StringIterator(string compressedString)</code> Initializes the iterator with the compressed string.</li>
	<li><code>char next()</code> Returns the next character if available, otherwise returns a space character <code>' '</code>.</li>
	<li><code>bool hasNext()</code> Returns <code>true</code> if there are still uncompressed characters remaining.</li>
</ul>

<p>&nbsp;</p>

<p><strong class="example">Example:</strong></p>

<pre>
<strong>Input:</strong>
["StringIterator","next","next","next","hasNext","next","hasNext"]

[["L1e2t1C1o1d1e1"],[],[],[],[],[],[]]

<strong>Output:</strong>
[null,"L","e","e",true,"t",true]
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= compressedString.length &lt;= 1000</code></li>
	<li><code>compressedString</code> consists of lowercase/uppercase English letters and digits.</li>
	<li>All counts are positive integers.</li>
</ul>
