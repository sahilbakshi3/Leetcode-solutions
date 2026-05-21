<h2><a href="https://leetcode.com/problems/moving-average-from-data-stream/">346. Moving Average from Data Stream</a></h2><h3>Easy</h3><hr><p>Given a stream of integers and a window size, calculate the moving average of all integers in the sliding window.</p>

<p>Implement the <code>MovingAverage</code> class:</p>

<ul>
	<li><code>MovingAverage(int size)</code> Initializes the object with the size of the window.</li>
	<li><code>double next(int val)</code> Returns the moving average of the last <code>size</code> values of the stream.</li>
</ul>

<p>&nbsp;</p>

<p><strong class="example">Example:</strong></p>

<pre>
<strong>Input:</strong>
["MovingAverage", "next", "next", "next", "next"]
[[3], [1], [10], [3], [5]]

<strong>Output:</strong>
[null, 1.0, 5.5, 4.66667, 6.0]

<strong>Explanation:</strong>

MovingAverage movingAverage = new MovingAverage(3);

movingAverage.next(1);  // return 1.0 = 1 / 1

movingAverage.next(10); // return 5.5 = (1 + 10) / 2

movingAverage.next(3);  // return 4.66667 = (1 + 10 + 3) / 3

movingAverage.next(5);  // return 6.0 = (10 + 3 + 5) / 3
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= size &lt;= 1000</code></li>
	<li><code>-10^5 &lt;= val &lt;= 10^5</code></li>
	<li>At most <code>10^4</code> calls will be made to <code>next</code>.</li>
</ul>
