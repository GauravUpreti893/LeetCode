# Find Pair Given Difference
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">Arr[]</strong> of size <strong style="user-select: auto;">L</strong> and a number <strong style="user-select: auto;">N,</strong>&nbsp;you need to write a program to find if there exists a pair of elements in the array whose difference is <strong style="user-select: auto;">N</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>L = 6, N = 78
arr[] = {5, 20, 3, 2, 5, 80}<strong style="user-select: auto;">
Output: </strong>1
<strong style="user-select: auto;">Explanation: </strong>(2, 80) have difference of 78.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>L = 5, N = 45
arr[] = {90, 70, 20, 80, 50}
<strong style="user-select: auto;">Output: </strong>-1
<strong style="user-select: auto;">Explanation: </strong>There is no pair with difference of 45.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your&nbsp;Task:</strong><br style="user-select: auto;">
You need not take input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">findPair()&nbsp;</strong>which takes array arr, size of the array L and N as input parameters&nbsp;and returns True&nbsp;if required pair exists,&nbsp;else return False. </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(L* Log(L)).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=L&lt;=10<sup style="user-select: auto;">4&nbsp;</sup><br style="user-select: auto;">
1&lt;=Arr[i]&lt;=10<sup style="user-select: auto;">5&nbsp;</sup></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">0&lt;=N&lt;=10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>