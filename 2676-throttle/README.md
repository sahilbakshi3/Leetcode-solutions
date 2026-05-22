<h2><a href="https://leetcode.com/problems/throttle/">2676. Throttle</a></h2><h3>Medium</h3><hr>

<p>
Implement a <code>throttle</code> function.
</p>

<p>
The throttle function takes:
</p>

<ul>
<li><code>fn</code> → function to throttle</li>
<li><code>t</code> → delay interval in milliseconds</li>
</ul>

<p>
The returned throttled function should:
</p>

<ul>
<li>Execute immediately on first call</li>
<li>Block execution for the next <code>t</code> milliseconds</li>
<li>Store the latest arguments during the blocking period</li>
<li>Execute once more using the latest saved arguments after the delay ends</li>
</ul>

<p>
This behavior repeats continuously.
</p>

---

# Brute Force Approach

Use timestamps.

Every call:
- check current time
- compare with previous execution time

If enough time passed:
- execute function

Otherwise:
- ignore call

Problem:

This completely fails the requirement:

```js id="xk9v4m"
"execute with latest arguments after delay"
