<h2><a href="https://leetcode.com/problems/search-in-a-sorted-array-of-unknown-size">702. Search in a Sorted Array of Unknown Size</a></h2><h3>Medium</h3><hr>

<p>This is an interactive problem.</p>

<p>You have a sorted array of unique integers sorted in ascending order. However, the size of the array is unknown to you.</p>

<p>You can access the array only through the <code>ArrayReader</code> interface:</p>

<pre>
interface ArrayReader {
    public int get(int index) {}
}
</pre>

<p>You may assume all integers in the array are less than <code>10000</code>. If you access an index outside the bounds of the array, the API will return <code>2147483647</code>.</p>

<p>Return the index of <code>target</code> if it exists in the array. Otherwise, return <code>-1</code>.</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> array = [-1,0,3,5,9,12], target = 9
<strong>Output:</strong> 4

<strong>Explanation:</strong>
reader.get(4) = 9
Therefore, return 4.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> array = [-1,0,3,5,9,12], target = 2
<strong>Output:</strong> -1

<strong>Explanation:</strong>
2 does not exist in the array.
</pre>

<p><strong>Constraints:</strong></p>

<ul>
    <li>You may assume that all elements in the array are unique.</li>
    <li>The array is sorted in ascending order.</li>
    <li><code>-9999 <= nums[i] <= 9999</code></li>
</ul>

<p><strong>Follow-up:</strong> Could you achieve <code>O(log n)</code> time complexity without knowing the array size?</p>
