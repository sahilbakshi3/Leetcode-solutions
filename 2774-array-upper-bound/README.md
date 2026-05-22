<h2><a href="https://leetcode.com/problems/array-upper-bound/">2774. Array Upper Bound</a></h2><h3>Easy</h3><hr>

<p>
Write a function <code>upperBound</code> that accepts:
</p>

<ul>
<li>a sorted array of integers</li>
<li>a target integer</li>
</ul>

<p>
The function should return:
</p>

<ul>
<li>the index of the last occurrence of the target</li>
<li><code>-1</code> if the target does not exist</li>
</ul>

<p>
The array is sorted in ascending order and may contain duplicates.
</p>

---

<p><strong class="example">Example 1:</strong></p>

<pre>
Input:
nums = [3,4,5]
target = 5

Output:
2
</pre>

---

<p><strong class="example">Example 2:</strong></p>

<pre>
Input:
nums = [1,4,5]
target = 2

Output:
-1
</pre>

---

<p><strong class="example">Example 3:</strong></p>

<pre>
Input:
nums = [3,4,6,6,6,6,7]
target = 6

Output:
5
</pre>

---

# Brute Force Approach

Traverse array from the back.

The first occurrence found:
- is automatically the last occurrence

---

## Algorithm

Start from:

```js id="3qj7qy"
n - 1
