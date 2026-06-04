<h2><a href="https://leetcode.com/problems/intersection-of-three-sorted-arrays">1213. Intersection of Three Sorted Arrays</a></h2><h3>Easy</h3><hr>

<p>Given three integer arrays <code>arr1</code>, <code>arr2</code>, and <code>arr3</code> sorted in strictly increasing order, return a sorted array of only the integers that appeared in all three arrays.</p>

<p>An integer should be included in the result if and only if it exists in <code>arr1</code>, <code>arr2</code>, and <code>arr3</code>.</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
arr1 = [1,2,3,4,5]
arr2 = [1,2,5,7,9]
arr3 = [1,3,4,5,8]

<strong>Output:</strong>
[1,5]

<strong>Explanation:</strong>
1 appears in all three arrays.
5 appears in all three arrays.
No other number is present in all three arrays.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
arr1 = [197,418,523,876,1356]
arr2 = [501,880,1593,1710,1870]
arr3 = [521,682,1337,1395,1764]

<strong>Output:</strong>
[]
</pre>

<p><strong>Constraints:</strong></p>

<ul>
    <li><code>1 <= arr1.length, arr2.length, arr3.length <= 1000</code></li>
    <li><code>1 <= arr1[i], arr2[i], arr3[i] <= 2000</code></li>
    <li><code>arr1</code>, <code>arr2</code>, and <code>arr3</code> are strictly increasing.</li>
</ul>

<p><strong>Follow-up:</strong> Can you solve it in linear time using the sorted property of the arrays?</p>
