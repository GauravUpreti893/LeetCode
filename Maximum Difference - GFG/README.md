# Maximum Difference
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given array A[] of integers, the task is to complete the function <strong style="user-select: auto;">findMaxDiff</strong>&nbsp;which finds the maximum absolute difference between nearest left and right smaller element of every element in array.If the element is the&nbsp;leftmost element, nearest smaller element on left side is considered as 0. Similarly if the element is the&nbsp;rightmost elements, smaller element on right side is considered as 0.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Examples:</span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input : arr[] = {2, 1, 8}
Output : 1
Left smaller  LS[] {0, 0, 1}
Right smaller RS[] {1, 0, 0}
Maximum Diff of abs(LS[i] - RS[i]) = 1 

Input  : arr[] = {2, 4, 8, 7, 7, 9, 3}
Output : 4
Left smaller   LS[] = {0, 2, 4, 4, 4, 7, 2}
Right smaller  RS[] = {0, 3, 7, 3, 3, 3, 0}
Maximum Diff of abs(LS[i] - RS[i]) = 7 - 3 = 4 

Input : arr[] = {5, 1, 9, 2, 5, 1, 7}
Output : 1</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong><br style="user-select: auto;">
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow .Each test case contains an integer N denoting the size of the array A. In the next line are N space separated values of the array A.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Output:</strong><br style="user-select: auto;">
For each test case output will be in a new line denoting the&nbsp;the maximum absolute difference between nearest left and right smaller element of every element in array.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=T&lt;=100<br style="user-select: auto;">
1&lt;=N&lt;=100<br style="user-select: auto;">
1&lt;=A[ ]&lt;=100<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Example(To be used only for expected output) :<br style="user-select: auto;">
Input:</strong><br style="user-select: auto;">
2<br style="user-select: auto;">
3<br style="user-select: auto;">
2 1 8<br style="user-select: auto;">
7<br style="user-select: auto;">
2&nbsp;4&nbsp;8&nbsp;7&nbsp;7&nbsp;9&nbsp;3<br style="user-select: auto;">
<strong style="user-select: auto;">Output</strong><br style="user-select: auto;">
1<br style="user-select: auto;">
4</span></p>
 <p style="user-select: auto;"></p>
            </div>