<h2><a href="https://leetcode.com/problems/logger-rate-limiter/">359. Logger Rate Limiter</a></h2><h3>Easy</h3><hr><p>Design a logger system that receives a stream of messages along with timestamps.</p>

<p>Each unique message should only be printed at most once every <code>10</code> seconds.</p>

<p>Implement the <code>Logger</code> class:</p>

<ul>
	<li><code>Logger()</code> Initializes the logger object.</li>
	<li><code>bool shouldPrintMessage(int timestamp, string message)</code> Returns <code>true</code> if the message should be printed at the given timestamp, otherwise returns <code>false</code>.</li>
</ul>

<p>A message can be printed if:
<ul>
	<li>it has never been printed before, or</li>
	<li>the last printed timestamp is at least <code>10</code> seconds ago.</li>
</ul>
</p>

<p>&nbsp;</p>

<p><strong class="example">Example:</strong></p>

<pre>
<strong>Input:</strong>
["Logger","shouldPrintMessage","shouldPrintMessage",
"shouldPrintMessage","shouldPrintMessage",
"shouldPrintMessage","shouldPrintMessage"]

[[],
[1,"foo"],
[2,"bar"],
[3,"foo"],
[8,"bar"],
[10,"foo"],
[11,"foo"]]

<strong>Output:</strong>
[null,true,true,false,false,false,true]
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= timestamp &lt;= 10^9</code></li>
	<li><code>1 &lt;= message.length &lt;= 30</code></li>
	<li>At most <code>10^4</code> calls will be made.</li>
</ul>
