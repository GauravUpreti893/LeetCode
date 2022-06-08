# Median in a row-wise sorted Matrix
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a row wise sorted matrix of size RxC where R and C are always odd,&nbsp;find the median of the matrix.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
R = 3, C = 3
M = [[1, 3, 5], 
&nbsp;    [2, 6, 9], 
&nbsp;    [3, 6, 9]]

<strong style="user-select: auto;">Output:</strong>&nbsp;5

<strong style="user-select: auto;">Explanation</strong>:
Sorting matrix elements gives us 
{1,2,3,3,5,6,6,9,9}. Hence, 5 is median. 
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
R = 3, C = 1
M = [[1], [2], [3]]
<strong style="user-select: auto;">Output: </strong>2
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">median()</strong>&nbsp;which takes the integers&nbsp;R and&nbsp;C along with the&nbsp;2D&nbsp;matrix&nbsp;as input parameters and returns the median of the matrix.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Time Complexity:</strong> O(32 * R * log(C))</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;= R,C&nbsp;&lt;=150<br style="user-select: auto;">
1&lt;= matrix[i][j] &lt;=2000</span><br style="user-select: auto;">
<br style="user-select: auto;">
&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>