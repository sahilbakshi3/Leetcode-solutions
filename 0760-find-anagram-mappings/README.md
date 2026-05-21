<h2><a href="https://leetcode.com/problems/find-anagram-mappings/">760. Find Anagram Mappings</a></h2><h3>Easy</h3><hr><p>You are given two integer arrays <code>nums1</code> and <code>nums2</code> where <code>nums2</code> is an anagram of <code>nums1</code>.</p>

<p>Return an index mapping array <code>mapping</code> from <code>nums1</code> to <code>nums2</code> where:</p>

<ul>
	<li><code>mapping[i] = j</code> means the element <code>nums1[i]</code> appears at index <code>j</code> in <code>nums2</code>.</li>
</ul>

<p>If there are multiple answers, return any of them.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums1 = [12,28,46,32,50], nums2 = [50,12,32,46,28]
<strong>Output:</strong> [1,4,3,2,0]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums1 = [84,46], nums2 = [84,46]
<strong>Output:</strong> [0,1]
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums1.length &lt;= 100</code></li>
	<li><code>nums2.length == nums1.length</code></li>
	<li><code>0 &lt;= nums1[i], nums2[i] &lt;= 10^5</code></li>
	<li><code>nums2</code> is an anagram of <code>nums1</code>.</li>
</ul>
