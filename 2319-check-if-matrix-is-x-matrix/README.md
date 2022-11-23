<h2><a href="https://leetcode.com/problems/check-if-matrix-is-x-matrix/">2319. Check if Matrix Is X-Matrix</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A square matrix is said to be an <strong style="user-select: auto;">X-Matrix</strong> if <strong style="user-select: auto;">both</strong> of the following conditions hold:</p>

<ol style="user-select: auto;">
	<li style="user-select: auto;">All the elements in the diagonals of the matrix are <strong style="user-select: auto;">non-zero</strong>.</li>
	<li style="user-select: auto;">All other elements are 0.</li>
</ol>

<p style="user-select: auto;">Given a 2D integer array <code style="user-select: auto;">grid</code> of size <code style="user-select: auto;">n x n</code> representing a square matrix, return <code style="user-select: auto;">true</code><em style="user-select: auto;"> if </em><code style="user-select: auto;">grid</code><em style="user-select: auto;"> is an X-Matrix</em>. Otherwise, return <code style="user-select: auto;">false</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/05/03/ex1.jpg" style="width: 311px; height: 320px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[2,0,0,1],[0,3,1,0],[0,5,2,0],[4,0,0,2]]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> Refer to the diagram above. 
An X-Matrix should have the green elements (diagonals) be non-zero and the red elements be 0.
Thus, grid is an X-Matrix.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/05/03/ex2.jpg" style="width: 238px; height: 246px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[5,7,0],[0,3,1],[0,5,0]]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> Refer to the diagram above.
An X-Matrix should have the green elements (diagonals) be non-zero and the red elements be 0.
Thus, grid is not an X-Matrix.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == grid.length == grid[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">3 &lt;= n &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= grid[i][j] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>