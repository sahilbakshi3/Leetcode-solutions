<h2><a href="https://leetcode.com/problems/first-unique-number/">1429. First Unique Number</a></h2><h3>Medium</h3><hr><p>Design a data structure to find the first unique integer in a queue.</p>

<p>Implement the <code>FirstUnique</code> class:</p>

<ul>
	<li><code>FirstUnique(int[] nums)</code> Initializes the object with the numbers in the queue.</li>
	<li><code>int showFirstUnique()</code> Returns the value of the first unique integer in the queue, otherwise returns <code>-1</code>.</li>
	<li><code>void add(int value)</code> Inserts <code>value</code> to the queue.</li>
</ul>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
["FirstUnique","showFirstUnique","add",
"showFirstUnique","add","showFirstUnique",
"add","showFirstUnique"]

[[[2,3,5]],[],[5],[],[2],[],[3],[]]

<strong>Output:</strong>
[null,2,null,2,null,3,null,-1]
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10^5</code></li>
	<li><code>1 &lt;= nums[i], value &lt;= 10^8</code></li>
	<li>At most <code>5 * 10^4</code> calls will be made.</li>
</ul>
