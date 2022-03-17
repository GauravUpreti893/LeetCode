<h2><a href="https://leetcode.com/problems/largest-number-at-least-twice-of-others/">747. Largest Number At Least Twice of Others</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">nums</code> where the largest integer is <strong style="user-select: auto;">unique</strong>.</p>

<p style="user-select: auto;">Determine whether the largest element in the array is <strong style="user-select: auto;">at least twice</strong> as much as every other number in the array. If it is, return <em style="user-select: auto;">the <strong style="user-select: auto;">index</strong> of the largest element, or return </em><code style="user-select: auto;">-1</code><em style="user-select: auto;"> otherwise</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,6,1,0]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> 6 is the largest integer.
For every other number in the array x, 6 is at least twice as big as x.
The index of value 6 is 1, so we return 1.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3,4]
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> 4 is less than twice the value of 3, so we return -1.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> 1 is trivially at least twice the value as any other number because there are no other numbers.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 100</code></li>
	<li style="user-select: auto;">The largest element in <code style="user-select: auto;">nums</code> is unique.</li>
</ul>
</div>