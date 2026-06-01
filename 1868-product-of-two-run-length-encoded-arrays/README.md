<h2><a href="https://leetcode.com/problems/product-of-two-run-length-encoded-arrays">1868. Product of Two Run-Length Encoded Arrays</a></h2><h3>Medium</h3><hr>

<p>Run-length encoding is a compression algorithm that allows an integer array <code>nums</code> to be represented as a list of pairs <code>[value, frequency]</code>.</p>

<p>For example, <code>nums = [1,1,1,2,2,2,2,2]</code> can be represented by the run-length encoded array <code>[[1,3],[2,5]]</code>. Another array <code>[3,3,3,4,4,4,4,4]</code> can be represented as <code>[[3,3],[4,5]]</code>.</p>

<p>Given two run-length encoded arrays <code>encoded1</code> and <code>encoded2</code> representing two arrays of equal length, return the run-length encoding of their element-wise product.</p>

<p>The returned run-length encoded array should have the minimum possible length.</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
encoded1 = [[1,3],[2,3]]
encoded2 = [[6,3],[3,3]]

<strong>Output:</strong>
[[6,6]]

<strong>Explanation:</strong>

encoded1 represents:
[1,1,1,2,2,2]

encoded2 represents:
[6,6,6,3,3,3]

Product:
[6,6,6,6,6,6]

Run-length encoding:
[[6,6]]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
encoded1 = [[1,3],[2,1],[3,2]]
encoded2 = [[2,3],[3,3]]

<strong>Output:</strong>
[[2,3],[6,1],[9,2]]
</pre>

<p><strong>Constraints:</strong></p>

<ul>
    <li><code>1 <= encoded1.length, encoded2.length <= 10<sup>5</sup></code></li>
    <li><code>encoded1[i].length == 2</code></li>
    <li><code>encoded2[i].length == 2</code></li>
    <li><code>1 <= value, frequency <= 10<sup>4</sup></code></li>
    <li>The uncompressed arrays represented by <code>encoded1</code> and <code>encoded2</code> have the same length.</li>
</ul>
