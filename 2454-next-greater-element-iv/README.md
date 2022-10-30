<h2><a href="https://leetcode.com/problems/next-greater-element-iv/">2454. Next Greater Element IV</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> array of non-negative integers <code style="user-select: auto;">nums</code>. For each integer in <code style="user-select: auto;">nums</code>, you must find its respective <strong style="user-select: auto;">second greater</strong> integer.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">second greater</strong> integer of <code style="user-select: auto;">nums[i]</code> is <code style="user-select: auto;">nums[j]</code> such that:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">j &gt; i</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums[j] &gt; nums[i]</code></li>
	<li style="user-select: auto;">There exists <strong style="user-select: auto;">exactly one</strong> index <code style="user-select: auto;">k</code> such that <code style="user-select: auto;">nums[k] &gt; nums[i]</code> and <code style="user-select: auto;">i &lt; k &lt; j</code>.</li>
</ul>

<p style="user-select: auto;">If there is no such <code style="user-select: auto;">nums[j]</code>, the second greater integer is considered to be <code style="user-select: auto;">-1</code>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, in the array <code style="user-select: auto;">[1, 2, 4, 3]</code>, the second greater integer of <code style="user-select: auto;">1</code> is <code style="user-select: auto;">4</code>, <code style="user-select: auto;">2</code> is <code style="user-select: auto;">3</code>,&nbsp;and that of <code style="user-select: auto;">3</code> and <code style="user-select: auto;">4</code> is <code style="user-select: auto;">-1</code>.</li>
</ul>

<p style="user-select: auto;">Return<em style="user-select: auto;"> an integer array </em><code style="user-select: auto;">answer</code><em style="user-select: auto;">, where </em><code style="user-select: auto;">answer[i]</code><em style="user-select: auto;"> is the second greater integer of </em><code style="user-select: auto;">nums[i]</code><em style="user-select: auto;">.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,4,0,9,6]
<strong style="user-select: auto;">Output:</strong> [9,6,6,-1,-1]
<strong style="user-select: auto;">Explanation:</strong>
0th index: 4 is the first integer greater than 2, and 9 is the second integer greater than 2, to the right of 2.
1st index: 9 is the first, and 6 is the second integer greater than 4, to the right of 4.
2nd index: 9 is the first, and 6 is the second integer greater than 0, to the right of 0.
3rd index: There is no integer greater than 9 to its right, so the second greater integer is considered to be -1.
4th index: There is no integer greater than 6 to its right, so the second greater integer is considered to be -1.
Thus, we return [9,6,6,-1,-1].
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,3]
<strong style="user-select: auto;">Output:</strong> [-1,-1]
<strong style="user-select: auto;">Explanation:</strong>
We return [-1,-1] since neither integer has any integer greater than it.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>