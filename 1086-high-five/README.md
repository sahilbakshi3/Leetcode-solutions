<h2><a href="https://leetcode.com/problems/high-five/">1086. High Five</a></h2><h3>Easy</h3><hr><p>Given a list of the scores of different students, return the average score of each student's top five scores in the order of each student's id.</p>

<p>The average score is calculated using integer division.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> items = [[1,91],[1,92],[2,93],[2,97],[1,60],[2,77],[1,65],[1,87],[1,100],[2,100],[2,76]]
<strong>Output:</strong> [[1,87],[2,88]]
<strong>Explanation:</strong>
The student with id = 1 got scores = [91,92,60,65,87,100].
Their top five scores = [100,92,91,87,65].
Average = (100 + 92 + 91 + 87 + 65) / 5 = 87.

The student with id = 2 got scores = [93,97,77,100,76].
Their top five scores = [100,97,93,77,76].
Average = (100 + 97 + 93 + 77 + 76) / 5 = 88.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> items = [[1,100],[7,100],[1,90],[7,95],[1,80],[7,85],[1,70],[7,75],[1,60],[7,65]]
<strong>Output:</strong> [[1,80],[7,84]]
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= items.length &lt;= 1000</code></li>
	<li><code>items[i].length == 2</code></li>
	<li><code>1 &lt;= ID<sub>i</sub> &lt;= 1000</code></li>
	<li><code>0 &lt;= score<sub>i</sub> &lt;= 100</code></li>
	<li>For each student, there are at least 5 scores.</li>
</ul>
