# Matrix Chain Multiplication
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a sequence of matrices, find the most efficient way to multiply these matrices together.&nbsp;The efficient way is the one that involves&nbsp;the least number of&nbsp;multiplications. </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">The dimensions of the matrices are given in an array <strong style="user-select: auto;">arr[]</strong>&nbsp;of&nbsp;size&nbsp;<strong style="user-select: auto;">N</strong> (such that N = number of matrices + 1) where the <strong style="user-select: auto;">i<sup style="user-select: auto;">th</sup></strong> matrix has the dimensions&nbsp;<strong style="user-select: auto;">(arr[i-1]&nbsp;x arr[i])</strong>.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> N = 5
arr = {40, 20, 30, 10, 30}
<strong style="user-select: auto;">Output:</strong> 26000
<strong style="user-select: auto;">Explaination:</strong> There are 4 matrices of dimension 
40x20, 20x30, 30x10, 10x30. Say the matrices are 
named as A, B, C, D. Out of all possible combinations,
the most efficient way is (A*(B*C))*D. 
The number of operations are -
20*30*10 + 40*20*10 + 40*10*30 = 26000.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> N = 4
arr = {10, 30, 5, 60}
<strong style="user-select: auto;">Output:</strong> 4500
<strong style="user-select: auto;">Explaination:</strong> The matrices have dimensions 
10*30, 30*5, 5*60. Say the matrices are A, B 
and C. Out of all possible combinations,the
most efficient way is (A*B)*C. The 
number of multiplications are -
10*30*5 + 10*5*60 = 4500.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to take input or print anything. Your task is to complete the function <strong style="user-select: auto;">matrixMultiplication()</strong> which takes the value <strong style="user-select: auto;">N</strong> and the array <strong style="user-select: auto;">arr[]</strong> as input parameters and returns the minimum number of multiplication operations needed to be performed.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N<sup style="user-select: auto;">3</sup>)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(N<sup style="user-select: auto;">2</sup>)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong>&nbsp;<br style="user-select: auto;">
2 ≤ N ≤ 100<br style="user-select: auto;">
1 ≤ arr[i] ≤ 500</span></p>
 <p style="user-select: auto;"></p>
            </div>