# Check if strings are rotations of each other or not
## Easy
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two strings&nbsp;s1&nbsp;and&nbsp;s2. The task is to check&nbsp;if s2 is a rotated version of the string s1. The characters in the strings are in lowercase.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>geeksforgeeks
forgeeksgeeks
<strong style="user-select: auto;">Output: 
</strong>1<strong style="user-select: auto;">
Explanation: </strong>s1 is geeksforgeeks, s2 is
forgeeksgeeks. Clearly, s2 is a rotated
version of s1 as s2 can be obtained by
left-rotating s1 by 5 units.</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>mightandmagic
andmagicmigth
<strong style="user-select: auto;">Output: 
</strong>0<strong style="user-select: auto;">
Explanation: </strong>Here with any amount of
rotation s2 can't be obtained by s1.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
The task is to complete the function&nbsp;<strong style="user-select: auto;">areRotations() </strong>which checks if the two strings are rotations of each other.&nbsp;The function returns&nbsp;true&nbsp;if string 1 can be obtained by rotating string 2, else it returns&nbsp;false.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Complexity:</strong>&nbsp;O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Note:</strong> N = |s1|.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= |s1|,&nbsp;|s2| &lt;= 10<sup style="user-select: auto;">7</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>