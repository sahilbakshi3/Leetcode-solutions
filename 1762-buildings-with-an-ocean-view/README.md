<h2><a href="https://leetcode.com/problems/buildings-with-an-ocean-view">1762. Buildings With an Ocean View</a></h2><h3>Medium</h3><hr>

<p>There are <code>n</code> buildings in a line. You are given an integer array <code>heights</code> of size <code>n</code> that represents the heights of the buildings in the line.</p>

<p>The ocean is to the right of the buildings.</p>

<p>A building has an ocean view if all the buildings to its right have a smaller height.</p>

<p>Return a list of indices (0-indexed) of the buildings that have an ocean view, sorted in increasing order.</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> heights = [4,2,3,1]
<strong>Output:</strong> [0,2,3]

<strong>Explanation:</strong>

Building 0: height = 4
Buildings to the right = [2,3,1]
All are shorter than 4.

Building 2: height = 3
Buildings to the right = [1]
All are shorter than 3.

Building 3: height = 1
No buildings to the right.

Therefore, the answer is [0,2,3].
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> heights = [4,3,2,1]
<strong>Output:</strong> [0,1,2,3]
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> heights = [1,3,2,4]
<strong>Output:</strong> [3]
</pre>

<p><strong>Constraints:</strong></p>

<ul>
    <li><code>1 <= heights.length <= 10<sup>5</sup></code></li>
    <li><code>1 <= heights[i] <= 10<sup>9</sup></code></li>
</ul>
