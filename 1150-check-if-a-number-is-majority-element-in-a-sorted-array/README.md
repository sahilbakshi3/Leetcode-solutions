<h2><a href="https://leetcode.com/problems/check-if-a-number-is-majority-element-in-a-sorted-array">1150. Check If a Number Is Majority Element in a Sorted Array</a></h2><h3>Easy</h3><hr>

<p>Given an integer array <code>nums</code> sorted in non-decreasing order and an integer <code>target</code>, return <code>true</code> if <code>target</code> is a majority element, or <code>false</code> otherwise.</p>

<p>A majority element is an element that appears more than <code>n / 2</code> times in an array of size <code>n</code>.</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [2,4,5,5,5,5,5,6,6], target = 5
<strong>Output:</strong> true

<strong>Explanation:</strong>
5 appears 5 times.
Array length = 9.

Since 5 > 9 / 2, 5 is a majority element.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [10,100,101,101], target = 101
<strong>Output:</strong> false

<strong>Explanation:</strong>
101 appears 2 times.
Array length = 4.

Since 2 is not greater than 4 / 2, 101 is not a majority element.
</pre>

<p><strong>Constraints:</strong></p>

<ul>
    <li><code>1 <= nums.length <= 1000</code></li>
    <li><code>1 <= nums[i], target <= 10<sup>9</sup></code></li>
    <li><code>nums</code> is sorted in non-decreasing order.</li>
</ul>
