<h2><a href="https://leetcode.com/problems/missing-ranges/">163. Missing Ranges</a></h2><h3>Easy</h3><hr><p>Given an inclusive range <code>[lower, upper]</code> and a sorted unique integer array <code>nums</code>, return <em>the smallest sorted list of ranges that cover every missing number exactly</em>.</p>

<p>A missing range is represented as:</p>

<ul>
	<li><code>"a"</code> if the range contains only one number.</li>
	<li><code>"a-&gt;b"</code> if the range contains multiple numbers.</li>
</ul>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [0,1,3,50,75], lower = 0, upper = 99
<strong>Output:</strong> ["2","4-&gt;49","51-&gt;74","76-&gt;99"]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [], lower = 1, upper = 1
<strong>Output:</strong> ["1"]
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [], lower = -3, upper = -1
<strong>Output:</strong> ["-3-&gt;-1"]
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>-10^9 &lt;= lower &lt;= upper &lt;= 10^9</code></li>
	<li><code>0 &lt;= nums.length &lt;= 100</code></li>
	<li><code>nums</code> is sorted in ascending order.</li>
	<li>All values of <code>nums</code> are unique.</li>
</ul>
