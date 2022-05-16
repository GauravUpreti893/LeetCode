<h2><a href="https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/">632. Smallest Range Covering Elements from K Lists</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have <code style="user-select: auto;">k</code> lists of sorted integers in <strong style="user-select: auto;">non-decreasing&nbsp;order</strong>. Find the <b style="user-select: auto;">smallest</b> range that includes at least one number from each of the <code style="user-select: auto;">k</code> lists.</p>

<p style="user-select: auto;">We define the range <code style="user-select: auto;">[a, b]</code> is smaller than range <code style="user-select: auto;">[c, d]</code> if <code style="user-select: auto;">b - a &lt; d - c</code> <strong style="user-select: auto;">or</strong> <code style="user-select: auto;">a &lt; c</code> if <code style="user-select: auto;">b - a == d - c</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [[4,10,15,24,26],[0,9,12,20],[5,18,22,30]]
<strong style="user-select: auto;">Output:</strong> [20,24]
<strong style="user-select: auto;">Explanation: </strong>
List 1: [4, 10, 15, 24,26], 24 is in range [20,24].
List 2: [0, 9, 12, 20], 20 is in range [20,24].
List 3: [5, 18, 22, 30], 22 is in range [20,24].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [[1,2,3],[1,2,3],[1,2,3]]
<strong style="user-select: auto;">Output:</strong> [1,1]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">nums.length == k</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= 3500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i].length &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">5</sup> &lt;= nums[i][j] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums[i]</code>&nbsp;is sorted in <strong style="user-select: auto;">non-decreasing</strong> order.</li>
</ul>
</div>