<h2><a href="https://leetcode.com/problems/sum-of-subsequence-widths/">891. Sum of Subsequence Widths</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">The <strong style="user-select: auto;">width</strong> of a sequence is the difference between the maximum and minimum elements in the sequence.</p>

<p style="user-select: auto;">Given an array of integers <code style="user-select: auto;">nums</code>, return <em style="user-select: auto;">the sum of the <strong style="user-select: auto;">widths</strong> of all the non-empty <strong style="user-select: auto;">subsequences</strong> of </em><code style="user-select: auto;">nums</code>. Since the answer may be very large, return it <strong style="user-select: auto;">modulo</strong> <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">subsequence</strong> is a sequence that can be derived from an array by deleting some or no elements without changing the order of the remaining elements. For example, <code style="user-select: auto;">[3,6,2,7]</code> is a subsequence of the array <code style="user-select: auto;">[0,3,1,6,2,2,7]</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,1,3]
<strong style="user-select: auto;">Output:</strong> 6
Explanation: The subsequences are [1], [2], [3], [2,1], [2,3], [1,3], [2,1,3].
The corresponding widths are 0, 0, 0, 1, 1, 2, 2.
The sum of these widths is 6.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2]
<strong style="user-select: auto;">Output:</strong> 0
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>