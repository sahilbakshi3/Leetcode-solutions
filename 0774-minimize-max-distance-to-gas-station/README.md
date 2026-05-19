<h2><a href="https://leetcode.com/problems/minimize-max-distance-to-gas-station/">774. Minimize Max Distance to Gas Station</a></h2><h3>Hard</h3><hr><p>You are given an integer array <code>stations</code> where <code>stations[i]</code> represents the position of the <code>i<sup>th</sup></code> gas station on the x-axis.</p>

<p>You are also given an integer <code>k</code>.</p>

<p>You should add exactly <code>k</code> new gas stations anywhere on the x-axis.</p>

<p>After adding the stations, let <code>penalty()</code> be the maximum distance between adjacent gas stations.</p>

<p>Return the smallest possible value of <code>penalty()</code>.</p>

<p>Answers within <code>10<sup>-6</sup></code> of the actual answer will be accepted.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> stations = [1,2,3,4,5,6,7,8,9,10], k = 9
<strong>Output:</strong> 0.50000
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> stations = [23,24,36,39,46,56,57,65,84,98], k = 1
<strong>Output:</strong> 14.00000
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
    <li><code>10 &lt;= stations.length &lt;= 2000</code></li>
    <li><code>0 &lt;= stations[i] &lt;= 10<sup>8</sup></code></li>
    <li><code>stations</code> is sorted in a strictly increasing order.</li>
    <li><code>1 &lt;= k &lt;= 10<sup>6</sup></code></li>
</ul>

<p>&nbsp;</p>

<strong>Follow-up:</strong> Can you solve this problem using <code>Binary Search</code> on the answer instead of brute force simulation?
