<h2><a href="https://leetcode.com/problems/array-nesting/">565. Array Nesting</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">nums</code> of length <code style="user-select: auto;">n</code> where <code style="user-select: auto;">nums</code> is a permutation of the numbers in the range <code style="user-select: auto;">[0, n - 1]</code>.</p>

<p style="user-select: auto;">You should build a set <code style="user-select: auto;">s[k] = {nums[k], nums[nums[k]], nums[nums[nums[k]]], ... }</code> subjected to the following rule:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The first element in <code style="user-select: auto;">s[k]</code> starts with the selection of the element <code style="user-select: auto;">nums[k]</code> of <code style="user-select: auto;">index = k</code>.</li>
	<li style="user-select: auto;">The next element in <code style="user-select: auto;">s[k]</code> should be <code style="user-select: auto;">nums[nums[k]]</code>, and then <code style="user-select: auto;">nums[nums[nums[k]]]</code>, and so on.</li>
	<li style="user-select: auto;">We stop adding right before a duplicate element occurs in <code style="user-select: auto;">s[k]</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the longest length of a set</em> <code style="user-select: auto;">s[k]</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [5,4,0,3,1,6,2]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> 
nums[0] = 5, nums[1] = 4, nums[2] = 0, nums[3] = 3, nums[4] = 1, nums[5] = 6, nums[6] = 2.
One of the longest sets s[k]:
s[0] = {nums[0], nums[5], nums[6], nums[2]} = {5, 6, 2, 0}
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [0,1,2]
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt; nums.length</code></li>
	<li style="user-select: auto;">All the values of <code style="user-select: auto;">nums</code> are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>