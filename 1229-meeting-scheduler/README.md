<h2><a href="https://leetcode.com/problems/meeting-scheduler/">1229. Meeting Scheduler</a></h2><h3>Medium</h3><hr>

<p>Given the availability time slots arrays <code>slots1</code> and <code>slots2</code> of two people and a meeting duration <code>duration</code>, return the earliest time slot that works for both of them and is of duration <code>duration</code>.</p>

<p>If there is no common time slot that satisfies the requirement, return an empty array.</p>

<p>The format of a time slot is:</p>

<pre>
[start, end]
</pre>

<p>Meaning the person is available from <code>start</code> to <code>end</code>.</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
Input:
slots1 = [[10,50],[60,120],[140,210]]
slots2 = [[0,15],[60,70]]
duration = 8

Output:
[60,68]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
Input:
slots1 = [[10,50],[60,120],[140,210]]
slots2 = [[0,15],[60,70]]
duration = 12

Output:
[]
</pre>

<p><strong>Constraints:</strong></p>

<ul>
    <li><code>1 <= slots1.length, slots2.length <= 10^4</code></li>
    <li><code>slots1[i].length == 2</code></li>
    <li><code>slots2[i].length == 2</code></li>
    <li><code>0 <= start < end <= 10^9</code></li>
    <li><code>1 <= duration <= 10^6</code></li>
</ul>

---

# Brute Force Approach

Compare every slot from person 1 with every slot from person 2.

For each pair:
- calculate overlapping interval
- check if overlap length >= duration

## Overlap Formula

```cpp
start = max(s1_start, s2_start)
end   = min(s1_end, s2_end)
