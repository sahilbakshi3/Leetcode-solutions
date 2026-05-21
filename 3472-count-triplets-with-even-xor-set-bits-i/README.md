<h2><a href="https://leetcode.com/problems/count-triplets-with-even-xor-set-bits-i/">3472. Count Triplets with Even XOR Set Bits I</a></h2><h3>Easy</h3><hr><p>You are given three integer arrays <code>a</code>, <code>b</code>, and <code>c</code>.</p>

<p>Return <em>the number of triplets</em> <code>(a[i], b[j], c[k])</code> such that:</p>

```text
popcount(a[i] XOR b[j] XOR c[k]) is even
```

<p>Where:</p>

<ul>
	<li><code>XOR</code> is the bitwise XOR operation.</li>
	<li><code>popcount(x)</code> is the number of set bits in <code>x</code>.</li>
</ul>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
a = [1,2]
b = [3]
c = [4]

<strong>Output:</strong> 2
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
a = [5]
b = [3]
c = [6]

<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= a.length, b.length, c.length &lt;= 100</code></li>
	<li><code>0 &lt;= a[i], b[i], c[i] &lt;= 10^9</code></li>
</ul>
