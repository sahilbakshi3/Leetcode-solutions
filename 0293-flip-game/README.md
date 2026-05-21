<h2><a href="https://leetcode.com/problems/flip-game/">293. Flip Game</a></h2><h3>Easy</h3><hr><p>You are playing a Flip Game with a string <code>currentState</code> that contains only characters <code>'+'</code> and <code>'-'</code>.</p>

<p>You and your friend take turns flipping two consecutive <code>"++"</code> into <code>"--"</code>.</p>

<p>Return <em>all possible states of the string after one valid move</em>.</p>

<p>If no valid move exists, return an empty list.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> currentState = "++++"
<strong>Output:</strong> ["--++","+--+","++--"]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> currentState = "+"
<strong>Output:</strong> []
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= currentState.length &lt;= 500</code></li>
	<li><code>currentState[i]</code> is either <code>'+'</code> or <code>'-'</code>.</li>
</ul>
