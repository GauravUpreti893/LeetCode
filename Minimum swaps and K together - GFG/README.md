# Minimum swaps and K together
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">arr</strong> of <strong style="user-select: auto;">n</strong> positive integers and a number&nbsp;<strong style="user-select: auto;">k</strong>. One can apply a swap operation on the array any number of times, i.e choose any two index i and j&nbsp;(i &lt; j) and swap arr[i] , arr[j] . Find the&nbsp;<strong style="user-select: auto;">minimum</strong>&nbsp;number of swaps required to bring all the numbers less than or equal to&nbsp;<strong style="user-select: auto;">k</strong>&nbsp;together, i.e. make them a contiguous&nbsp;subarray.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input :</strong> 
arr[ ] = {2, 1, 5, 6, 3} 
K = 3
<strong style="user-select: auto;">Output :</strong> 
1
<strong style="user-select: auto;">Explanation:</strong>
To bring elements 2, 1, 3 together,
swap index 2 with 4 (0-based indexing),
i.e. element arr[2] = 5 with arr[4] = 3
such that final array will be- 
arr[] = {2, 1, 3, 6, 5}
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input :</strong> 
arr[ ] = {2, 7, 9, 5, 8, 7, 4} 
K = 6 <strong style="user-select: auto;">
Output :</strong>  
2 
<strong style="user-select: auto;">Explanation:</strong> 
To bring elements 2, 5, 4 together, 
swap index 0 with 2 (0-based indexing)
and index 4 with 6 (0-based indexing)
such that final array will be- 
arr[] = {9, 7, 2, 5, 4, 7, 8}</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong style="user-select: auto;">minSwap()</strong> that takes an array <strong style="user-select: auto;">(arr)</strong>, sizeOfArray <strong style="user-select: auto;">(n)</strong>, an integer <strong style="user-select: auto;">K,</strong>&nbsp;and return the minimum swaps required. The driver code takes care of the printing.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 ≤ Arr<sub style="user-select: auto;">i</sub>, K&nbsp;≤10<sup style="user-select: auto;">7</sup></span></p>

<div id="gtx-trans" style="position: absolute; left: 128px; top: 279px; user-select: auto;">
<div class="gtx-trans-icon" style="user-select: auto;">&nbsp;</div>
</div>
 <p style="user-select: auto;"></p>
            </div>