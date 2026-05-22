<h2><a href="https://leetcode.com/problems/game-play-analysis-ii/">512. Game Play Analysis II</a></h2><h3>Easy</h3><hr>

<p>Table: <code>Activity</code></p>

<pre>
+--------------+---------+
| Column Name  | Type    |
+--------------+---------+
| player_id    | int     |
| device_id    | int     |
| event_date   | date    |
| games_played | int     |
+--------------+---------+
</pre>

<p>
(player_id, event_date) is the primary key of this table.
</p>

<p>
This table shows the activity of players in a game application.
</p>

<p>
Each row represents a player logging in and playing some games on a specific device at a certain date.
</p>

---

<p>
Write a solution to find the device that is first logged in for each player.
</p>

<p>
Return the result table in any order.
</p>

<p>
The result format is shown below.
</p>

---

<p><strong class="example">Example 1:</strong></p>

<pre>
Input:

Activity table:

+-----------+-----------+------------+--------------+
| player_id | device_id | event_date | games_played |
+-----------+-----------+------------+--------------+
| 1         | 2         | 2016-03-01 | 5            |
| 1         | 2         | 2016-05-02 | 6            |
| 2         | 3         | 2017-06-25 | 1            |
| 3         | 1         | 2016-03-02 | 0            |
| 3         | 4         | 2018-07-03 | 5            |
+-----------+-----------+------------+--------------+

Output:

+-----------+-----------+
| player_id | device_id |
+-----------+-----------+
| 1         | 2         |
| 2         | 3         |
| 3         | 1         |
+-----------+-----------+
</pre>

---

# Brute Force Approach

For every player:
- find minimum event_date
- then find corresponding device_id

This can be done using:
- subqueries
- self joins

But naive querying can become messy and inefficient.

---

# Better Approach

Observation:

We only care about:
- earliest login date for each player

So first:
- compute minimum event_date grouped by player

Then:
- join back with original table
- fetch corresponding device_id

---

# Optimal Approach (GROUP BY + JOIN)

## Step 1

Find first login date for every player:

```sql
SELECT player_id,
       MIN(event_date)
FROM Activity
GROUP BY player_id
