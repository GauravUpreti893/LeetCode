# Enemy
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You live in Geek land. Geek land can be seen as a grid of shape <strong style="user-select: auto;">N</strong> x&nbsp;<strong style="user-select: auto;">M</strong>.Their&nbsp;are <strong style="user-select: auto;">K</strong>&nbsp;enemy at <strong style="user-select: auto;">K</strong>&nbsp;positions. Each enemy blocks the row and column to which it belongs. You have to find the largest continuous area that is not blocked.No two enemies share the same row or the same column.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 2
M = 2
K = 1
enemy[]={{2,2}}
<strong style="user-select: auto;">Output:</strong>
1
<strong style="user-select: auto;">Explanation:</strong>
Since only (1,1) cell is free from the enemy hence answer is 1.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 3
M = 3
K = 1
enemy[]={{3,3}}
<strong style="user-select: auto;">Output:</strong>
4
<strong style="user-select: auto;">Explanation:</strong>
The cells (1,1),(1,2) ,(2,1) and (2,2) are free hence answer =4.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">largestArea()</strong>&nbsp;which takes the size of geek land <strong style="user-select: auto;">n,m</strong> and a 2-D matrix <strong style="user-select: auto;">enemy </strong>of size <strong style="user-select: auto;">k</strong> denoting the coordinates of the enemy's and need to return the largest area that is free.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(KlogK)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(K)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N,M &lt;= 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
0&lt;=K&lt;=min(N,M)<br style="user-select: auto;">
1&lt;=X<sub style="user-select: auto;">i</sub>&lt;=N<br style="user-select: auto;">
1&lt;=Y<sub style="user-select: auto;">i</sub>&lt;=M</span></p>

<p style="user-select: auto;">&nbsp;</p>
</div>