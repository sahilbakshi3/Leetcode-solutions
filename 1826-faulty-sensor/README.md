<h2><a href="https://leetcode.com/problems/faulty-sensor">1826. Faulty Sensor</a></h2><h3>Easy</h3><hr>

<p>There are two faulty sensors that should generate the same sequence of values. However, one of the sensors has become faulty.</p>

<p>When a sensor becomes faulty, exactly one value is dropped from its sequence. After the dropped value, all subsequent values are shifted left by one position, and the last position is filled with an arbitrary value.</p>

<p>Given two integer arrays <code>sensor1</code> and <code>sensor2</code> representing the outputs of the two sensors, determine which sensor is faulty.</p>

<ul>
    <li>Return <code>1</code> if <code>sensor1</code> is faulty.</li>
    <li>Return <code>2</code> if <code>sensor2</code> is faulty.</li>
    <li>Return <code>-1</code> if it is impossible to determine which sensor is faulty.</li>
</ul>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> sensor1 = [2,3,4,5], sensor2 = [2,1,3,4]
<strong>Output:</strong> 1

<strong>Explanation:</strong>
Sensor1 could have dropped the value 1.
The resulting sequence would match sensor2 except for the last value.
Therefore, sensor1 is faulty.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> sensor1 = [2,2,2,2,2], sensor2 = [2,2,2,2,5]
<strong>Output:</strong> -1

<strong>Explanation:</strong>
The faulty sensor cannot be determined uniquely.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> sensor1 = [2,3,2,2,3,2], sensor2 = [2,3,2,3,2,7]
<strong>Output:</strong> 2
</pre>

<p><strong>Constraints:</strong></p>

<ul>
    <li><code>n == sensor1.length == sensor2.length</code></li>
    <li><code>2 <= n <= 100</code></li>
    <li><code>1 <= sensor1[i], sensor2[i] <= 100</code></li>
</ul>
