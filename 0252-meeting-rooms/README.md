<h2><a href="https://leetcode.com/problems/meeting-rooms/">252. Meeting Rooms</a></h2><h3>Easy</h3><hr><p>Given an array of meeting time intervals where <code>intervals[i] = [start<sub>i</sub>, end<sub>i</sub>]</code>, determine if a person could attend all meetings.</p>

<p>A person can attend all meetings if none of the meetings overlap.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> intervals = [[0,30],[5,10],[15,20]]
<strong>Output:</strong> false
<strong>Explanation:</strong>
Meeting [0,30] overlaps with [5,10].
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> intervals = [[7,10],[2,4]]
<strong>Output:</strong> true
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= intervals.length &lt;= 10^4</code></li>
	<li><code>intervals[i].length == 2</code></li>
	<li><code>0 &lt;= start<sub>i</sub> &lt; end<sub>i</sub> &lt;= 10^6</code></li>
</ul>
