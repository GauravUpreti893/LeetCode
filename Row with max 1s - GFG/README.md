# Row with max 1s
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a boolean 2D array of n x m dimensions where each row is sorted. Find&nbsp;the&nbsp;0-based index of the first row&nbsp;that has&nbsp;the maximum number of <strong style="user-select: auto;">1's</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: 
</strong>N = 4 , M = 4
Arr[][] = {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}}
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> Row 2 contains <strong style="user-select: auto;">4</strong> 1's (0-based
indexing).
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> 
N = 2, M = 2
Arr[][] = {{0, 0}, {1, 1}}
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> Row 1 contains <strong style="user-select: auto;">2</strong> 1's (0-based
indexing).
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">rowWithMax1s()</strong>&nbsp;which takes the array of booleans&nbsp;<strong style="user-select: auto;">arr[][],</strong><strong style="user-select: auto;">&nbsp;n </strong>and <strong style="user-select: auto;">m&nbsp;</strong>as input parameters and returns the 0-based index of the first row that has the most number of 1s. If no such&nbsp;row exists, return -1.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N+M)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N, M&nbsp;≤ 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
0 ≤ Arr[i][j]&nbsp;≤ 1&nbsp;</span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>