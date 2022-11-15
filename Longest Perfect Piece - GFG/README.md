# Longest Perfect Piece
## Easy
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">arr[]</strong> of <strong style="user-select: auto;">N</strong> Numbers. A Perfect Piece is defined </span><span style="font-size: 18px; user-select: auto;">as </span><span style="font-size: 18px; user-select: auto;">a </span><span style="font-size: 18px; user-select: auto;">subarray</span><span style="font-size: 18px; user-select: auto;"> such that the difference between the minimum and the maximum value in that range is<strong style="user-select: auto;"> </strong>at most 1. Find the Maximal Length Perfect Piece.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">N = </strong>4</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">arr[] = </strong>{8, 8, 8, 8}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:
</strong>4</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></span>
<span style="font-size: 18px; user-select: auto;">The longest subarray is [1, 4]
where maximum=8 and minimum = 8 and
difference is 0, which is less than 1.
Its length is 4.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">N = </strong>11</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">arr[] = </strong>{5, 4, 5, 5, 6, 7, 8, 8, 8, 7, 6}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:
</strong>5</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></span>
<span style="font-size: 18px; user-select: auto;">The longest subarray is [6, 10]
where maximum=8 and minimum = 7 and
difference is 1. Its length is 5.</span> </pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">longestPerfectPiece()</strong> which takes an Integer N and an array arr[] of length N as input and returns the maximal length Perfect Piece.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N*logN)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(N)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">5</sup></span></p>
</div>