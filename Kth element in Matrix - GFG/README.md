# Kth element in Matrix
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;">Given a&nbsp;N&nbsp;x N&nbsp;matrix, where every row and column is sorted in non-decreasing order. Find the kth smallest element in the matrix.</span></span></p>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></span></div>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 4
mat[][] =     {{16, 28, 60, 64},
                   {22, 41, 63, 91},
                   {27, 50, 87, 93},
                   {36, 78, 87, 94 }}
K = 3
<strong style="user-select: auto;">Output: </strong>27
<strong style="user-select: auto;">Explanation: </strong>27 is the 3<sup style="user-select: auto;">rd</sup> smallest element.</span></span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></span></div>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 4
mat[][] =     {{10, 20, 30, 40}
                   {15, 25, 35, 45}
                   {24, 29, 37, 48}
                   {32, 33, 39, 50}}
K = 7
<strong style="user-select: auto;">Output: </strong>30
<strong style="user-select: auto;">Explanation: </strong>30 is the 7<sup style="user-select: auto;">th</sup> smallest element.</span></span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<div style="user-select: auto;"><br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;">You don't need to read input or print anything. Complete the function <strong style="user-select: auto;">kthsmallest()</strong> which takes the mat, N and K as input parameters and returns the kth smallest element in the matrix.</span></span></div>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(K*Log(N))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N)</span></span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 50<br style="user-select: auto;">
1 &lt;= mat[][] &lt;= 10000</span></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;">1 &lt;= K &lt;= N*N</span></span><br style="user-select: auto;">
<br style="user-select: auto;">
&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>