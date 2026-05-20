<h2><a href="https://leetcode.com/problems/how-many-apples-can-you-put-into-the-basket/">1196. How Many Apples Can You Put into the Basket</a></h2><h3>Easy</h3><hr><p>You have a basket that can carry a maximum weight of <code>5000</code> units.</p>

<p>You are given an integer array <code>weight</code> where <code>weight[i]</code> is the weight of the <code>i-th</code> apple. Return the maximum number of apples you can put in the basket without exceeding the weight limit.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> weight = [100,200,150,1000]
<strong>Output:</strong> 4
<strong>Explanation:</strong> All 4 apples can be carried since their total weight is 1450.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> weight = [900,950,800,1000,700,800]
<strong>Output:</strong> 5
<strong>Explanation:</strong> The total weight of the 5 lightest apples is 4150 which is within the limit.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= weight.length &lt;= 10^3</code></li>
	<li><code>1 &lt;= weight[i] &lt;= 10^3</code></li>
</ul>
