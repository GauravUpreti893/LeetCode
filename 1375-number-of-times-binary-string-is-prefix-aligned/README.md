<h2><a href="https://leetcode.com/problems/number-of-times-binary-string-is-prefix-aligned/">1375. Number of Times Binary String Is Prefix-Aligned</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have a <strong style="user-select: auto;">1-indexed</strong> binary string of length <code style="user-select: auto;">n</code> where all the bits are <code style="user-select: auto;">0</code> initially. We will flip all the bits of this binary string (i.e., change them from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">1</code>) one by one. You are given a <strong style="user-select: auto;">1-indexed</strong> integer array <code style="user-select: auto;">flips</code> where <code style="user-select: auto;">flips[i]</code> indicates that the bit at index <code style="user-select: auto;">i</code> will be flipped in the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> step.</p>

<p style="user-select: auto;">A binary string is <strong style="user-select: auto;">prefix-aligned</strong> if, after the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> step, all the bits in the <strong style="user-select: auto;">inclusive</strong> range <code style="user-select: auto;">[1, i]</code> are ones and all the other bits are zeros.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the number of times the binary string is <strong style="user-select: auto;">prefix-aligned</strong> during the flipping process</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> flips = [3,2,4,1,5]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The binary string is initially "00000".
After applying step 1: The string becomes "00100", which is not prefix-aligned.
After applying step 2: The string becomes "01100", which is not prefix-aligned.
After applying step 3: The string becomes "01110", which is not prefix-aligned.
After applying step 4: The string becomes "11110", which is prefix-aligned.
After applying step 5: The string becomes "11111", which is prefix-aligned.
We can see that the string was prefix-aligned 2 times, so we return 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> flips = [4,1,2,3]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> The binary string is initially "0000".
After applying step 1: The string becomes "0001", which is not prefix-aligned.
After applying step 2: The string becomes "1001", which is not prefix-aligned.
After applying step 3: The string becomes "1101", which is not prefix-aligned.
After applying step 4: The string becomes "1111", which is prefix-aligned.
We can see that the string was prefix-aligned 1 time, so we return 1.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == flips.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">flips</code> is a permutation of the integers in the range <code style="user-select: auto;">[1, n]</code>.</li>
</ul>
</div>