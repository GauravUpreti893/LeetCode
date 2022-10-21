# Reverse Spiral Form of Matrix
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a matrix as 2D array. Find the reverse&nbsp;spiral traversal of the matrix.&nbsp;<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: R = 3, C = 3
  a = {{9, 8, 7},
       {6, 5, 4},
&nbsp;      {3, 2, 1}}
<strong style="user-select: auto;">Output: </strong>5 6 3 2 1 4 7 8 9
<strong style="user-select: auto;">Explanation</strong>: Spiral form of the matrix
in reverse order starts from the centre 
and goes outward.
<img alt="" src="https://media.geeksforgeeks.org/img-practice/ScreenShot2022-10-17at10-1665981362.png" style="height: 181px; width: 200px; user-select: auto;"></span>

<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>R = 4, C = 4<strong style="user-select: auto;"> 
</strong>  a = {{1, 2, 3, 4},
       {5, 6, 7, 8},
&nbsp;      {9, 10, 11, 12}, 
&nbsp;      {13, 14, 15, 16}}
<strong style="user-select: auto;">Output: </strong>10 11 7 6 5 9 13 14 15 16 12 8 4 3 2 1
<strong style="user-select: auto;">Explanation</strong>: 
<img alt="" src="https://media.geeksforgeeks.org/img-practice/ScreenShot2022-10-17at10-1665981582.png" style="user-select: auto;">
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You dont need to read input or print anything. Complete the function <strong style="user-select: auto;">reverseSpiral()&nbsp;</strong>which takes <strong style="user-select: auto;">R, C </strong>and<strong style="user-select: auto;"> a</strong>&nbsp;as input parameters and returns the matrix in reverse spiral form.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(R*C)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(R*C)<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&nbsp;&lt;= R,C&nbsp;&lt;=100<br style="user-select: auto;">
1&nbsp;&lt;= a[R][C] &lt;=100</span></p>
</div>