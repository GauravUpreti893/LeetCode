# Find patterns
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two&nbsp;strings S and&nbsp;W. Find the number of times W appears as a subsequence of&nbsp;string S where every character of string S can be included in forming at most one subsequence.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1: </strong> </span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> </span>
 <span style="font-size: 18px; user-select: auto;">S = "abcdrtbwerrcokokokd" </span>
 <span style="font-size: 18px; user-select: auto;">W = "bcd" </span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong> </span>
 <span style="font-size: 18px; user-select: auto;">2</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong> </span>
<span style="font-size: 18px; user-select: auto;">The two subsequences of string W are</span>
<span style="font-size: 18px; user-select: auto;">{ S<sub style="user-select: auto;">1</sub></span><span style="font-size: 18px; user-select: auto;"> , S<sub style="user-select: auto;">2</sub></span><span style="font-size: 18px; user-select: auto;"> , S<sub style="user-select: auto;">3</sub></span><span style="font-size: 18px; user-select: auto;"> } and { S<sub style="user-select: auto;">6</sub></span><sub style="user-select: auto;"> </sub><span style="font-size: 18px; user-select: auto;">, S<sub style="user-select: auto;">11</sub></span><span style="font-size: 18px; user-select: auto;"> , S</span><sub style="user-select: auto;">18</sub><span style="font-size: 18px; user-select: auto;"> }</span>
<span style="font-size: 18px; user-select: auto;">(Assuming 0- based indexing).</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2: </span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> </span>
<span style="font-size: 18px; user-select: auto;">S = "ascfret" </span>
<span style="font-size: 18px; user-select: auto;">W = "qwer" </span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong> </span>
<span style="font-size: 18px; user-select: auto;">0</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Explanation:</span></strong>
<span style="font-size: 18px; user-select: auto;">No valid subsequences are possible.</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">numberOfSubsequences()</strong>&nbsp;which takes the string S and string W<strong style="user-select: auto;">&nbsp;</strong>as input parameters&nbsp;and returns the number of subsequences of string W in string S.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N<sup style="user-select: auto;">2</sup>)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=|S|&lt;=1000<br style="user-select: auto;">
1&lt;=|W|&lt;=|S|</span></p>
</div>