# Spirally traversing a matrix
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a&nbsp;matrix&nbsp;of size r*c. Traverse the matrix in spiral form.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
r = 4, c = 4
matrix[][] = {{1, 2, 3, 4},
&nbsp;          {5, 6, 7, 8},
&nbsp;          {9, 10, 11, 12},
&nbsp;          {13, 14, 15,16}}
<strong style="user-select: auto;">Output</strong>: 
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
<strong style="user-select: auto;">Explanation</strong>:
</span><img alt="" src="https://www.geeksforgeeks.org/wp-content/uploads/spiral-matrix.png" style="height: 242px; width: 400px; user-select: auto;" class="img-responsive"><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
r = 3, c = 4  
matrix[][] = {{1, 2, 3, 4},
&nbsp;          {5, 6, 7, 8},
&nbsp;          {9, 10, 11, 12}}
<strong style="user-select: auto;">Output</strong>: 
1 2 3 4 8 12 11 10 9 5 6 7
<strong style="user-select: auto;">Explanation</strong>:
Applying same technique as shown above, 
output for the 2nd testcase will be 
1 2 3 4 8 12 11 10 9 5 6 7.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">You dont need to read input or print anything.&nbsp;Complete the function <strong style="user-select: auto;">spirallyTraverse()&nbsp;</strong>that takes <strong style="user-select: auto;">matrix, r </strong>and<strong style="user-select: auto;"> c&nbsp;</strong>as input&nbsp;parameters<strong style="user-select: auto;"> </strong>and returns a list of integers denoting the spiral traversal of matrix.&nbsp;<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(r*c)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(r*c), for returning the answer only.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= r, c &lt;= 100<br style="user-select: auto;">
0 &lt;= matrix<sub style="user-select: auto;">i</sub> &lt;= 100</span></p>
 <p style="user-select: auto;"></p>
            </div>