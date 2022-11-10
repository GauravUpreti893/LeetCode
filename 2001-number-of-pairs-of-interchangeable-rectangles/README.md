<h2><a href="https://leetcode.com/problems/number-of-pairs-of-interchangeable-rectangles/">2001. Number of Pairs of Interchangeable Rectangles</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given <code style="user-select: auto;">n</code> rectangles represented by a <strong style="user-select: auto;">0-indexed</strong> 2D integer array <code style="user-select: auto;">rectangles</code>, where <code style="user-select: auto;">rectangles[i] = [width<sub style="user-select: auto;">i</sub>, height<sub style="user-select: auto;">i</sub>]</code> denotes the width and height of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> rectangle.</p>

<p style="user-select: auto;">Two rectangles <code style="user-select: auto;">i</code> and <code style="user-select: auto;">j</code> (<code style="user-select: auto;">i &lt; j</code>) are considered <strong style="user-select: auto;">interchangeable</strong> if they have the <strong style="user-select: auto;">same</strong> width-to-height ratio. More formally, two rectangles are <strong style="user-select: auto;">interchangeable</strong> if <code style="user-select: auto;">width<sub style="user-select: auto;">i</sub>/height<sub style="user-select: auto;">i</sub> == width<sub style="user-select: auto;">j</sub>/height<sub style="user-select: auto;">j</sub></code> (using decimal division, not integer division).</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">number</strong> of pairs of <strong style="user-select: auto;">interchangeable</strong> rectangles in </em><code style="user-select: auto;">rectangles</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> rectangles = [[4,8],[3,6],[10,20],[15,30]]
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> The following are the interchangeable pairs of rectangles by index (0-indexed):
- Rectangle 0 with rectangle 1: 4/8 == 3/6.
- Rectangle 0 with rectangle 2: 4/8 == 10/20.
- Rectangle 0 with rectangle 3: 4/8 == 15/30.
- Rectangle 1 with rectangle 2: 3/6 == 10/20.
- Rectangle 1 with rectangle 3: 3/6 == 15/30.
- Rectangle 2 with rectangle 3: 10/20 == 15/30.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> rectangles = [[4,5],[7,8]]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> There are no interchangeable pairs of rectangles.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == rectangles.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">rectangles[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= width<sub style="user-select: auto;">i</sub>, height<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>