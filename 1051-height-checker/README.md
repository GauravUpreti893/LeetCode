<h2><a href="https://leetcode.com/problems/height-checker/">1051. Height Checker</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A school is trying to take an annual photo of all the students. The students are asked to stand in a single file line in <strong style="user-select: auto;">non-decreasing order</strong> by height. Let this ordering be represented by the integer array <code style="user-select: auto;">expected</code> where <code style="user-select: auto;">expected[i]</code> is the expected height of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> student in line.</p>

<p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">heights</code> representing the <strong style="user-select: auto;">current order</strong> that the students are standing in. Each <code style="user-select: auto;">heights[i]</code> is the height of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> student in line (<strong style="user-select: auto;">0-indexed</strong>).</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">number of indices</strong> where </em><code style="user-select: auto;">heights[i] != expected[i]</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> heights = [1,1,4,2,1,3]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> 
heights:  [1,1,<u style="user-select: auto;">4</u>,2,<u style="user-select: auto;">1</u>,<u style="user-select: auto;">3</u>]
expected: [1,1,<u style="user-select: auto;">1</u>,2,<u style="user-select: auto;">3</u>,<u style="user-select: auto;">4</u>]
Indices 2, 4, and 5 do not match.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> heights = [5,1,2,3,4]
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong>
heights:  [<u style="user-select: auto;">5</u>,<u style="user-select: auto;">1</u>,<u style="user-select: auto;">2</u>,<u style="user-select: auto;">3</u>,<u style="user-select: auto;">4</u>]
expected: [<u style="user-select: auto;">1</u>,<u style="user-select: auto;">2</u>,<u style="user-select: auto;">3</u>,<u style="user-select: auto;">4</u>,<u style="user-select: auto;">5</u>]
All indices do not match.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> heights = [1,2,3,4,5]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong>
heights:  [1,2,3,4,5]
expected: [1,2,3,4,5]
All indices match.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= heights.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= heights[i] &lt;= 100</code></li>
</ul>
</div>