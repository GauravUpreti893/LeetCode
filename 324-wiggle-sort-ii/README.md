<h2><a href="https://leetcode.com/problems/wiggle-sort-ii/">324. Wiggle Sort II</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">nums</code>, reorder it such that <code style="user-select: auto;">nums[0] &lt; nums[1] &gt; nums[2] &lt; nums[3]...</code>.</p>

<p style="user-select: auto;">You may assume the input array always has a valid answer.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,5,1,1,6,4]
<strong style="user-select: auto;">Output:</strong> [1,6,1,5,1,4]
<strong style="user-select: auto;">Explanation:</strong> [1,4,1,5,1,6] is also accepted.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,3,2,2,3,1]
<strong style="user-select: auto;">Output:</strong> [2,3,1,3,1,2]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 5000</code></li>
	<li style="user-select: auto;">It is guaranteed that there will be an answer for the given input <code style="user-select: auto;">nums</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<strong style="user-select: auto;">Follow Up:</strong> Can you do it in <code style="user-select: auto;">O(n)</code> time and/or <strong style="user-select: auto;">in-place</strong> with <code style="user-select: auto;">O(1)</code> extra space?</div>