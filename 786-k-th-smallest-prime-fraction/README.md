<h2><a href="https://leetcode.com/problems/k-th-smallest-prime-fraction/">786. K-th Smallest Prime Fraction</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a sorted integer array <code style="user-select: auto;">arr</code> containing <code style="user-select: auto;">1</code> and <strong style="user-select: auto;">prime</strong> numbers, where all the integers of <code style="user-select: auto;">arr</code> are unique. You are also given an integer <code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;">For every <code style="user-select: auto;">i</code> and <code style="user-select: auto;">j</code> where <code style="user-select: auto;">0 &lt;= i &lt; j &lt; arr.length</code>, we consider the fraction <code style="user-select: auto;">arr[i] / arr[j]</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the</em> <code style="user-select: auto;">k<sup style="user-select: auto;">th</sup></code> <em style="user-select: auto;">smallest fraction considered</em>. Return your answer as an array of integers of size <code style="user-select: auto;">2</code>, where <code style="user-select: auto;">answer[0] == arr[i]</code> and <code style="user-select: auto;">answer[1] == arr[j]</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [1,2,3,5], k = 3
<strong style="user-select: auto;">Output:</strong> [2,5]
<strong style="user-select: auto;">Explanation:</strong> The fractions to be considered in sorted order are:
1/5, 1/3, 2/5, 1/2, 3/5, and 2/3.
The third fraction is 2/5.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [1,7], k = 1
<strong style="user-select: auto;">Output:</strong> [1,7]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= arr.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr[i] &lt;= 3 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">arr[0] == 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">arr[i]</code> is a <strong style="user-select: auto;">prime</strong> number for <code style="user-select: auto;">i &gt; 0</code>.</li>
	<li style="user-select: auto;">All the numbers of <code style="user-select: auto;">arr</code> are <strong style="user-select: auto;">unique</strong> and sorted in <strong style="user-select: auto;">strictly increasing</strong> order.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= arr.length * (arr.length - 1) / 2</code></li>
</ul>
</div>