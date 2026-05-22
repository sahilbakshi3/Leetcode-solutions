<h2><a href="https://leetcode.com/problems/curry/">2632. Curry</a></h2><h3>Medium</h3><hr>

<p>
Given a function <code>fn</code>, return a curried version of that function.
</p>

<p>
A curried function allows partial application of arguments.
</p>

<p>
The returned function should support:
</p>

<ul>
<li>Calling with all arguments at once</li>
<li>Calling with arguments in multiple chained calls</li>
<li>Calling with mixed partial arguments</li>
</ul>

<p>
Once enough arguments are collected,
the original function should execute.
</p>

---

<p><strong class="example">Example 1:</strong></p>

<pre>
Input:
fn = (a, b, c) => a + b + c

calls:
csum(1)(2)(3)
csum(1)(2,3)
csum(1,2)(3)
csum(1,2,3)

Output:
6
</pre>

---

# Brute Force Approach

Hardcode for fixed argument counts.

Example:
- if function takes 2 arguments:
  return nested functions
- if function takes 3 arguments:
  return triple nested functions

Something disgusting like:

```js id="f5llpr"
(a) => (b) => (c) => fn(a, b, c)
