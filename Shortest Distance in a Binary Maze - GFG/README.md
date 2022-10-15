# Shortest Distance in a Binary Maze
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a <strong style="user-select: auto;">n * m</strong>&nbsp;matrix <strong style="user-select: auto;">grid</strong> where each element can either be <strong style="user-select: auto;">0</strong> or <strong style="user-select: auto;">1</strong>. You&nbsp;need to find the shortest distance&nbsp;between a given source cell to a destination cell. The path can only be created out of a cell if its value is 1.&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">If the path is not possible between source cell and destination cell, then return <strong style="user-select: auto;">-1</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note :&nbsp;</strong>You can move into an adjacent cell if that adjacent cell is filled with element 1. Two cells are adjacent if they share a side. In other words,&nbsp;you can move in one of the four&nbsp;directions, Up, Down, Left&nbsp;and Right.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong>
<span style="font-size: 18px; user-select: auto;">grid[][] = {{1, 1, 1, 1},
            {1, 1, 0, 1},
            {1, 1, 1, 1},
            {1, 1, 0, 0},
            {1, 0, 0, 1}}</span>
<span style="font-size: 18px; user-select: auto;">source = {0, 1}</span>
<span style="font-size: 18px; user-select: auto;">destination = {2, 2}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong></span>
<span style="font-size: 18px; user-select: auto;">3</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></span>
<span style="font-size: 18px; user-select: auto;">1 <strong style="user-select: auto;">1</strong> 1 1
1 <strong style="user-select: auto;">1</strong> 0 1
1 <strong style="user-select: auto;">1</strong> <strong style="user-select: auto;">1</strong> 1
1 1 0 0
1 0 0 1
The highlighted part in the matrix denotes the 
shortest path from source to destination cell.</span>
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong>
<span style="font-size: 18px; user-select: auto;">grid[][] = {{1, 1, 1, 1, 1},
            {1, 1, 1, 1, 1},
            {1, 1, 1, 1, 0},
            {1, 0, 1, 0, 1}}</span>
<span style="font-size: 18px; user-select: auto;">source = {0, 0}</span>
<span style="font-size: 18px; user-select: auto;">destination = {3, 4}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong></span>
<span style="font-size: 18px; user-select: auto;">-1</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></span>
<span style="font-size: 18px; user-select: auto;">The path is not possible between source and</span>&nbsp;
<span style="font-size: 18px; user-select: auto;">destination, hence return -1.</span>
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You don't need to read or print anything. Your task is to complete the function <strong style="user-select: auto;">shortestPath()&nbsp;</strong>which takes the a 2D integer array&nbsp;<strong style="user-select: auto;">grid</strong>, <strong style="user-select: auto;">source</strong> cell and <strong style="user-select: auto;">destination</strong> cell&nbsp;as an input parameters and returns the shortest distance between source and destination cell.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(n * m)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Complexity:&nbsp;</strong>O(n * m)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1 ≤ n, m ≤ 500</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">grid[i][j] == 0 or grid[i][j] == 1</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">The source and destination cells are always inside the given matrix.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">The source and destination cells always contain 1.</span></li>
</ul>
</div>