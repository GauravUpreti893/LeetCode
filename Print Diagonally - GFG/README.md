# Print Diagonally
## Easy
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Give a <strong style="user-select: auto;">N * N</strong> square matrix <strong style="user-select: auto;">A</strong>, return all the elements of its anti-diagonals from <strong style="user-select: auto;">top to bottom</strong>. </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> 
N = 2
A = [[1, 2],
     [3, 4]]
<strong style="user-select: auto;">Output:</strong>
1 2 3 4
<strong style="user-select: auto;">Explanation:</strong> 
<img alt="" src="https://media.geeksforgeeks.org/img-practice/ScreenShot2022-10-17at9-1665980852.png" style="user-select: auto;">
</span><span style="font-size: 18px; user-select: auto;">Hence, elements will be returned in the 
order {1, 2, 3, 4}.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: 
</strong>N = 3 
A = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]
<strong style="user-select: auto;">Output:</strong> 
1 2 4 3 5 7 6 8 9
<strong style="user-select: auto;">Explanation:</strong> 
<img alt="" src="https://media.geeksforgeeks.org/img-practice/ScreenShot2022-10-17at9-1665980941.png" style="user-select: auto;">
Hence, elements will be returned in 
the order {1, 2, 4, 3, 5, 7, 6, 8, 9}.
</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">downwardDigonal()</strong> which takes an integer <strong style="user-select: auto;">N</strong> and a 2D matrix <strong style="user-select: auto;">A[ ][ ]</strong> as input parameters and returns the list of all elements of its anti-diagonals from <strong style="user-select: auto;">top to bottom</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N*N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxillary Space:&nbsp;</strong>O(N*N)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N, M ≤ 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
0 ≤ A[i][j] ≤ 10<sup style="user-select: auto;">6</sup></span></p>
</div>